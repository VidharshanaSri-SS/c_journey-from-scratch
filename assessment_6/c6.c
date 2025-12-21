// to print the odd number from 11 to 20
# include <stdio.h>
int main(){
    int i=11;
    while(i<20){
        if(i%2!=0){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}