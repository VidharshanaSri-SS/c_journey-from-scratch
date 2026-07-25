# include <stdio.h>
int main(){
    int arr[5],mem;
    for(int x=0;x<5;x++){
        scanf("%d",&arr[x]);
    }
    for (int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]<arr[j]){
                mem=arr[i];
                arr[i]=arr[j];
                arr[j]=mem;
            }
        }
    }
    for(int k=0;k<5;k++){
        printf("%d ",arr[k]);
    }
    return 0;
}