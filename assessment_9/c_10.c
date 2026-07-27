# include <stdio.h>
int main(){
    int arr[5],new[5],count=0,sum=0;
    for(int i=0;i<5;i++){
        scanf("%d",& arr[i]);
    }
    for(int j=4;j>=0;j--){ 
        new[count]= arr[j];
        sum= sum + new[count];
        count++;
    }
    for(int k=0;k<5;k++){
        printf("%d ",new[k]);
    }
    printf("\n%d",sum);
    return 0;
}