// the given number is prime or not and whether the sum is 14 or not 

# include <stdio.h>
int main(){
    int a,sum=0,y=0,x,i;
    printf("enter the number:");
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if (a%i==0){
            sum++;
        }
    }for(int j=a;j!=0;j/=10){
        x=j%10;
        y=y+x;
    }
    if(sum==0&&y==14){
        printf("the number is prime and the sum is 14");
    }else if(sum==0 && y!=14){
        printf("the number is prime and the sum is not 14");
    }else if(sum!=0 && y!=14){
        printf("the number is not prime and sum is not 14");
    }else if(sum!=0 && y==14){
        printf("the number is not prime and the sum is 14");
    }
    return 0;
}
