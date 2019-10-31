/* CIS2107 Lab9 Sec. 04
   "all_letters"
   Christopher Scott
*/
#include "my_string.h"

int all_letters(char *s){
    int all_upper = 1;
    int all_lower = 1;
    while(*s != '\0'){
        if(*s < 'A'  || *s > 'Z')
            all_upper = 0;
        if(*s < 'a' || *s > 'z')
            all_lower = 0;
        s++;
    }
    if(all_upper)
        return all_upper;
    else if(all_lower)
        return all_lower;
    else
        return 0;
}
