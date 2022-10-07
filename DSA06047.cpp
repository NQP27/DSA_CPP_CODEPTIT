#include <bits/stdc++.h>
using namespace std;
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
        int check = 0;
        int N;
        cin >> N;
        long long arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        long long a, b, c;
        sort(arr, arr + N); // sort the array
        for (int i = 0; i < N; i++)
            arr[i] = (arr[i] * arr[i]); // store the square of each element to directly check the pythagoras theorem

        for (int i = 0; i < N; i++)
        {
            if (check)
            {
                break;
            }
            int left = N - 2, right = N - 1;
            a = arr[i]; // first side of the triangle
            while (left > i)
            {
                b = arr[left];
                c = arr[right];
                long long calculated_side = c - b; // if a*a + b*b = c*c then obviously c*c - b*b = a*a , we utilize this to check the condition
                if (calculated_side == a)
                {
                    cout << "YES" << endl;
                    check = 1;
                    break;
                }
                else if (calculated_side > a) // if side is larger than expected then decrease  the variable pointing at the larger element
                    right--;
                else // if side is smaller than expected then decrease the variable pointing at the smaller element
                    left--;
            }
            // if (!check)
            // {
            // cout << "NO" << endl;
            // }
        }
        if (!check)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}