#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;
/*
이놈은 닥치고 소트 오름차순
*/
int main(){
    int n,val[101];
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        scanf("%d",val+i);
    }
    sort(val,val+n);
    for(int i =0;i<n;i++){
        printf("%d ",val[i]);
    }
    return 0;
}
