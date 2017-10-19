#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;
/*
일단 한번 생각을 해보자..
만약 최고는 집수 = 거주 가구 수

그리고 또 한 가지 꿀인 경우는 집수 - 거주가구 수 가..
거주가구 수 2배가 안되는경우..
- - - - 집
x x x x 이웃
0 0 0 0 들어갈 수 있는 수

그런데 최고의 경우라고 해봤자

0 x 0 - - 이거거든.. 그럼 최대라고 해봤자.. 이웃 * 2배
만약 집수>거주가구 수 인 경우에 

- 0 x 0 0 x 0 7집인데 2집 살때...
0 x 0 0 x 0 6집인데 2집 살때
0 x 0 x 0 5집인데 2집 살때
x 0 x 0   4집인데 2집 살때,
x x 0  3집인데 2집 살때
x x    2집인데 2집 살때

아아.. 가구 수 * 2, 집수 - 가구수 중에 최소값

그리고 최소한의 집 수는 닥치고 1이지..

xxx0 이렇게 만들면 되니까.
*/
int main(){
    int blank, houses;
    scanf("%d %d",&blank, &houses);
    if(blank==houses||houses==0) printf("0 0");
    else printf("1 %d",min(houses*2, blank-houses));
    return 0;
}
