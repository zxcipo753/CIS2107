/* CIS2107 Lab 9 Sec. 04
   "ptr_to"
   Christopher Scott
*/
#include "my_string.h"

// returns a pointer to the first instance of character n in string h, or null if not found
char *ptr_to(char *h, char *n){ 
    for(; *h != '\0'; h++){
        if(*h == *n)
            return n;
    }
    return NULL;
}
