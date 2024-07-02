#include<stdio.h>

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}
int main(){
    int fact,n;
    
    printf("Enter a number:");
    scanf("%d",&n);
    
    if(n<0){
        printf("Invalid number");
    }
    else{
        fact=factorial(n);
        printf("Factorial of %d is %d\n", n, fact);
    }
}