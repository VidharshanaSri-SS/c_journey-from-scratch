// to check whether the given number is prime or composite

# include <stdio.h>
int main(){
    int a,sum=0;
    printf("enter the number:");
    scanf("%d",&a);
    for(int i=2;i<a;i++){
        if(a%i==0){
            sum++;
        }
    }
    if(sum==0){
        printf("prime number");
    }else{
        printf("composite number");
    }
    return 0;
}
