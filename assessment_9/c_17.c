# include <stdio.h>
int main(){
    int arr[10],a=0,val=0;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        val++;
    }
    for (int x=0;x<val;x++){
        if(arr[x]%10!=0){
            arr[x]=arr[x]+1;
            a=arr[x]/10;
            arr[x]=arr[x]%10;
            printf("%d ",arr[x]);
        }
    }
    return 0;
}