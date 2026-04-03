#include<stdio.h>
int main(){
    int n, rev_num = 0, digit;
    printf("Enter numner");
    scanf("%d", &n);
    while(n >0){
        digit = n % 10;
        rev_num = digit + rev_num*10;
        n = n/10;
     }
     printf("Reverse number is %d", rev_num);
     return 0;
}