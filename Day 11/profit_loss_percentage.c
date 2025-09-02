// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter cost price of the product:");
    scanf("%d",&a);
    printf("Enter selling price of the product:");
    scanf("%d",&b);
    if(b>a&&a>0&&b>0){
        c=b-a;
        d=(c*100)/a;
        printf("Profit percent on the product:%d%%",d);
    }
    else if(a>b&&a>0&&b>0){
        c=a-b;
        d=(c*100)/a;
        printf("Loss percent on the product:%d%%",d);
    }
        else if(a==b&&a>0&&b>0){
            printf("no profit no loss");
    }
    else{
        printf("invalid");
    }
    return 0;
}