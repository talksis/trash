#include <cstdio>
int st[36];
int main(){
    int n,t;
    scanf("%d",&n);
    if(n==35){
        printf("0");
        return 0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        st[t]=1;
    }
    for(int i=1;i<36;i++) 
        if(!st[i])    
            printf("%d ",i);
    return 0;
}