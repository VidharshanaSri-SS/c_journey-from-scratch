// left shifting
# include <stdio.h>
int main(){
    int a,bit,new;
    scanf("%d" "%d",& a ,&bit);
    new = a<<bit;
    for (int i=3;i>=0;i--){
        printf("%d",(new>>i)&1);
    }
    printf("\n");
    printf("%d",new);
    return 0;
}