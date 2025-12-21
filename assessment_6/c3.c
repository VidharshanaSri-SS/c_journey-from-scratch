// to print the sum of the number from 1 to 5
# include <stdio.h>
int main(){
    int i=1,sum=0;
    while(i<=5){
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
    return 0;
}