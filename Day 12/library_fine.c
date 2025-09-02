// Q23: Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter number of days book returned late:");
    scanf("%d",&a);
    if(a<=7){
    b=2*a;
    printf("Fine: %d",b);
}
else if(a<=14){
    b=4*a;
    printf("Fine: %d",b);
}
else if(a<=21){
    b=6*a;
    printf("Fine: %d",b);
}
else if(a<31){
    b=8*a;
    printf("Fine: %d",b);
}
    else{
    printf("membership Cancelled");
    }
    return 0;
}