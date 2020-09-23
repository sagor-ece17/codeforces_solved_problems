#include<stdio.h>
int main(){
        int n,i,a[1000][3];
        int ab=0,sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            ab=0;
            scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
            if(a[i][0]==1){
                ab++;
            }
            if(a[i][1]==1){
                ab++;
            }
            if(a[i][2]==1){
                ab++;
            }

            if(ab>=2){
                sum++;
            }
        }
    printf("%d\n",sum);
    return 0;
}
