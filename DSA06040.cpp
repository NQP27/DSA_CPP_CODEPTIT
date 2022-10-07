#include <bits/stdc++.h>
#define N 1000000
#define ll long long
using namespace std;
ll a[N], b[N], c[N];
//
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
        multiset<ll> s1;
        multiset<ll> s2;
        multiset<ll> s3;
        multiset<ll> s4;
        multiset<ll> s5;
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        for (int i = 0; i < n1; i++)
        {
            cin >> a[i];
            s1.insert(a[i]);
        }
        for (int i = 0; i < n2; i++)
        {
            cin >> b[i];
            s2.insert(b[i]);
        }
        for (int i = 0; i < n3; i++)
        {
            cin >> c[i];
            s3.insert(c[i]);
        }
        for (int i = 0; i < n2; i++)
        {
            if (s1.count(b[i]) != 0 and s4.count(b[i]) == 0)
            {
                int k = s1.count(b[i]) < s2.count(b[i]) ? s1.count(b[i]) : s2.count(b[i]);
                for (int j = 0; j < k; j++)
                {
                    s4.insert(b[i]);
                }
            }
        }
        for (int i = 0; i < n3; i++)
        {
            if (s4.count(c[i]) != 0 and s5.count(c[i]) == 0)
            {
                int k = s4.count(c[i]) < s3.count(c[i]) ? s4.count(c[i]) : s3.count(c[i]);
                for (int j = 0; j < k; j++)
                {
                    s5.insert(c[i]);
                }
            }
        }
        if (s5.size() == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            for (set<ll>::iterator it = s5.begin(); it != s5.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
// #include <bits/stdc++.h>
// #define N 1000000
// #define ll long long
// using namespace std;
// ll a[N], b[N], c[N];
//
// int main()
// {
// ios::sync_with_stdio(0);
// cin.tie(0);
// cout.tie(0);
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif
// int t;
// cin >> t;
// while (t--)
// {
// set<ll> s1;
// set<ll> s2;
// set<ll> s3;
// int n1, n2, n3;
// cin >> n1 >> n2 >> n3;
// for (int i = 0; i < n1; i++)
// {
// cin >> a[i];
// s1.insert(a[i]);
// }
// for (int i = 0; i < n2; i++)
// {
// cin >> b[i];
// if (s1.count(b[i]) != 0)
// {
// s2.insert(b[i]);
// }
// }
// for (int i = 0; i < n3; i++)
// {
// cin >> c[i];
// if (s2.count(c[i]) != 0)
// {
// s3.insert(c[i]);
// }
// }
// if (s3.size() == 0)
// {
// cout << -1 << endl;
// }
// else
// {
// for (set<ll>::iterator it = s3.begin(); it != s3.end(); it++)
// {
// cout << *it << " ";
// }
// cout << endl;
// }
// }
// return 0;
// }