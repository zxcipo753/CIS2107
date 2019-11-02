/* CIS2107 Lab9 Sec. 04
   "ends_with_ignore_case"
   Christopher Scott
*/
#include "my_string.h"

// checks if the string s ends with substring suff
int ends_with_ignore_case(char *s, char *suff){
    int suff_len = 0;
    int s_len = 0;

    for(; *(s + s_len) != '\0'; s_len++);
    for(;*(suff + suff_len) != '\0'; suff_len++);
    if( suff_len > s_len)
        return 0;

    int diff = s_len - suff_len;
    char *t = s + diff;
    while(*t != '\0' && *suff != '\0'){
        int current = *t - *suff;
        switch(current){
            case 0: case 32: case -32:
                t++;
                suff++;
                break;
            default:
                return 0;
        }
    }
    return 1;
}
