#include<bits/stdc++.h>
using namespace std;
const int maxn = 10000;
int nxt[maxn];
void get_nxt(char *str) //可用于找前缀和后缀相同的长度
{
    nxt[0]=-1;
    int i=0,j=-1,len=strlen(str);
    while(i<len){
        if(j==-1||str[i]==str[j]) nxt[++i]=++j;
        else j=nxt[j];
    }
}
void get_nxt2(char *str)
{
    nxt[0]=-1;
    int i=1,j=0;
    int len =strlen(str);
    while(i<len){
        while(j!=-1&&str[i]!=str[j]) j=nxt[j];
        i++;j++;
        if(str[i]!=str[j]) nxt[j]=i;
        else nxt[j]=nxt[i];
    }
}

int match(char *d,char *p)
{
    int lenp=strlen(p),lend=strlen(d);
    int i=0,j=0;
    int num=0;
    while(i<lend){
        if(j==-1&&d[i]==p[j]){
            i++;j++;
            if(j==lenp) {num++;j=0;}
        }
        else j=next[j];
    }
    return num;
}
