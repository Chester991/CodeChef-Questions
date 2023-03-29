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

    int tc;cin>>tc;
    while(tc--){
        int n,a,b;
        cin>>n>>a>>b;

        int even,odd;

        if(n%2==0){
            odd=n/2;
            even=n/2;
        }
        else if(n%2!=0){
            odd=n/2 + 1;
            even=n/2;
        }

        int total = (odd*b) + (even*a);
        cout<<total<<endl;
    }
}