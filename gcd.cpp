#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)//while(b==0&&a==0)
{
    if(b>a){a^=b;b^=a;a^=b};
    return b==0?a:gcd(b,a%b);
}
