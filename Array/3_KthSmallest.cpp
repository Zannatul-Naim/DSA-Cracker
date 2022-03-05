#include<bits/stdc++.h>
using namespace std;

#define ll long long

int kthSmallest(int arr[],  int n, int k) {
        //code here
        sort(arr, arr+n);
        return arr[k-1];
        
    }

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int k;
        cin >> k;
        cout << kthSmallest(a, n, k) << endl;
    }
}
