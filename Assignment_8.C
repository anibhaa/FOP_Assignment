#include<stdio.h>
int main(){
int m1, m2, m3, m4, m5, agg_per;
printf("Enter mark of five subject out of 100:");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
if(m1 >40 && m2>40 && m3>40 && m4>40 && m5 >40){
    agg_per = (m1 + m2 + m3 + m4 + m5)/5;
    if(agg_per >= 75){
        printf("Distinction");
    }
    else if(agg_per >= 60  ){
        printf("First Division");
    }
    else if(agg_per >= 50){
        printf("Second Division");
    }
    else if(agg_per >= 40 ){
        printf("Third Division");
    }
    else{
        printf("Fail");
    }
    return 0;
    }
}