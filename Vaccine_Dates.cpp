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

        int d, l, r;
        cin >> d >> l >> r;
        if(d<l){
            cout<<"Too Early"<<endl;
        }
        else if(d>r){
            cout<<"Too Late"<<endl;
        }
        else{
            cout<<"Take second dose now"<<endl;
        }
    }
}