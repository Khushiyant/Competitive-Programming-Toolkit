/**
 * @file template.cpp
 * @author khushiyant (khushiyant2002@gmail.com)
 * @brief An Extensive template for Competitive Programming
 * @version 0.1
 * @date 2021-07-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
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
#define LOG(x) cout << #x << " " << x << '\n' // print a value with variable name
#define endl '\n'
typedef long long ll;
typedef vector<ll> vi;

int32_t main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
    #endif
        fast_io; // Faster I/O
        tst()    // Loop for test cases
        {
            /* Code goes here */
        }

        return 0;
}

/* Function Region */

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
void swap(void *a, void *b) // Datatype insensitve swapping
{
    void *tmp = a;
    a = b;
    b = tmp;
}