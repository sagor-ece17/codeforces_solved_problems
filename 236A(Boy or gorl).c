#include<stdio.h>
#include<string.h>
int main(){
    char n[100];
    int i,j,len,s=0;
    gets(n);
    len=strlen(n);
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(n[i]>n[j]){
                n[i]=n[i]^n[j];
                n[j]=n[i]^n[j];
                n[i]=n[i]^n[j];
            }
        }
    }
    for(i=0;i<len;i++){
        if(n[i]!=n[i+1]){
            s++;
        }
    }
    if(s&1){

        printf("IGNORE HIM!\n");
    }
    else{

         printf("CHAT WITH HER!\n");
    }

return 0;
}
