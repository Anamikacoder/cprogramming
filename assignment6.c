#include<stdio.h>
int main(){
 /* 
    //answer no.1
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a>=100 && a<=999){
        printf("three digit number\n");
    }
    else{
        printf("not a three digit number\n");
    }
        
    //answer no.2
    float cp, sp;
    printf("enter cost price:");
    scanf("%f",&cp);
    printf("enter selling price:");
    scanf("%f",&sp);
    if(cp>sp){
        printf("loss:%f\n",100*(cp-sp)/cp);
    }
    else{
      printf("profit:%f\n",100*(sp-cp)/cp);
    }

    //answer no.3
    int sub1,sub2,sub3,sub4,sub5;
    printf("enter marks:");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    if( sub1>=33 && sub2>=33 && sub3>=33 && sub4>=33 && sub5>=33)
    {
        printf("Passed\n");

    }
    else{
        printf("Failed\n");
    }
 */       
    //answer no.4
    char b;
    printf("enter alphabet: ");
    scanf(" %c",&b);
    if(b >='A' && b <='Z'){
        printf("uppercase\n");
    }
    else if( b >= 'a' && b <= 'z'){
        printf("lowercase\n");
    }
    else{ 
        printf("not alphabet\n");       
    }

    //answer no.5
    int c;
    printf("enter the number");
    scanf("%d",&c);
    if(c%6 == 0){
        printf("divisible\n");
    }
    else{
        printf("not divisible\n");
    }

    //answer no.6
    int m;
    printf("enter the number");
    scanf("%d",&m);
    if(m%3==0 || m%7==0){
        printf("divisible\n");
    }
    else{
        printf(" not divisible\n");
    }

    //answer no.7
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n>0){
        printf("positive\n");
    }
    else if(n==0){
        printf("Zero\n");
    }
    else {
        printf("negative\n");
    }
    //answer no.8 
    char s;
    printf("enter alphabet: ");
    scanf(" %c",&s);
    if(s >= 'A' && s <= 'Z'){
        printf("uppercase\n");
    }
    else if( s >= 'a' && s <= 'z'){
        printf("lowercase\n");
    }
    else if(s >= '0' && s <= '9'){ 
        printf("Number\n");       
    }
    else{
        printf("special character\n"); 
    } 
          
    //answer no.9
    int side1,side2,side3;
    printf("enter sides:");
    scanf("%d %d %d",&side1,&side2,&side3);
    if( side1 + side2 > side3 || side2 + side3 > side1 || side3 + side1 > side2)
    {
        printf("Valid\n");

    }
    else{
        printf("Invalid\n");
    }
        
    //answer no.10
    int month;
    printf("enter month:");
    scanf("%d",&month);
    if(month>0 && month<=12){
        if(month==4 || month==6 || month==9 || month==11){
            printf("no. of days =30");
        }
        else if(month==2){
            printf("no. of days =28 or 29\n");
        }
        else{
            printf("no. of days =31\n");
        }
    }
    else{
        printf("enter a valid month\n");
    }


     return 0;

}