# include <stdio.h>
int main(){
    int arr[5],count=0,new[5],sum=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=4;j>=0;j--){
        new[count]=arr[j];
        count++;
        sum=sum+arr[j];
    }
    printf("%d\n",sum);
    for(int x=0;x<5;x++){
        printf("%d ",new[x]);
    }
    return 0;
}