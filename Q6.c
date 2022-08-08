#include <stdio.h>

int main(){
int u;
printf("Enter the unit:");
scanf("%d",&u);
float amount;
if(u<=50){
    amount = u*.5;;
}
else if(u>50 && u<=150){
   amount = 50*.5 + (u-50)*.7;
}
else if(u>150 && u<250){
    amount = 50*.5 + 100*.7 + (u-150)*1.20;
}
else if(u>250){
    amount = 50*.5 + 100*.7 + 100*1.20 + (u - 250)*1.50;
}
printf("%.2f",amount);
return 0;
}