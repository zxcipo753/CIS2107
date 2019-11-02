/* CIS2107 Lab9 Sec. 09
   "rm_left_space"
   Christopher Scott
*/
#include "my_string.h"

// Strip whitespace from the beginning of the string
void rm_left_space(char *s){
    int spaces = 0;
    // Count the number of spaces
    for(int i = 0; *(s + i) == ' ' || *(s + i) == '\n' || *(s + i) == '\t'; spaces++, i++)
        ;
//    printf("%d spaces in string: %s\n", spaces, s);

    // Shift letters
    int i = 0;
    for(; (*(s + i) = *(s + i + spaces)) != '\0'; i++);
    *(s+i) = '\0';
//    printf("\nstring at end of function: %s\n", s);
    return;
}
    
