/* CIS2107 Lab9 Sec. 04
   "rm_right_space"
   Christopher Scott
*/
#include "my_string.h"


void rm_right_space(char *s){
    size_t count = 0;
    // Count letters
    for(size_t i = 0; *(s + i) != '\0'; i++, count++);
            
    --count;
    while(*(s + count) != ' ' || *(s + count) != '\n' || *(s + count) != '\t')
        --count;
    *(s + count) = '\0';
}
