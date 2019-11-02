/* CIS2107 Lab9 Sec. 04
   Christopher Scott
   "A program to test the functions in the my_string library"
*/
#include <stdio.h>
#include <stdlib.h>
#include "my_string.h"
#include <string.h>

int main(){
    char test1[100];
    char test2[100];
    char *ptr = NULL;
    int n = 0;

    // Test all_letters
    char str1[] = "ALLUPPER";
    char str2[] = "allower";
    char str3[] = "a Mix of Cases";
    puts("\nTesting function all_letters...");
    printf("\tResult with arg \"%s\": %d\n", str1, all_letters(str1)); 
    printf("\tResult with arg \"%s\": %d\n", str2, all_letters(str2));
    printf("\tResult with arg \"%s\": %d\n", str3, all_letters(str3));
    
    // Test num_in_range
    char *s = "Lazy Brown Fox";
    char arg1 = 'w';
    char arg2 = 'z';
    puts("\nTesting function num_in_range...");
    printf("\tResult with arg *s1=%s and b=%c, c=%c: %d\n", s, arg1, arg2, num_in_range(s, arg1, arg2));
    
    // Test diff
    strcpy(test1, "Door");
    strcpy(test2, "Doll");
    puts("\nTesting function diff...");
    printf("\tResult with args *s1=%s, *s2=%s: %d\n", test1, test2, diff(test1, test2));
 
    // Test shorten
    strcpy(test1, "butterbeer");
    n = 6;
    puts("\nTesting function shorten...");
    printf("\tResult with args *s= %s, new_len= %d: ", test1, n);
    shorten(test1, n);
    printf("%s\n", test1);

    // Test len_diff
    strcpy(test2, "butterbeer");
    puts("\nTesting function len_diff...");
    printf("\tResult with args *s1=%s, *s2=%s: %d\n", test2, test1, len_diff(test2, test1));
    
    // Test rm_left_space
    strcpy(test1,  "    Tabbed String");
    puts("\nTesting function rm_left_space...");
    printf("\tResult with arg \"%s\": ", test1);
    rm_left_space(test1);
    printf("\"%s\"\n", test1);

    // Test rm_right_space
    strcpy(test2, "Hello    ");
    puts("\nTesting function rm_right_space...");
    printf("\tResult with arg \"%s\": ", test2);
    rm_right_space(test2);
    printf("\"%s\"\n", test2);
    
    // Test rm_space
    strcpy(test1, "    Tabbed string with space    ");
    puts("\nTesting function rm_space...");
    printf("\tResult with arg \"%s\": ", test1);
    rm_space(test1);
    printf("\"%s\"\n", test1);
    
    // Test find
    strcpy(test1, "butterbeer");
    strcpy(test2, "beer");
    puts("\nTesting function find...");
    printf("\tResult with args *h=%s, *n=%s: %d\n", test1, test2, find(test1, test2));

    // Test ptr_to
    puts("\nTesting function ptr_to...");
    printf("\tResult with args *h=%s, *n=%s: %s\n", test1, test2, ptr_to(test1, test2));
 
    // Test is_empty
    strcpy(test1, "   \t");
    puts("\nTesting function is_empty...");  
    printf("\tResult with arg \"%s\": %d\n", test1, is_empty(test1));
    printf("\tResult with arg \"%s\": %d\n", test2, is_empty(test2));

    // Test str_zip
    strcpy(test1, "Spongebob");
    strcpy(test2, "Patrick");
    puts("\nTesting function str_zip...");
    ptr = str_zip(test1, test2);
    printf("\tResult with args *s1=%s, *s2=%s: %s\n", test1, test2, ptr);
    free(ptr);
    ptr = NULL;

    // Test capitalize
    strcpy(test1, "harry pOTTER");
    puts("\nTesting function capitalize...");
    printf("\tResult with args \"%s\": ", test1);
    capitalize(test1); 
    printf("%s\n", test1);

    // Test strcmp_ign_case
    strcpy(test1, "otter");
    strcpy(test2, "OttEr");
    puts("\nTesting function strcmp_ign_case...");
    printf("\tResult with args *s1=%s, *s2=%s: %d\n", test1, test2, strcmp_ign_case(test1, test2));
    strcpy(test1, "Otter");
    strcpy(test2, "Weasel"); 
    printf("\tResult with args *s1=%s, *s2=%s: %d\n", test1, test2, strcmp_ign_case(test1, test2));

    // Test take_last
    strcpy(test1, "Potter");
    puts("\nTesting function take_last...");
    n = 5;
    printf("\tResult of with args *s1=%s, n=%d: ", test1, n);
    take_last(test1, n);
    printf("%s\n", test1);

    // Test dedup
    strcpy(test1, "There's always money in the banana stand.");
    ptr = dedup(test1);
    puts("\nTesting function dedup...");
    printf("\tResult with arg \"%s\": %s\n", test1, ptr);
    free(ptr);
    ptr = NULL;

    // Test pad
    strcpy(test1, "otter");
    n = 10;
    ptr = pad(test1, n);
    puts("\nTesting function pad...");
    printf("\tResult with args *s=\"%s\", d=%d: \"%s\"\n", test1, n, ptr);
    free(ptr);
    ptr = NULL;

    // Test ends_with_ignore_case
    strcpy(test1, "butterbeER");
    strcpy(test2, "beer");
    puts("\nTesting function ends_with_ignore_case...");
    printf("\tResult with args *s=%s, *suff=%s: %d\n", test1, test2, ends_with_ignore_case(test1, test2));
    
    // Test repeat
    strcpy(test1, "badger");
    puts("\nTesting function repeat...");
    char alpha = '|';
    n = 4;
    ptr = repeat(test1, n, alpha);
    printf("\tResult with args *s=%s, x=%d, sep=%c:\n\t\"%s\"\n", test1, n, alpha, ptr);
    free(ptr);
    ptr = NULL; 
    
    // Test replace
    strcpy(test1, " X X X");
    char *pat = "X";
    char *rep = "Rocks";
    ptr = replace(test1, pat, rep);
    puts("\nTesting function replace...");
    printf("\tResults with args *s=\"%s\", *pat=\"%s\", *rep=\"%s\":\n\t\"%s\"\n", test1, pat, rep, ptr);
    free(ptr);
    ptr = NULL;

    return 0;
} 