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
    
    ll a, b, c, min, max, count = 0;

    cin >> min >> max;
    cin >> a >> b >> c;

    for (ll i = min; i <= max; i++)
    {
        if (i % a == 0 && i % b != 0 && i % c != 0)
        {
            count++;
        }
        else if (i % b == 0 && i % a != 0 && i % c != 0)
        {
            count++;
        }
        else if (i % c == 0 && i % a != 0 && i % b != 0)
        {
            count++;
        }
    }
    
    cout << count << endl;

    return 0;
}