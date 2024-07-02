#include<stdio.h>

int main(){
    int n,a=0,b=1,num;
    
    printf("How many numbers you want?");
    scanf("%d",&n);
    
    printf("The %d fibonacci numbers are:",n);
    for(int i=0;i<n;i++){
        printf("%d ",a);
        num=a+b;
        a=b;
        b=num;
    }
}