#include<stdio.h>
int main(){
    int num, mult;
    printf("Enter number");
    scanf("%d", &num);
    for(int i =1; i<11; i++){
        mult = num*i;
    printf("%d\n", mult);
}
return 0;
}