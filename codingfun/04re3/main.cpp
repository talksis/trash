#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;
int com[101];
int r[101][101];
int ans=-1,c;
void dfs(int k){
    if(r[k][k]==1){
        return;
    }
    r[k][k]=1;
    ans++;
    for(int i=1;i<=c;i++){
        if(r[k][i]==1){
            dfs(i);
        }
    }
    return ;
}

int main(){
    int n,a,b;
    scanf("%d %d",&c,&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        r[a][b]=1,r[b][a]=1;
    }
    dfs(1);
    printf("%d",ans);
    return 0;   
}