#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

#define ll long long int



#define loop(i, a, b) for (ll i = a; i < b; i++)





int main()
{
    

    ll n;
    cin >> n;

    vector<ll> v(n);
    loop(i, 0, n)
    {
        cin >> v[i];
    }

    ll a = 0, b = 0;
    if (v[n - 1] >= v[0])
    {
        a = v[n - 1];
        b = v[0];
    }
    else
    {
        a = v[0];
        b = v[n - 1];
    }

    ll cnt = 0;

    ll i = 1, j = n - 2;

    if (a == v[n - 1])
    {
        v[n - 1] = v[0] = 1e9;
        while (cnt != n)
        {
            cnt++;
            if (j > 0)
            {
                while (j > 0 && v[j] == 1e9 || a + v[j] <= 0)
                {
                    j--;
                    a += v[j];
                    v[j] = 1e9;
                }
            }
            if (i < n - 1)
            {
                while (i < n - 1 && v[i] == 1e9 || b + v[i] <= 0)
                {
                    i++;
                    b += v[i];
                    v[i] = 1e9;
                }
            }
        }
    }

    else
    {
        v[n - 1] = v[0] = 1e9;
        while (cnt != n)
        {
            cnt++;
            if (i < n - 1)
            {
                while (i < n - 1 && v[i] == 1e9 || a + v[i] <= 0)
                {
                    i++;
                }
                a += v[i];
                v[i] = 1e9;
            }
            if (j > 0)
            {
                while (j > 0 && v[j] == 1e9 || b + v[j] <= 0)
                {
                    j--;
                }
                b += v[j];
                v[j] = 1e9;
            }
        }
    }
    cout << abs(a - b);
}