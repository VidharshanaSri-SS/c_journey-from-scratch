# include <stdio.h>
int main(){
    int arr[100],count=0;
    for (int i=0;i<100;i++){
        scanf("%d",&arr[i]);
        if(arr[i]!=0){
            count++;
            printf("%d",arr[i]);
        }
        else{
            break;
        }
    }
    if(count==4 && arr[0]==arr[3]){
        printf("\n Success");
    }
    else{
        printf("\n Failure");
    }
    return 0;
}