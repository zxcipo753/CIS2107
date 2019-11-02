/* CIS2107 Lab9 Sec. 04
 * "repeat"
 * Christopher Scott
 */

#include "my_string.h"
#include <stdlib.h>

// Returns a new string comprised of the original string repeated x times with the separator between
char *repeat(char *s, int x, char sep){
	size_t s_len = 0;
	char *ptr = NULL;
	for(;*(s + s_len) != '\0'; s_len++);
	
	if(s_len == 0)
            return ptr;
	ptr = (char *)malloc(sizeof(char) * ((s_len * x) + x));
        char *t = ptr;
	for(size_t i = 0; i < x; i++){
	    for(size_t j = 0; *(s + j) != '\0'; j++){
	        *t = *(s + j);
                t++;
	    }
            if(i < x - 1){
	        *t = sep;
		t++;
	    }
	}
	return ptr;
}
