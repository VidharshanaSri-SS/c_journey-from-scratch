// whether the given number's tens and ones place digit along forms a prime or composite number

# include <stdio.h>
int main(){
    int a,sum=0;
    printf("enter the number:");
    scanf("%d",&a);
    int x=a%100;
    for(int i=2;i<x;i++){
        if (x%i==0){
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
