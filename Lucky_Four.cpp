#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int a,b,count=0;
        cin>>a;
        while(a!=0){
            int remainder = a % 10;
            if(remainder == 4){
                count++;
            }
            a=a/10;
        }
        cout<<count<<endl;
    }
}
