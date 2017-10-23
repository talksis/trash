#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        sum += (i%2==0?i:0);
    printf("%d",sum);
    return 0;
}