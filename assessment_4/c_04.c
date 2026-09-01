# include <stdio.h>
int main(){
    int a=1,sum=0;
    loop:if(a<=6){
        sum=sum+a;
        a++;
        goto loop;
    }
    printf("%d",sum);
    return 0;
}