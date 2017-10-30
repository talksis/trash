#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
int Max=0;
int init(vector<int>&origin ,vector<int>&tree, int node, int s, int e){
    if(s==e){
        tree[node]=origin[s];
        if(Max<=tree[node])
            Max=tree[node];
        return tree[node];
    }
    int mid= (s+e)/2;
    int t1= init(origin, tree, node*2, s,mid)*(mid-s+1);
    int t2= init(origin,tree, node*2+1,mid+1,e)*(e-mid);
    int temp = max(t1,t2);
    if(Max<=temp)
        Max=temp;
    return tree[node] = min(t1,t2);
}
int query(vector<int>&tree, int node, int s, int e, int l, int r){
    if(e<l|| r<s) return 0x7fffffff;
    if( l<=s&& e<=r) return tree[node];
    int mid=(s+e)/2;
    return min(query(tree, node*2, s, mid, l, r), query(tree, node*2+1, mid+1, e, l,r));
}

int main(){
    int n=1;
    vector<int> num(100000);
    int tree_size =1 << ((int) ceil(log2(2000000)))+1;
    vector<int> tree(tree_size);
    
    
    while(n!=0){
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%d",&num[i]);
        init(num,tree, 1, 0 , n-1);
        printf("%d\n",Max);
        Max=0;
    }
    
  
    return 0;
}
/*
10 4
75
30
100
38
50
51
52
20
81
5
1 10
3 5
6 9
8 10
*/