# include <stdio.h>
int main(){
    int arr[100],count=0,cnt=0,c=0,c1=0;
    int sum=0;
    for (int i=0;i<100;i++){
        scanf("%d",&arr[i]);
        if(arr[i]!=0){
            count=count+arr[i];
            printf("%d ",arr[i]);
            cnt++;
        }
        else{
            break;
        }
    }
    if(count%2!=0){
        c = cnt / 2;
        printf("\n");
        printf("%d",arr[c]);
    }
    else{
        c = cnt / 2;
        sum=((arr[c-1])+(arr[c]));
        printf("\n");
        printf("%d",sum/2);
    }
}