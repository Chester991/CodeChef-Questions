#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> arr(3);
    for (int i = 0; i <= 2; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    if (arr[0] + arr[1] == arr[2])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}