#include<stdio.h>
int main(){

   //answer no.1
   int m,n;
   printf("Enter the three digit number");
   scanf("%d",&n);
   //m=n%10;
   //n=n/10;
   //m+=n%10;
   //n=n/10;
   //m+=n;
   //printf("sum of all digit is %d\n",m);
   printf("sum of all digit is %d\n",n/100+n/10%10+n%10);

   //answer no.2
   char s;
   s='+';
   printf("ASCII code of + is :%d\n",s);

   //answer no. 3
   int i;
   char c;
   float f;
   double d;
   i= sizeof('A');
   printf("size of character %d\n",sizeof(c));
   printf("size of float %d\n",sizeof(f));
   printf("size of double %d\n",sizeof(d));
   printf("size of int %d\n",sizeof(i));  
  
   //answer no.4
   int x;
   printf("enter number x=");
   scanf("%d",&x);
   //x=x/10;
   //x=x*10;
   //printf("x=%d\n",x);
   printf("x=%d\n",x/10*10);

   //answer no.5
   int y,z;
   printf("enter the number y:");
   scanf("%d",&y);
   printf("enter the digit z:");
   scanf("%d",&z);
   //y=y*10;
   //y+=z;
   //printf("y:%d\n",y);
   printf("y:%d\n",y*10+z);
 
   //answer no.6
   float r;
   printf("Enter the price in INR: ");
   scanf("%f",&r);
   r=r/84.23;
   printf("price in USD: %.2f\n",r);

   //answer no.7
   int v,w;
   printf("enter three digit number v:");
   scanf("%d",&v);
   /*
   w=v%10;
   v=v/10;
   v=v+w*100;
   printf("v:%d \n",v);
   */
   printf("v:%d \n",v%10*100+v/10);

   //answer no.8
   int a;
   a=10>8>4;
   printf("%d \n",a);

   // answer no.9
   int b;
   b=!2>-2;
   printf("%d \n",b);

   // answer no.10
   int h;
   h=3<0&&5>0;
   printf("%d \n",h);
   return 0;
    
    }