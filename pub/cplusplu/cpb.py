#! /usr/bin/env python

import sys
import os
import filecmp
import time
import string
import fileinput
import re
import glob


def Exit(error):
    
    if error == -1 :
        print "usage : cpb [-emacs] [-set setfile] filename(s)"
        sys.exit(error)
    else :
		print "!!!! Failed"
        
def Print(inputFile):
    for line in fileinput.input(inputFile):
        print line
    fileinput.close()

def Cpbem(fileName,fileOutput,errorFile,setOrder) :

    extension = string.upper(os.path.splitext(os.path.basename(fileName)) [1])

    if extension == ".CH" :
        command = "chopb " + setOrder + " " + fileName + " > " + fileOutput
    elif extension == ".MET" :
        command = "metab " + " " + fileName + " > " + fileOutput  
    elif extension == ".MKP" or extension == ".MKO" :
        command = "asnext2 -b " + " " + fileName + " > " + fileOutput
    elif extension == ".JAVA" :
        command = "pjava " + " " + fileName + " > " + fileOutput
    else :
        command = "cplus " + setOrder + " " + fileName + " > " + fileOutput
        
    command += " 2>" + errorFile
    
    result=os.system(command)
    if result == 0 :
        if extension == ".ASN" or extension == ".MKP" or extension == ".MKO" :
            command = 'echo "asn pretty printing. No Error Found." >> ' + errorFile
            os.system(command)      
    return result 
    
def Grep(searched,file):
    for line in fileinput.input(file):
        if re.compile(searched).search(line) : 
            fileinput.close()
            return 1
    return 0

# print len(sys.argv),sys.argv

# index for scanning args
indexArg=1

#give help if no argument is given
if len(sys.argv) <= indexArg :
    Exit(-1)
    
# looks if emacs error
emacs = ""
param = sys . argv[indexArg]
if param == "-emacs" :
    emacs = "-emacs"
    indexArg += 1

#give help if not enough argument is given
if len(sys.argv) <= indexArg :
    Exit(-1)

#look if there is a set indication
setOrder=""
param = sys . argv[indexArg]
if param == "-set" :
    indexArg += 1
    setOrder = "-set " + sys.argv[indexArg] 
    indexArg += 1

#give help if not enough argument is given
if len(sys.argv) <= indexArg :
    Exit(-1)

# print "emacs and setOrder : ",emacs,setOrder


#process all the files
refNumb = "%d" % os.getpid()
errorFile = "error_" + refNumb
resFile = "res_cpb_" + refNumb

while len(sys.argv) > indexArg :
#    print "Processing files : ",glob.glob(sys.argv[indexArg])
    listFile = glob.glob(sys.argv[indexArg])
    indexList = 0
    
    while indexList < len(listFile):
        #pretty file
        inputFile = listFile[indexList]
        indexList += 1
        print "Processing file : ",inputFile
        result = Cpbem(inputFile,resFile,errorFile,setOrder) 
        if result != 0 :
            Print(errorFile)
        result = Grep ("For details see",errorFile)
        if result != 1 :
            result = Grep("No Error Found",errorFile)
        
        os.remove(errorFile)
        if result != 1 :
            os.remove(resFile)
            Exit(3)
        else :
            os.remove(inputFile)
            os.rename(resFile,inputFile)
        print "done"

    indexArg += 1
