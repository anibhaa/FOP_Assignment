#include<stdio.h>
int main(){
    int num, temp, sum = 0, rem;
    printf("Enter three digit number:");
    scanf("%d", &num);
    temp = num;
    while(temp != 0){
    rem = temp%10;
    sum = sum + (rem*rem*rem);
    temp = temp/10;
    }
    if( sum == num){
        printf("Digit is armstromg %d\n", num);
    }
    else{
        printf("Number is not armstrong\n");
    }
    return 0;
}