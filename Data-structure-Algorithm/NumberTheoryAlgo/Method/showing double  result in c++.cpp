#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define sz 999999
int long long a[sz];
using namespace std;
typedef long long ll;
int main()
{
    double n,m,f,c,d,cel;
    cin>>c>>d;
    f=((c/5)*9)+32;
    f=f+d;
    cel=((f-32)/9)*5;
    cout<<fixed<<setprecision(2)<<cel<<endl;
    return 0;


}


