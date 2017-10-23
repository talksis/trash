#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;
/*
귀찮다.. 그냥 벡터에 페어 쓰자..
페어로 정렬하면 아마도... 오름차순 정렬이 되니까
뒤에껄 앞으로 돌려서 쓰것지 뭐..-_-a
슈박!!!!
끝나는 시간이랑 똑같은 시간도 찾아야 한다!
*/


//버전2 그냥 페어 위치는 같고 내가 만든다.
// bool mySort(pair<int,int> a, pair<int,int> b){
//     if(a.second==b.second){
//         return a.first<b.first;
//     }
//     else
//         return a.second<b.second;
// }


// vector< pair<int, int> > t;
// int main(){
//     int n,s,e;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d %d",&s,&e);
//         t.push_back(pair<int,int>(s,e));
//     }
//     sort(t.begin(),t.end(),mySort);
    
//     int lastTime=0,ans=0;
//     for(int i=0;i<n;i++){
//         if(t[i].first>=lastTime){
//             lastTime=t[i].second;
//             ans++;
//         }
//     }
//     printf("%d",ans);
//     return 0;
// }


//버전 1 페어 쓰고, 페어의 앞뒤를 바꾸자..
vector< pair<int,int> > t;
int main(){
    int n;
    scanf("%d",&n);
    int s, e;
    for(int i=0;i<n;i++){
        scanf("%d %d",&s,&e);
        t.push_back(pair<int, int>(e,s));
        
    }
    sort(t.begin(),t.end());
    int ans = 0, lastTime=0;
    
    for(int i=0;i<n;i++){
        if(t[i].second>=lastTime ){
            ans++;
            lastTime=t[i].first;
        }
    }
    printf("%d",ans);
    return 0;
}