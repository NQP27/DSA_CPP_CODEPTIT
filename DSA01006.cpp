#include <bits/stdc++.h>
#define N 100000
using namespace std;
int check;
// Khoi tao
void khoitao(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
}

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
        int n, a[N], b[100][10];
        cin >> n;
        khoitao(a, n);
        int o = 0;
        stack<string> st;
        do
        {
            string s = "";
            for (int i = 0; i < n; i++)
            {
                s += a[i] + '0';
            }
            st.push(s);
            o++;
        } while (next_permutation(a, a + n));
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
    return 0;
}