#include<stdio.h>
int main(){
	int m,n,i,j;
	int a[m][n],b[m][n],sum[m][n];
	printf("give rows and columns:");
	scanf("%d%d",&m,&n);
	printf("give a matrix elements:");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("give matrix b elememnts:");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",sum[i][j]);
		}
	
	printf("\n");
}
	return 0;
}