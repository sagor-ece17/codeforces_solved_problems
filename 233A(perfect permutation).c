#include<stdio.h>

int main(){
    int n,i;
    scanf("%d",&n);
    if(n==1){
        printf("-1\n");
    }
    else if(n%2==0){
        for(i=n;i>=1;i--){
            printf("%d ",i);
        }
    }
    else{
        printf("-1 \n");
    }

return 0;
}
