#include <bits/stdc++.h>

using namespace std;


#define endl '\n'

#define int long long



bool isSorted(const vector<int> &arr, int n)

{

   for (int i = 0; i < n - 1; i++)

   {

      if (arr[i] > arr[i + 1])

      {

         return false;

      }

   }

   return true;

}



signed main()

{

   ios::sync_with_stdio(false);

   cin.tie(NULL);



   int tc;

   cin >> tc;



   while (tc--)

   {

      int n;

      cin >> n;

      vector<int> arr(n);



      for (int i = 0; i < n; i++)

      {

         cin >> arr[i];

      }



      if (isSorted(arr, n))

      {

         cout << 0 << endl;

         continue;

      }



      int mx = *max_element(arr.begin(), arr.end());

      int mn = *min_element(arr.begin(), arr.end());



      if (mx != arr[n - 1] && mn != arr[0])

      {

         cout << mx + mn << endl;

         continue;

      }



      vector<int> sorted_arr = arr;

      sort(sorted_arr.begin(), sorted_arr.end());



      int max_unsorted = -1, second_max_unsorted = -1;



      for (int i = 0; i < n; i++)

      {

         if (arr[i] != sorted_arr[i])

         {

            if (arr[i] > max_unsorted)

            {

               second_max_unsorted = max_unsorted;

               max_unsorted = arr[i];

            }

            else if (arr[i] > second_max_unsorted)

            {

               second_max_unsorted = arr[i];

            }

         }

      }



      cout << max_unsorted + second_max_unsorted << endl;

   }



   return 0;

}