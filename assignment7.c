#include<stdio.h>
int main(){
    //answer no.1 my sirji 5 times
    int a;
    a=0;
    while(a<5){
        printf("MySirJi\n");
        a++;
    }
    //answer no.2 first 10 natural no.
    int b;
    b=1;
    while(b<=10){
        printf("%d\n",b);
        b++;
    }
    //answer no.3 in reverse order
    int c;
    c=10;
    while(c>=1){
        printf("%d\n",c);
        c--;
    }
    //answer no.4 10 odd numbers
    int d;
    d=0;
    while(d<10){ 
        int a;
        a=2*d+1;
        printf("%d\n",a);
        d++;  
    }
    //answer no.5 reverse order
    int e;
    e=10;
    while(e>0){ 
        int a;
        a=2*e-1;
        printf("%d\n",a);
        e--;  
    }
    //answer no.6 10 even numbers
    int m ;
    m=1;
    while(m<=10){ 
        int a;
        a=2*m;
        printf("%d\n",a);
        m++;  
    }
    //answer no.7 reverse order
    int n ;
    n=10;
    while(n>0){ 
        int a;
        a=2*n;
        printf("%d\n",a);
        n--;  
    }
    //answer no.8 square of first 10 no.
    int p ;
    p=1;
    while(p<=10){ 
        int a;
        a=p*p;
        printf("%d\n",a);
        p++;  
    }
    //answer no.9 cube of first 10 no.
    int q ;
    q=1;
    while(q<=10){ 
        int a;
        a=q*q*q;
        printf("%d\n",a);
        q++;  
    }
    //answer no.10 table of 5
    int r ;
    r=1;
    while(r<=10){ 
        int a;
        a=5*r;
        printf("%d\n",a);
        r++;  
    }
    return 0;
}