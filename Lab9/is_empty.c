/* CIS2107 Lab9 Sec. 04
   "is_empty"
   Christopher Scott
*/

#include "my_string.h"

// return 1 if string s is NULL or contains only whitespace, 0 otherwise
int is_empty(char *s){
    if(*s == '\0')
        return 1;
 
    for(;*s != '\0'; s++){
        if(*s != ' ' || *s != '\n' || *s != '\t') // test if the character is not whitespace
            return 0;
    }
    return 1; // string only contains whitespace
}
