#include<bits/stdc++.h>
using namespace std;

void solve(){
    int days,rupees;
    cin>>days>>rupees;

    vector<int>arr(days);
    for(int i=0;i<days;i++){
        cin>>arr[i];
    }
    int count=0,sum=0;
    sort(arr.rbegin(),arr.rend());
    for(int i=0;i<days;i++){
        sum = sum + arr[i];
        count++;
        if(sum>=rupees){
            break;
        }
    }
    cout<<days-count<<endl;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}