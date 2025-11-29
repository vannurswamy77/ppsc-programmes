#include<stdio.h>

int main(){
    int st,i,sum=0;
    printf("give nof students:");
    scanf("%d",&st);
    int marks[st];
    printf("give students marks:");
    for(i=0;i<st;i++){
        scanf("%d",&marks[i]);
    }
    char gender;
    printf("give gender:");
    scanf("%c",&gender);
    for(i=0;i<st;i++){
        if(i==0 || i==2){
            sum=sum+marks[i];
        }
    }
    printf("%d",sum);
    return 0;
}
