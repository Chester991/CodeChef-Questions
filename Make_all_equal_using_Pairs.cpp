#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count=0;
    for(auto i : arr){
        if(i>k){
            count++;
        }
    }
    cout<<count<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}