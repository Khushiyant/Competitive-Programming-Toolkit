#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair

#define F first
#define S second
#define PI 3.1415926535897932384626
#define fast_io ios_base::sync_with_stdio(0), cin.tie(0) // faster I/O
#define rept(a, n) for (long long i = a; i < n; i++)
#define ALL(x) (x).begin(), (x).end()
#define tst()        \
    long long t = 1; \
    cin >> t;        \
    while (t--)
#define endl '\n'
#define deb(x) cout << #x << " -> " << x << endl // print a value with variable name
typedef long long ll;
typedef vector<ll> vi;
const int mod = 1e9 + 7;

/* --- Final Code Logic --- */

void test_case()
{
    /* Code Here */
}

/* --END HERE */

int32_t main()
{

#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    fast_io; // Faster I/O
    tst()    // Loop for test cases
    {
        test_case();
    }

    return 0;
}

/* Function Region */

template <typename T>
void print(T val)
{
    cout << val << endl;
}

ll b_to_d(string str) // Binary to decimal
{
    ll n = str.length();
    ll sum = 0;
    for (ll i = 0; i < n; i++)
        if (str[i] == '1')
            sum += pow(2, n - i - 1);
    return sum;
}
string d_to_b(long long n)
{
    stack<char> binary;
    while (n != 0)
    {
        if (n % 2 == 1)
            binary.push('1');
        else
            binary.push('0');
        n /= 2;
    }
    string bin = "";
    while (!binary.empty())
    {
        bin += binary.top();
        binary.pop();
    }
    return bin;
}
ll C(ll n, ll r) // Calculate the combination    (/* nCr */)
{
    ll p = 1, k = 1;
    if (n - r < r)
        r = n - r;

    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;
            ll m = __gcd(p, k);
            p /= m;
            k /= m;

            n--;
            r--;
        }
    }
    else
        p = 1;
    return p;
}