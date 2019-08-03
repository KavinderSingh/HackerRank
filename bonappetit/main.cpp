#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int a[n],sum = 0;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(i == k)continue;
        sum += a[i];
    }

    int b;
    cin >> b;

    if(sum/2 - b == 0) cout << "Bon Appetit";
    else
    {
        cout << b - sum/2; 
    }
    

    return 0;
}