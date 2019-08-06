#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int a[n];

    int i,j;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    int count = 0, max = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i] == a[j] || a[j] == a[i] + 1) count++;
        }

        if(count > max) max = count;
        count = 0;
    }

    cout << max;

    return 0;
}