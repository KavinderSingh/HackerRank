#include <iostream>
#include <algorithm>
using namespace std;

int BS(int a[], int n, int x, int ok)
{
    int left = 0, right = n-1,result = -1;

    while(left <= right)
    {
        int mid = (left + right)/2;

        if(a[mid] == x)
        {
            result = mid;
            if(ok == 1)right = mid -1;
            if(ok == 2)left = mid + 1;
        }
        else if(x < a[mid])
        {
            right = mid -1;
        }
        else
        {
            left = mid + 1;
        }
           
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    sort(a, a+n);

    int fo = -1, lo = -1,count = 0, c= 0;

    for(int i=0;i<n;)
    {
        fo = BS(a, n, a[i], 1);
        lo = BS(a, n, a[i], 2);
        count = lo - fo + 1;
        i+= count;
        c += count/2;
    }
    
    cout << c;

    return 0;
}