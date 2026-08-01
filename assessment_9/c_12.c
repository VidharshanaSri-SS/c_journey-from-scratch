# include <stdio.h>
int main(){
    int arr[100],count=0,cnt=0;
    for (int i=0;i<100;i++){
        scanf("%d",&arr[i]);
        cnt++;
        if(arr[i]!=0){
            count=count+arr[i];
            printf("%d ",arr[i]);
        }
        else{
            break;
        }
    }
    printf("\n");
    printf("%d",cnt);
    printf("\n");
    printf("%d",count);
    return 0;
}