/* CIS2107 Lab9 Sec. 09
   "rm_left_space"
   Christopher Scott
*/
#include "my_string.h"

// Strip whitespace from the beginning of the string
void rm_left_space(char *s){
    int spaces = 0;
    // Count the number of spaces
    for(size_t i = 0; *(s + i) == ' ' || *(s + i) == '\n' || *(s + i) == '\t'; spaces++, i++)
        ;
    // Shift letters
    for(size_t i = 0; (*(s + i) = *(s + spaces)) != '\0'; i++)
        ;
}
    
