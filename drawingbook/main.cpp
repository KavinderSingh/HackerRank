#include <iostream>
using namespace std;

int main()
{
    int n,p;
    cin >> n >> p;
    int c;
    
    if(n%2 != 0 && p == n-1 || p == 1) 
    {
        cout << 0;
        return 0;
    }

    if(n%2 == 0 && p == n-1)
    {
        cout << 1;
        return 0;
    }

    if(n-p <= n/2) cout << (n-p)/2;
    else if(n-p > n/2) 
    {
        cout << p/2;
    }
    return 0;
}