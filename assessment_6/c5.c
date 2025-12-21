// to print the odd number from 1 to 9
# include <stdio.h>
int main(){
    int i=1;
    while(i<=9){
        if(i%2!=0){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}