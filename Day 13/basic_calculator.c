// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include<stdio.h>
int main(){
    int c;
    int a,b,d;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter expression i.e_+,-,/,*,%%");
    printf("Enter expression\n1 for addition(+)\n2 for subtraction(-)\n3 for division(/)\n4 for multiplication(*)\n5 for modulus(%%)\nChosen Expression:");
    scanf("%d",&c);
    switch(c){
        case 1:
        d=a+b;
        printf("Chosen expression:(%d+%d)",a,b);
        break;
        case 2:
        d=a-b;
        printf("Chosen expression:(%d-%d)",a,b);
        break;
        case 3:
        d=a/b;
       printf("Chosen expression:(%d/%d)",a,b);
        break;
        case 4:
        d=a*b;
       printf("Chosen expression:(%d*%d)",a,b);
        break;
        case 5:
        d=a%b;
       printf("Chosen expression:(%d%%%d)",a,b);
        break;
    }
    printf("\nAnswer:%d",d);
    return 0;
}