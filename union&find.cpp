#include<bits/stdc++.h>
using namespace std;
int fa[maxn];//"maxn" need to be defined
int Find(int x)
{
    return fa[x]==x?x:fa[x]=Find(x);
}
bool Union(int x,int y)
{
    x=Find(x);y=Find(y);
    if(x!=y){fa[x]=y;return true;}
    return false;
}
void init()
{
    for(int i=0;i<maxn;i++){
        fa[i]=i;
    }

}
