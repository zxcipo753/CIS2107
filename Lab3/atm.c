/* CIS2107 Section 4 Lab 3 "ATM"
   "A program to implement the functions of an ATM"
*/
#include <stdio.h>
#include <stdlib.h>

#define PIN = 3014;
#define LOCKOUT = 3;

void checkBalance(float balance);
void withdrawal(float *);
void deposit(float *);
void quit(int, int);

int main(void){
    float balance = 5000;
    float b = &balance;
    unsigned int pins, t;
    unsigned int access = tries = 0;
    
    puts("\nWelcome to the ATM!\nPlease input your pin: ");
    while(tries < LOCKOUT)
    {
       scanf("%u", &pin);
       if(pin == PIN)
           access = 1; 
           break;
       else
           tries++;
    }
    if(pin != PIN && tries >= LOCKOUT)
        quit(2, t);
    while(access)
    {
        printf("%s", "\tPress a number on the keypad to select a function\n"); 
        printf("%s", "\t------Main Menu------\n");
        printf("\t1%18s", "Check Balance\n");
        printf("\t2%18s", "Cash Withdrawal\n");
        printf("\t3%18s", "Cash Deposit\n");
        printf("\t4%18s", "Quit\n");
        printf("%s", ": \n");

        unsigned int choice;
        scanf("u", &choice);
        
        switch(choice){
            case(1):
                checkBalance(balance);
                t++;
                break;
            case(2):
                withdrawal(*b);
                t++
                break;
            case(3):
                deposit(*b);
                t++
                break;
            case(4):
                quit(0, t);
            default:
                quit(1, t);
                break;
       }
    }    
}

void quit(int code, int t){
    switch(code){
        case(0):
            printf("%s", "\nThank you for using the ATM\n");
            printf("%d transactions completed", t);
            exit(0);
            break;          
        case(1): default:
            printf("%s", "\n Something went wrong.\nThank you for using the ATM\n");
            printf("%d transactions completed", t);
            exit(1);
            break;
        case(2):
            printf("%s", "\n Incorrect pin entered too many times");
            exit(1);
            break:
    }
}

void checkBalance(float balance)
{
    printf("Your balance is: %.2f\n", balance);
}

void withdrawal(float *b)
{
    unsigned int amt;
    printf("%s", "\tYou can withdrawal up to $1000/day\n");
    printf("%s", "\tEnter withdrawal amount in $20 increments: ");
    scanf("%u", &amt);
    *b -= amt;
    printf("%s", "\n\tPrinting receipt...");
    print("%s", "\n\tReturning to main menu");
}

void deposit(float *b);
{
    unsigned int amt;
    printf("%s", "\tYou can deposit up to $10000/day");
    printf("%s", "\tEnter depost amount: ");
    scanf("%u", &amt);
    *b += amt;
    printf("%s", "\n\tPrinting receipt...");
    print("%s", "\n\tReturning to main menu");
}
