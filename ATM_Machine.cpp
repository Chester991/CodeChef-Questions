#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int money, people;
    cin >> people >> money;
    string str = "";

    vector<int> arr(people);
    for (int i = 0; i < people; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < people; i++)
    {
        if (money >= arr[i])
        {
            money = money - arr[i];
            str = str + "1";
        }
        else if (money < arr[i])
        {
            str = str + "0";
        }
    }
    cout << str << endl;
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