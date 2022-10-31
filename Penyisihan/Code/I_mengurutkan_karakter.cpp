

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
    ll t;
    cin >> t;
    string a, b;
    ll a1, b1;
    cin >> a >> b;
    ll ans = 0;
    
    ll i = 0;
    
    while (i < t)
    {
        a1 = a[i];
        b1 = b[i];
        if(a1>=b1){
            ans++;
         while(i<t){
            if(a[i] < b[i]){
                break;
            }
            if(i == t-1 && ans == 1 && a[i] < b[i]){
                cout << 0 << endl;
                return 0;

            }
            i++;
            
         }
        
            
        }
        i++;
        
    }

    cout << ans << endl;
    return 0;
}
