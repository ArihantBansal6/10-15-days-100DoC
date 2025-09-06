// Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>
int main(){
    int a,b,c=0;
    printf("Enter a number to reverse:");
    scanf("%d",&a);
    while(a!=0){
        b=a%10;
        c=(c*10)+b;
        a=a/10;
    }
    printf("Reverse number:%d",c);
    return 0;
}