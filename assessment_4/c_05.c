# include <stdio.h>
int main(){
    int a=1;
    loop:if (a%2!=0 && a<=9){
        printf("%d\n",a);
        a=a+2;
        goto loop;
    }
    return 0;
}