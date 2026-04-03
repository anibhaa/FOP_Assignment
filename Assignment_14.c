#include<stdio.h>
int main(){
int binary_num, decimal_num = 0, temp, base = 1;
printf("Enter binary number");
scanf("%d", &binary_num);
while(binary_num != 0){
temp = binary_num % 10;
decimal_num = decimal_num + (temp*base);
base = base*2;
binary_num = binary_num/10;
}
printf("Decimal num is %d", decimal_num);
return 0;
}