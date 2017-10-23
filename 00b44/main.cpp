#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

int main(){
    int sx,sy,x,y,t;
    int lastx,lasty;
    scanf("%d %d %d %d %d", &sx,&sy,&x,&y,&t);
    lastx = (x+t)/sx%2==0?(x+t)%sx:sx-(x+t)%sx;
    lasty = (y+t)/sy%2==0?(y+t)%sy:sy-(y+t)%sy;
    printf("%d %d",lastx,lasty);
    return 0;
}