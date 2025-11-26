#include<stdio.h>
int main()
{
 double num1,num2 ;
 char sign ;
 printf("Enter any sign +,-,*,/:");
 scanf("%c",&sign);
 printf("Enter Two Number:");
 scanf("%lf %lf",&num1,&num2);
 
 switch(sign) 
 { 
  case '+':
  {
  printf("%lf+%lf=%.2lf",num1,num2,num1+num2);
  break ;
  
 }
 case'-':
 {
  printf("%lf-%lf=%.2lf\n",num1,num2,num1-num2);
  break ;
 }
 case'*':
 {
  printf("%lf*%lf=%.2lf\n",num1,num2,num1*num2);
  break ;
 }
case'/':
 {
  printf("%lf/%lf=%.2lf\n",num1,num2,num1/num2);
  break ;
 }
 default :
 printf(" unvalid input ");
}
return 0 ;
}