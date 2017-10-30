#include <cstdio>

int cache[2000];

int tile(int n){
    if(n==0) return 1;//기저사례
    int &ret = cache[n];
    if(ret!=0) return ret;
    ret = tile(n-1)%10007;
    if(n>=2) ret+=tile(n-2)%10007;
    return ret%10007;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",tile(n));
    return 0;
}