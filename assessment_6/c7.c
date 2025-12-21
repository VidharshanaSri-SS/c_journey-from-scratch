// to print the 2-digit odd number whose sum is 7
# include <stdio.h>
int main(){
    int i=11;
    while(i<=99){
        if((i%10)+(i/10)==7 && i%2!=0){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}