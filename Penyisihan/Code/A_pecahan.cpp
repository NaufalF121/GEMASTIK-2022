

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
    int a, b ,c ,d;
    cin >> a >> b >> c >> d;
    if(b*d == a*c)cout << "sama" << endl;
    else if(b*d < a*c)cout << "lebih kecil" << endl;
    else cout << "lebih besar" << endl;
        
    return 0;
}
