#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll M = 1e9 + 7;
int n;
struct matrix
{
    ll v[12][12];
    void input(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> v[i][j];
            }
        }
    }
    void output(int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
};

matrix matrix_multiply(matrix a, matrix b)
{
    matrix c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c.v[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                c.v[i][j] = (c.v[i][j] + ((a.v[i][k] % M) * (b.v[k][j] % M)) % M) % M;
                c.v[i][j] %= M;
            }
        }
    }
    return c;
}
matrix power(matrix a, ll b)
{
    if (b == 1)
    {
        return a;
    }
    else
    {
        matrix temp = power(a, b / 2);
        if (b % 2 == 0)
        {
            return matrix_multiply(temp, temp);
        }
        else
        {
            return matrix_multiply(a, matrix_multiply(temp, temp));
        }
    }
}
void tong(matrix a)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = (sum + a.v[i][n - 1]) % M;
    }
    sum %= M;
    cout << sum << endl;
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
        ll k;
        cin >> n >> k;
        matrix a;
        a.input(n);
        // a.output(n);
        matrix c = power(a, k);
        // c.output(n);
        // cout << endl;
        c.output(n);
    }
    return 0;
}