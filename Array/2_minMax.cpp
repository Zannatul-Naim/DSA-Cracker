#include<bits/stdc++.h>
using namespace std;

#define ll long long

pair<ll, ll> getMinMax(ll a[], int n)
{
     sort(a, a+n);
    //pair  p = new pair(m, n);
    return make_pair(a[0], a[n-1]);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++)  
            cin >> a[i];
        pair<ll, ll> p = getMinMax(a, n);
        
        cout << p.first << " " << p.second << "\n";
    }
    
}
