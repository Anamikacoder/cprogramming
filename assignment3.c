#include<stdio.h>
int main(){

    //answer no. 1 & 2
    int i;
    i= sizeof('A');
    printf("size of character %d\n",i);
    printf("size of 4.8 is %d\n", sizeof(4.8));

    //answer no. 3
    char s;
    printf("Enter a character ");
    scanf("%c",&s);
    s++;
    printf("Next character is %c\n",s);

    //answer no.4
    int n,l,m;
    printf("Enter the number");
    scanf("%d",&n);
    l=n%10;
    printf("Last digit of %d is %d\n",n,l);
    // answer no.5
    m=n/10;
    printf("%d is without last digit is %d\n",n,m);

    // answer no. 6
    int x,y,z;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("x: %d and y: %d\n",x,y);

    //answer no.7
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a:%d and b : %d\n",a,b);

    //answer no.8
    int e,f;
    printf("enter e:");
    scanf("%d",&e);
    printf("enter f: ");
    scanf("%d",&f);
    e=e*f;
    f=e/f;
    e=e/f;
    printf("e: %d and f: %d\n",e,f);
    
    //answer no. 9
    int c,d;
    printf("enter c:");
    scanf("%d",&c);
    printf("enter d:");
    scanf("%d",&d);
    c= c^d;
    d= c^d;
    c=c^d;
    printf("print c: %d and d : %d\n",c,d);

    //answer no. 10
    int p,q;
    printf("enter p:");
    scanf("%d",&p);
    printf("enter q:");
    scanf("%d",&q);
    p=p+q-(p=q);
    printf("print p: %d and q : %d",p,q);
return 0;

}