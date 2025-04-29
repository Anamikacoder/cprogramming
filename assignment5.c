#include<stdio.h>
int main(){

    int n;
    printf("enter number");
    scanf("%d",&n);
    //answer number 1
    if(n>0){
        printf("positive\n");
    }
    else{
        printf("non-positive\n");
    }

    //answer number 2
    int m;
    printf("enter number");
    scanf("%d",&m);
    if(m%5==0){
        printf("divisible by 5\n");
    }
    else{
        printf("non divisible by 5\n");
    }

    //answer number 3
    int p;
    printf("enter number");
    scanf("%d",&p);
    if(p%2==0 && p!=0){
        printf("even\n");
    }
    else if(p%2!=0){
        printf("odd\n");
    }
    else{
        printf("zero enter another number\n");
    }

    //answer number 4
    int x, q;
    printf("enter number");
    scanf("%d",&q);
    x=q/2;
    if(x*2==q&& q!=0){
        printf("even\n");
    }
    else if(q!=0){
        printf("odd\n");
    }
    else{
        printf("zero\n");
    }

    //answer no.5
    int r;
    printf("enter number");
    scanf("%d",&r);
    if( r==0){
        printf("zero\n");
    }
    else if(r&1==1 && r!=0){
        printf("odd\n");
    }
    else{
        printf("even\n");
    }
 
    //answer no.6
    int s;
    printf("enter number");
    scanf("%d",&s);
    if(s/10!=0){
       s=s/10;
       if(s/10!=0){
           s=s/10;
           if(s/10==0){
              printf("three digit number\n");
            }
            else{
                printf("not a three digit number\n");
            }
        }
        else{
            printf("not a three digit number\n");
        }
    }
    else{
        printf("not a three digit number\n");
    }

    //answer no.7
    int a,b;
    printf("enter number");
    scanf("%d",&a);
    printf("enter number");
    scanf("%d",&b);
    if(a>b){
        printf("%d is greater than %d\n",a,b);
    }
    else if(a==b){
        printf("%d",a);
    }
    else{
        printf("%d is greater than %d\n",b,a);
    }

    //answer no.8
    int c,d,e;
    printf("enter root1:");
    scanf("%d",&c);
    printf("enter root2:");
    scanf("%d",&d);
    e=c*d;
    if(d*d-4*c*e>0){
        printf("roots are real and distinct\n");
    }
    else if(d*d-4*c*e<0){
        printf("roots are imaginary\n");
    }
    else {
        printf("roots are distinct and equal\n");
    }

    //answer no.9
    int t;
    printf("enter year:");
    scanf("%d",&t);
    if(t%4==0&&t%100!=0){
        printf("Leep year\n");
    }
    else if(t%400==0){
            printf("Leep year\n");
        }
    else{
        printf("Not Leep year\n");
    }
 
    //answer no.10;
    int j,k,l;
    printf("enter number");
    scanf("%d",&j);
    printf("enter number");
    scanf("%d",&k);
    printf("enter number");
    scanf("%d",&l);
    if(j>k && j>l ){
        printf("greatest no. %d",j);
    }
    else if(k>j && k>l ){
        printf("greatest no. %d",k);
    }
    else if(l>j && l>k ){
        printf("greatest no. %d",l);
    }
    else if(k==j && k>l ){
        printf("greatest no. %d",k);
    }
    else if(k==l && k>j ){
        printf("greatest no. %d",k);
    }
    else if(j==l && l>k ){
        printf("greatest no. %d",j);
    }
    else{
            printf(" %d",k);
        
    }
    return 0;
}