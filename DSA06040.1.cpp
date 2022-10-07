#include <bits/stdc++.h>
#define N 1000000
using namespace std;
#define ll long long
ll arr1[N], arr2[N], arr3[N];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        for (int i = 0; i < n1; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n2; i++)
        {
            cin >> arr2[i];
        }
        for (int i = 0; i < n3; i++)
        {
            cin >> arr3[i];
        }
        int check = 0;
        int i = 0, j = 0, k = 0; // i ,j and k are pointing at the  start of 1st , 2nd and 3rd array resepectively.
        while (i < n1 and j < n2 and k < n3)
        {
            if (arr1[i] == arr2[j] and arr3[k] == arr1[i]) // if all elements are same then
            {
                check = 1;
                cout << arr1[i] << " ";
                i++;
                j++;
                k++;
            }
            // increase the array index variable of those which are small
            else if (arr1[i] < arr2[j])
                i++;
            else if (arr2[j] < arr3[k])
                j++;
            else
                k++;
        }
        if (check == 0)
        {
            cout << -1 << endl;
        }
        cout << endl;
    }
    return 0;
}