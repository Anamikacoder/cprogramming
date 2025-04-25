
#include<stdio.h>
int main(){
   char ch,ch1,ch2,ch3;
   //answer no 6
   printf("Enter the character");
   scanf("%c",&ch);
   printf("ASCII code of character %c is %d\n",ch,ch);

   //answer no 7
   int a;
    
   printf("Enter the ASCII code");
   scanf("%d",&a);
   printf("character of ASCII code %d is %c\n",a,a);
   
   //answer no. 8
   printf("Enter the characters");
   scanf(" %c %c %c",&ch1,&ch2,&ch3);
   printf("ASCII code of character%c:%d\n",ch1,ch1);
   printf("ASCII code of character%c:%d\n",ch2,ch2);
   printf("ASCII code of character%c:%d\n",ch3,ch3);
    
   //answer no. 9
   int d,m,y;
   printf("Enter the date in DD/MM/YY formate");
   scanf("%d/%d/%d",&d,&m,&y);
   printf("Date - %d  Month - %d Year - %d\n",d,m,y);
   
   //answer no. 10
   int h,mi;
   printf("Enter the time(HH:MM)");
   scanf("%d:%d",&h,&mi);
   printf("%d Hours %d Minutes",h,mi);
   return 0;
}