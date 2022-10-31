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

int main() {
    fastio();

    ll xc, yc, N, Q;

    cin >> xc >> yc;
    cin >> N;
    vector <ll> komp;
    for (int i=0; i<N; i++){
        ll a, b;
        cin >> a >> b;
        komp.pb((xc-a)*(xc-a)+(yc-b)*(yc-b));
    }
 
    sort(komp.begin(), komp.end());
    cin >> Q;
    
    for (int p=0; p<Q; p++){
        ll r;
        cin >> r;
        r *= r;
        vector <ll>::iterator res;
        res = upper_bound(komp.begin(), komp.end(), r);
        cout << res - komp.begin() << endl;
    }

    return 0;
}