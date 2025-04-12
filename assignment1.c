#include<stdio.h>
int main(){
	printf("Hello students\n"); //1
	printf("Hello\nStudents\n");//2
	printf("\"MySirG\"\n");     //3
	printf("\\n\n");           //4
	printf("\\r\n");           //5
	printf("\"Teacher's Day\"\n");//6
	//7
	int a,b;
	printf("Enter two numbers");
	scanf(" %d %d",&a,&b);
	printf("Sum of %d and %d is %d\n",a,b,a+b);
	//8
	int c;
	printf("Enter the number");
	scanf("%d",&a);
	printf("Square of the %d is %d\n",a,a*a);
	//9
	printf("Enter the sides of Ractangle");
	scanf(" %d %d",&a,&b);
	c= a*b;
	printf("Area of Ractangle is %d having sides %d and %d \n",a,b,c);
	//10
	float d;
    printf("Enter the radius of the Circle");
    scanf("%d",&a);
    d=3.14*a*a;
    printf("Area of Circle is %f having radius %d",d,a);
	return 0;	
}
