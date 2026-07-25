# include <stdio.h>
int main(){
    int arr[5],ini;
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        ini=arr[0];
        if (ini>arr[i]){
            ini=arr[i];
        }
    }
    printf("Smallest Number is :%d",ini);
    return 0;
}