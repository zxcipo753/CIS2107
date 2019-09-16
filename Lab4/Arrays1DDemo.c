/* CIS2107 Section 4 Lab 4 "Processing1DArrays"
   Christopher Scott
   "A collection of functions for performing operations on arrays"
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArray(int[], int, int, int);
int findWithRange(int[], int, int);
void reverseArray(int[], int);
void reverseArrayInRange(int[], int, int, int);
int findSequence(int[], int);
void printArray(int[], int, int);

int main(void)
{
    int test[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    printf("%s", "Testing fillArray() with args(size = 20, low = 0, high = 5)...\n");
    int test2[20];
    fillArray(test2, 20, 0, 5);
    printArray(test2, 20, 10);

    puts("");
    printf("%s", "Testing reverseArray...\n");
    printf("%s", "Before:\n");
    printArray(test, 11, 11);
    reverseArray(test, 11);
    printf("%s"," After:\n");
    printArray(test, 11, 11);

    puts("");
    int test3[] = {10, 20, 60, 30, 50};
    printf("%s", "Testing findWithRange() on {10, 20, 60, 30, 50} with args(low = 1, high = 3)...\n");
    printf("Largest element is: %d\n", findWithRange(test3, 1, 3));
    
    puts("");
    reverseArray(test, 11);
    printf("%s", "Testing reverseArrayInRange() on {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11} with args(low = 3, high = 7)...\n");
    printf("%s", "Before:\n");
    printArray(test, 11, 11);
    reverseArrayInRange(test, 11, 3, 7);
    printf("%s", "After:\n");
    printArray(test, 11, 11); 

    puts("");
    printf("%s", "Testing findSequence()...\n");
    printArray(test, 11, 11);
    findSequence(test, 11);

}

void fillArray(int A[], int size, int low, int high)
{
   srand(time(NULL));
   for(int i = 0; i < size; i++)
       A[i] = rand() % (high - low + 1) + low;
}

int findWithRange(int A[], int low, int high)
{   
    int max = A[low++];
    for(;low <= high; low++)
    {
        if(max < A[low])
            max = A[low];
        
    }
    return max; 
}

void reverseArray(int A[], int size)
{
    int temp;
    int i = 0;
    size--;
    while(i < size)
    {
        temp = A[i];
        A[i++] = A[size];
        A[size--] = temp;
    }
} 

void reverseArrayInRange(int A[], int size, int low, int high)
{
    if(high > size)
    {
        printf("%s", "Error in reverseArrayInRange: high > size\n");
        exit(1);
    }
    if(low > high)
    {
        printf("%s", "Error in reverseArrayInRange: low > high\n");
        exit(1);
    }
    int temp;
    high--;
    while(low < high)
    {
        temp = A[low];
        A[low++] = A[high];
        A[high--] = temp;
    }
}

int findSequence(int A[], int size)
{
    int num1, num2;
    int loc = -1;
    printf("%s", "Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    for(int i = 0; i < size - 1; i++)
    {
        if(A[i] == num1 && A[i+1] == num2)
            loc = i;
//           printf("\nSequence found at index %d\n", loc);
            break;
    }
    if(loc != -1)
    {
        printf("\nSequence found at index %d\n", loc);
        return loc;
    }
    else
    {
       printf("%s", "Sequence not found\n");
       return loc;
    }
}

void printArray(int A[], int size, int numCol)
{
    for(int i = 0; i < size; i++){
        printf("%4d", A[i]);
        if((i+ 1) % numCol == 0)
            puts("");
    }
    puts("");
}

