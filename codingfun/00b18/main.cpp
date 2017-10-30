#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;
/*
일단 재귀로 ㄱㄱ
메모이제이션 없이 했더니 폭발 했다..-_-a
1000개만 되도 끝장이네 이거..ㅋㅋ
*/
int al[10001];
int cache[10001][3];
int find_max(int n, int c){
    if(n<0){
        return 0;
    }
    int& ret = cache[n][c];
    if(ret!=-1) return ret;
    //마실때 마실수 없는 경우 고려
    if(c!=2)
        ret = find_max(n-1, c+1)+al[n];
    //안마실때
    ret = max(find_max(n-1, 0), ret);
    return ret;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",al+i);
    }
    memset(cache,-1,sizeof cache);    
    printf("%d", find_max(n,0));
    return 0;
}
