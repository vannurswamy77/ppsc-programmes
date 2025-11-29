#include<stdio.h>
#include<math.h>
int main()
{
	int d=0,n,rem,sum=0,temp;
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		d++;
		temp=temp/10;
 }
    temp=n;
	while (temp!=0){
		rem=temp%10;
		sum=sum+pow(rem,d);
		temp=temp/10;
	}
	if(sum==n) printf("amstrong");
	else printf("not amstrong");
	return 0;
}