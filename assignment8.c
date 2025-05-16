#include<stdio.h>
int main(){
    /* */
    //answer no.1 mysirji n times
    int x,a;
    printf("enter number");
    scanf("%d",&a);
    x=1;
    while(x <= a){
       printf("MySirJi ");
       x++;
    }
    //answer no.2 n natural no.
    int y,b;
    printf("\nenter number");
    scanf("%d",&b);
    y=1;
    while(y <= b){
        printf("%d ",y);
        y++;
     }
    
    //answer no.3 reverse order
       int z,c;
    printf("\nenter number");
    scanf("%d",&c);
    z=c;
    while(z > 0){
        printf("%d ",z);
        z--;
     }
    
     //answer no.4 n odd natural no.
    int m,d;
    printf("\nenter number");
    scanf("%d",&m);
    d=0;
    while(d < m){
        int a;
        a=2*d+1;
        printf("%d ",a);
        d++;
     }
        
    //answer no.5 n odd natural no. reverse order
    int n,e;
    printf("\nenter number");
    scanf("%d",&n);
    e=n;
    while(e>0 ){
        int a;
        a=2*e-1;
        printf("%d ",a);
        e--;
     }
  
    //answer no.6 n even natural no.
     int o,f;
    printf("\nenter number");
    scanf("%d",&o);
    f=1;
    while(f<=o){
        int a;
        a=2*f;
        printf("%d ",a);
        f++;
     }

    //answer no.7 n even natural no. reverse order
      int p,g;
    printf("\nenter number");
    scanf("%d",&p);
    g=p;
    while(g>0){
        int a;
        a=2*g;
        printf("%d ",a);
        g--;
     }
    //answer no.8  square of n natural no.
     int q,h;
    printf("\nenter number");
    scanf("%d",&q);
    h=1;
    while(h<=q){
        int a;
        a=h*h;
        printf("%d ",a);
        h++;
     }

    //answer no.9  cube of n natural no.
     int r,i;
    printf("\nenter number");
    scanf("%d",&r);
    i=1;
    while(i<=r){
        int a;
        a=i*i*i;
        printf("%d ",a);
        i++;
     }

    //answer no.10 table of n natural no.
     int s,j;
    printf("\nenter number");
    scanf("%d",&s);
    j=1;
    while(j<=10){
        int a;
        a=j*s;
        printf("%d ",a);
        j++;
     }

    return 0;
}