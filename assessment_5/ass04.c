// from the given 4 digit number the center 2 digit is prime or not 


# include <stdio.h>
int main(){
    int a,sum=0;
    printf("enter the number:");
    scanf("%d",&a);
    int x=a/10;
    int y=x%100;
    for(int i=2;i<y;i++){
        if(y%i==0){
            sum++;
        }
    }
    if(sum==0){
        printf("prime number");
    }else{
        printf("not prime");
    }
    return 0;
}
