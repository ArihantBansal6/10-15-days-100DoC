// Q24: Write a program to calculate an electricity bill based on units consumed.

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter number of units consumed:");
    scanf("%d",&a);
    if(a<=100){
        b=a*5;
    }
    else if(a<=200){
        b=100*5+(a-100)*9;
    }
    else if(a<=300){
        b=(100*5)+(100*9)+(a-200)*16;
    }
    printf("Electricity bill:%d",b);
    return 0;
}