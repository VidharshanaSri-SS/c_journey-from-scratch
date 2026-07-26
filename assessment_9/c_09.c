# include <stdio.h>
int main(){
    int arr[5],count,coun=0,new[5];
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        count = 0;
        for (int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                count++;
            }
        }
        if(count!=0){
            new[coun]=arr[i];
            coun++;
        }
        
    }
    for (int k=0;k<coun;k++){
        printf("%d ",new[k]);
    }
    return 0;
}