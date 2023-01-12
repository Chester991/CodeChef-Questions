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
    cin>>t;
    while(t--){
        char c;
        cin>>c;
        if(c=='B'||c=='b'){
            cout<<"BattleShip"<<endl;
        }
        else if(c=='C'||c=='c'){
            cout<<"Cruiser"<<endl;
        }
        else if(c=='D'||c=='d'){
            cout<<"Destroyer"<<endl;
        }
    }
}