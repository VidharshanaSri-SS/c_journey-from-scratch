# include <stdio.h>
int main(){
    int arr[100],count=0,sum=0,a,new[100],val=0;
    for(int i =0;i<100;i++){
        scanf("%d",& arr[i]);
        if(arr[i]==0){
            break;
        }
        else{
            count=0;
            sum=0;
            a=arr[i];
            while(a!=0){
                count=a%10;
                sum=sum+count;
                a=a/10;
            }
            new[val]=sum;
            val++;
        }
    }
    for (int j=0;j<val;j++){
        printf("%d ",new[j]);
    }
    printf("\n");
    int temp=0;
    for(int k=0;k<val-1;k++){
        for(int l=0;(l<val-k-1);l++){
            if(new[l]>new[l+1]){
                temp=new[l];
                new[l]=new[l+1];
                new[l+1]=temp;
            }
        }
    }
    for(int c=0;c<val;c++){
        printf("%d ",new[c]);
    }
    return 0;
}