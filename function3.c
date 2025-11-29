 #include<stdio.h>
 int sum(void);
 void main(){
 	int s;
 	s=sum();
 	printf("%d",s);
 }
 int sum(){
 	int a=3,b=10,sum;
    sum=a+b;
 	return sum;
 }