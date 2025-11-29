#include<stdio.h>
void sum(int*,int*);
void main()
{
	int x=5,y=4;
     sum(&x,&y);
	printf("inside main function:\n");
	printf("x=%d y=%d \n",x,y);
	
}
void sum(int* x,int* y){
       *x=4;
       *y=5;
       printf("inside function:\n");
	printf("x=%d y=%d \n",*x,*y);
}