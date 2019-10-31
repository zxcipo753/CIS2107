/* CIS2107 Lab9 Sec. 04
   "find"
   Christopher Scott
*/
#include "my_string.h"

// returns the index of the first instance of character n in string h, or -1 if not found
int find(char *h, char *n){
  int i = 0;
  for(;*(h + i) != '\0';i++){
      if(*(h + i) == *n)
          return i;
  }
  return -1;
}
