#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define tc     \
    ll tc;     \
    cin >> tc; \
    while (tc--)
#define pb push_back
#define mp make_pair
const ll MOD = 1e9 + 7;

void fastio()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fastio();
    ll t, a , b;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        cin >> a >> b;
        ll temp = 0;
        for (ll j = 2; j <= b; j++)
        {
            bool isPrime = true;
            for (ll k = 2; k <= a; k++)
            {
                if (j % k == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
            {
                temp++;
            }
        }
        cout << temp << endl;
    }

    return 0;
}