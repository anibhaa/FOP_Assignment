#include<stdio.h>
int fact(int n){
    if (n<=1)
    return 1;
    {
        int fact = 1;
        for(int i = 1; i <= n; i++)
        fact = fact*i;
        return fact;
     }}
    int main(){
        printf("Factorial on n is %d", fact(5));
        return 0;
    }