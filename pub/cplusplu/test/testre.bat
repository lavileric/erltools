echo %1
..\cplus %1 > inter
..\cplus inter > inter1
echo "================================" >> res   
echo %1 >> res
echo "================================" >> res
fc/CW inter inter1 >> %2
type inter1 >> %3
del inter
del inter1




