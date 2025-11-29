#include<stdio.h>
int main(){
	int m,n,i,j;
	int a[m][n],b[m][n],sum[m][n];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	sum[m][n]=a[m][n]+b[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",sum[i][j]);
		}
	}
	printf("\n");
	return 0;
	
}