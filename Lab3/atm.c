/* CIS2107 Section 4 Lab 3 "ATM"
   "A program to implement the functions of an ATM"
*/
#include <stdio.h>
#include <stdlib.h>

#define PIN 3014
#define LOCKOUT 3

void checkBalance(float balance);
void withdrawal(float *);
void deposit(float *);
void quit(int, int);

int main(void){
    float balance = 5000;
    float *b;
    b = &balance;
    unsigned int pin = 0; 
    unsigned int access = 0;
    unsigned int tries = 0;
    unsigned int t = 0;    

    puts("\nWelcome to the ATM!\n");
    while(tries < LOCKOUT)
    {
       printf("%s", "Please enter your pin: \n");
       scanf("%u", &pin);
       if(pin == PIN)
       {
           printf("%s", "Access Granted\n");
           access = 1; 
           break;
       }
       else
       {
           printf("Incorrect pin, %d tries remaining\n", (LOCKOUT - ++tries));
       }
    }
    if(pin != PIN && tries >= LOCKOUT)
        quit(2, t);
    while(access)
    {
        printf("%s", "\n\tPress a number on the keypad to select a function\n"); 
        printf("%s", "\n\t------Main Menu------\n");
        printf("\t1%21s", "Check Balance\n");
        printf("\t2%21s", "Cash Withdrawal\n");
        printf("\t3%21s", "Cash Deposit\n");
        printf("\t4%21s", "Quit\n");
        printf("%s", ": \n");

        unsigned int choice;
        scanf("%u", &choice);
        
        switch(choice){
            case(1):
                checkBalance(balance);
                t++;
                break;
            case(2):
                withdrawal(b);
                t++;
                break;
            case(3):
                deposit(b);
                t++;
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
            break;
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
    printf("%s", "\n\tPrinting receipt...\n");
    printf("%s", "\tReturning to main menu\n");
}

void deposit(float *b)
{
    unsigned int amt;
    printf("%s", "\tYou can deposit up to $10000/day");
    printf("%s", "\tEnter depost amount: ");
    scanf("%u", &amt);
    *b += amt;
    printf("%s", "\n\tPrinting receipt...\n");
    printf("%s", "\tReturning to main menu\n");
}
