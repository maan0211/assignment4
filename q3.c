#include <stdio.h>

int main(){
int YEAR;
scanf("%d",&YEAR);
int check = (YEAR%4==0 && YEAR%400 && YEAR%100!=0)?printf("LEAP YEAR"):printf("NON LEAP YEAR");

return 0;
}