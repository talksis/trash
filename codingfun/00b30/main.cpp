#include <cstdio>
int cache[40][40];
int make_bridge(int n, int s){
    //북쪽은 항상 적다
    if(n==0||n==s) return 1;
    int& ret = cache[n][s];
    if(ret!=0) return ret;
    return ret = make_bridge(n,s-1)+make_bridge(n-1,s-1);
}

int main(){
    int n,a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n", make_bridge(a,b));
    }
    return 0;
}