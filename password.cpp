#include <iostream>

using namespace std;
string dn(string s)
{
    string n;
    for (int i=0; i<s.size(); i++)
        n = s[i] + n;
    return n;
}
int main()
{
    int n;
    cin >> n;
    string a[n];
    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if(a[j] == dn(a[i])) cout << a[i].size() << " " << a[i][a[i].size()/2];
        }
    }
    return 0;
}
