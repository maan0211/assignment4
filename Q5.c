#include <stdio.h>

int main(){
int sal;
printf("Enter the salary:");
scanf("%d",&sal);
float basicSalary;
if(sal <= 2000){
    basicSalary = sal +.1*sal + .2*sal;
}
else if(sal>2000 && sal<=5000){
    basicSalary = sal + .2*sal + .3*sal;
}
else if(sal>5000 && sal<=10000){
    basicSalary = sal + .3*sal + .4*sal;
}
else if(sal>10000){
    basicSalary = sal + .1*sal + .2*sal;

}
printf("%.2f",basicSalary);
return 0;
}