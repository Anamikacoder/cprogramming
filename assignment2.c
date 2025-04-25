#include<stdio.h>
int main(){
	//answer1
	int a,b,c,v;
	float avg,cir,si;
	printf("Enter three numbers");
	scanf("%d %d %d",&a,&b,&c);
	avg=(a+b+c)/3.0; 
	 //if we perform same type of data then result also is sae type
	printf("Average of numbers %d,%d and %d is %f \n",a,b,c,avg);
    
	//answer2
	printf("Enter the radius of the circle ");
	scanf("%d",&a);
	cir=2*3.14*a;
	printf("Circumference of circle is %f having radius %d \n",cir,a);

    //answer3
    printf("Enter the value of Ammount Rate and Time");
    scanf("%d %d %d",&a, &b,&c);
    si=(a*b*c)/100.0;
    printf("Simple interest of amount %d with rate %d in time %d is %f \n",a,b,c,si);

    //answer4
    printf("Enter length,width and hieght of cuboid");
    scanf("%d %d %d",&a,&b,&c);
    v=a*b*c;
    printf("volume of cuboid is %d having length %d, width %d and hieght %d \n",v,a,b,c);

    //answer5
    float cp,sp,profit;
    printf("Enter cost price and selling price of bnanas");
    scanf("%f %f",&cp,&sp);
    profit= (sp-cp)*25/12;
    printf("Profit is %f",profit);
    return 0;
}
   
    
