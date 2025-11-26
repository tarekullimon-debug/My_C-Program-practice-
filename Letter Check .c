 #include<stdio.h>
 int main()
 {
   char ch ;
   printf("Enter Any Charectar:");
   scanf("%c",&ch);
  if(ch>='A' && ch<='Z')
   printf("Capital latter");
  else if(ch>='a' && ch<='z')
  printf("small latter");
 else 
 printf("This is not a Latter");
 return 0;
 }