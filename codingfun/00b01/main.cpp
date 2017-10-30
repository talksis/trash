#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;
/*
재귀로 짜고 싶은데.. 귀찮아졌다..-_-a
하지만 재귀로 ㄱㄱ
재귀로 짜면 메모이제이숀을 해주자..
엉성한 재귀이다... 귀찮다.. 모든게 다 귀찮다.. 
인생이 귀찮다..코드도 귀찮다..육아도 힘들다..

메모리를 초기화 하지 않고 돌렸더니 1.7초 대가 나왔다.
그럼 메모리를 -1로 하고 0으로 찍히는 놈들도 그냥 나둬보면...
근데.. 저끝에서 맞으면 1이 반환 될꺼고...1은 왔다는 표시..
0으로 찍히는 애들이 많을까 싶지만.. 그래도 한다..

메모리 초기화에 걸리는 시간이랑.. 어떻게 다를까나..
*/
int cache[10001][10001];
char s1[10000], s2[10000];
int common(int l1,int l2){
    if(l1<0 || l2 < 0){
        return 0;
    }
    int& ret= cache[l1][l2];
    if(ret!=-1) return ret;
    if(s1[l1] == s2[l2]){//문자가 맞은 경우에는
        // printf("%c",s1[l1]);
        return ret = common(l1-1,l2-1)+1;
    }
    else{
        return ret = max(common(l1,l2-1),common(l1-1,l2));
    }
}

int main(){
    int len_s1,len_s2;
    scanf("%d %s %d %s",&len_s1,s1,&len_s2,s2);
    memset(cache,-1,sizeof(int)*10001*10001);
    printf("%d",common(len_s1-1,len_s2-1));

    return 0;
}
