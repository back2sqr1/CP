#include<bits/stdc++.h>
#define maxn 10005
#define base 10000
#define ll long long
using namespace std;
typedef vector<int> bignum;
bignum sum,dem;
int n;
char s[maxn];
bignum to_big(int a)
{
	bignum c;
	c.clear();
	while(a)
	{
	    c.push_back(a%base);
	    a/=base;
	}
	return c;
}
bignum fix(bignum a)
{
    a.push_back(0);
    for (int i=0;i<a.size();++i)
    {
        a[i+1]+=a[i]/base;
        a[i]%=base;
        if (a[i]<0)
        {
            a[i]+=base;
            --a[i+1];
        }
    }
    while(a.size()>=2&&a.back()==0) a.pop_back();
    return a;
}
bignum operator + (bignum a,const bignum &b)
{
    a.resize(max(a.size(),b.size()));
    for (int i=0;i<b.size();++i)
        a[i]+=b[i];
    return fix(a);
}
bignum operator *(const bignum &a,const bignum &b)
{
    bignum c(a.size()+b.size());
    for (int i=0;i<a.size();++i)
        for (int j=0;j<b.size();++j)
        c[i+j]+=a[i]*b[j];
    return fix(c);
}
ostream& operator << (ostream& cout, const bignum &a)
{
    printf("%d", a.back());
    for (int i=(int)a.size()-2; i>=0; i--)
        printf("%04d", a[i]);
    return cout;
}
int main()
{
    cin>>(s+1);
    n=strlen(s+1);
    dem=to_big(1);
    sum=to_big(1);
    for (int i=1;i<=n;++i)
    {
        if (s[i]=='P') continue;
        if (s[i]=='L')
        {
            sum=sum*to_big(2);
            continue;
        }
        if(s[i]=='R')
        {
            sum=sum*to_big(2)+dem;
            continue;
        }
        sum=sum*to_big(5)+dem;
        dem=dem*to_big(3);
    }
    cout<<sum;
    return 0;
}