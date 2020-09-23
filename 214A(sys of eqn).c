#include<stdio.h>
int main()
{
    int a,b,n,m,s=0;
    scanf("%d%d",&n,&m);
    for(a=0;a<(n+m);a++){
        for(b=0;b<(m+n);b++){
            int e1=(a*a)+b;
            int e2=a+(b*b);
            if(e1==n && e2==m){
                s++;
            }
        }
    }
    printf("%d \n",s);

    return 0;
}
