#include<stdio.h>

int main(){
    int fact=1,n;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(int i=1;i<n+1;i++){
        fact=fact*i;
    }
    printf("Factorial of %d is %d ",n,fact);
}