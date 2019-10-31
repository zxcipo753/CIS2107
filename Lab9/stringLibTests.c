/* CIS2107 Lab9 Sec. 04
   Christopher Scott
   "A program to test the functions in the my_string library"
*/
#include <stdio.h>
#include "my_string.h"

int main(){
    // Test all_letters
    char str1[] = "ALLUPPER";
    char str2[] = "allower";
    char str3[] = "a Mix of Cases";
    puts("\nTesting function all_letters...\n");
    printf("Result with arg %s: %d\n", str1, all_letters(str1)); 
    printf("Result with arg %s: %d\n", str2, all_letters(str2));
    printf("Result with arg %s: %d\n", str3, all_letters(str3));
    
    // Test num_in_range
    char *s = "Lazy Brown Fox";
    char arg1 = 'w';
    char arg2 = 'z';
    puts("\nTesting function num_in_range...\n");
    printf("Result with arg %s and %c, %c: %d\n", s, arg1, arg2, num_in_range(s, arg1, arg2));

    return 0;
} 
