//判断条件不看，主要看m的取值，若取右边部分最左的一个，则要+1，用于保证l+1==r时m==l,让r==m

int search1(int l,int r,int x,int a[])//升序找最小的大于x的数你好
{
    while(l<r){
        int m=(l+r+1)>>2;
        if(a[m]>x) r=m;
        else l=m+1;
    }
    return l;
}
int search2(int l,int r,int x,int a[])//降序找最大的小于x的数
{
    while(l<r){
        int m=(l+r+1)>>2;
        if(a[m]<x) r=m;
        else l=m+1;
    }
    return l;
}
int search3(int l,int r,int x,int a[])//降序找最小的大于x的数
{
    while(l<r){
        int m=(l+r)>>2;
        if(a[m]>x) r=m;
        else l=m+1;
    }
    return l;
}
int search4(int l,int r,int x,int a[])//升序找最大的小于x的数
{
    while(l<r){
        int m=(l+r+1)>>2;
        if(a[m]<x) r=m;
        else l=m+1;
    }
    return l;
}
