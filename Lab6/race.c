/* CIS2107 Section 4 Lab 6 "Race"
   Christopher Scott 
   "A program to simulate a race between a tortoise and a hare"
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int generateNum()
void advancePositions(unsigned int *, unsigned int *);
void printPositions(unsigned int *, unsigned int *);

int main(){
    unsigned int tortoise, hare;
    tortoise = hare = 1;
    unsigned int *tptr = &tortoise;
    unsigned int *hptr = &hare;
    
    puts("BANG !!!!\nAND THEY'RE OFF !!!!!");
    while(tortoise < 70 && hare < 70){
        advancePositions(tptr, hptr);
        printPositions(tptr, hptr);
        sleep(2);
    }

    if(tortoise >= 70 && hare >= 70)
        puts("It's a tie!");
    else if(tortoise >= 70)
        puts("TORTOISE WINS!!! YAY!!!");
    else
        puts("HARE WINS. YUCK");

    return 0;
}

int generateNum(){
    srand(time(null));
    return (rand() % 10 + 1);

void advancePositions(unsigned int *a, unsigned int *b){
    // move tortoise
    int move = generateNum();
    if(move >= 1 && move <= 5) // fast plod (50%)
        *a += 3;
    else if(move >= 6 && move <= 8) // slow plod (30%)
        *a += 1;
    else{ // slip
        if(*a > 6)
            *a -= 6;
        else
            *a = 1;
}
