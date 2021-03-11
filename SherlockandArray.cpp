#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int n;
        cin >> n;
        int a[n];
        int trai=0, tong=0;
        for (int i=0; i<n; i++)
        {
            cin>> a[i];
            tong+=a[i];
        }
        bool kt=false;
        for (int i=0;i<n;i++)
        {
            trai+= a[i-1];
            tong-= a[i];
            if (tong==trai) kt=1;
        }
        if (kt) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
