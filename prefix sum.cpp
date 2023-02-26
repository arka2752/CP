// This is arka's code.....
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int ar[N];
int prefix_sum[N];
int main()
{
    int n;
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (i == 0)
        {
            prefix_sum[0] = ar[i];
        }
        if (i > 0)
        {
            prefix_sum[i] = prefix_sum[i - 1] + ar[i];
        }
    }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << prefix_sum[i] << " ";
    // }
    // cout << endl;
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << prefix_sum[r - 1] - prefix_sum[l - 2] << endl;
    }
}
/*

Input
6
3 6 2 8 9 2
4
2 3
4 6
1 5
3 6

Output
8
19
28
21







*/

/*
// This is arka's code.....
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long sum = 0;
        for (int i = l; i <= r; i++)
        {
            sum += ar[i];
        }
        cout << sum << endl;
    }
}














*/