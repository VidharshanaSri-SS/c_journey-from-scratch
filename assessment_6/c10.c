// to print the 2-digit odd number whose sum is 7
# include <stdio.h>
int main(){
    int i=11,sum=0;
    while(i<=99){
        if(i/10==7 && i%2!=0){
            sum=sum+i;
        }
        i++;
    }
    printf("%d",sum);
    return 0;
}
