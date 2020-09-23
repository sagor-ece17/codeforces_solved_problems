#include<stdio.h>

int main(){
    int a[4],i,j,s=0;
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++){
        for(j=i+1;j<4;j++){
            if(a[i]>a[j]){
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }
    }

    for(i=0;i<3;i++){
        if(a[i]==a[i+1]){
            s++;
        }
    }
printf("%d",s);
return 0;
}
