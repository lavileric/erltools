language metalang;

#include "tablist.h"

main ()
{
    PTREE   list ;
    
    MetaInit();
    output =  2 ;
    list   =  () * "10" * "4" * "4" * "1" * "10" * "9" * "3" * "9" * "10" * "20" * "20" * "21" * "3";
    
    TabList tablist (list) ;
    
    tablist.Sort();
    tablist.Debug();
}


