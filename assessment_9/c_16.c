# include <stdio.h>
int main(){
    int a_1[50],a_2[50],new[51];
    for(int i=0;i<50;i++){
        scanf("%d",&a_1[i]);
        scanf("%d",&a_2[i]);
        new[i]=a_1[i]+a_2[i];
        printf("%d ",new[i]);
    }
    return 0;
}