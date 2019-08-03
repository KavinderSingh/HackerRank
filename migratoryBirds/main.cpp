#include <iostream>
#include <algorithm>
using namespace std;

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

    int i=0,c=1,x=0;
    int count[n];

    while(i<n)
    {
        //if(c<n)
        {
            if(a[i] == a[i+1])
            {
                c++;
                i++;
                continue;
            }

            if(a[i] != a[i+1])
            {
                i++;
                count[x++] = c;
                c=1;
            }
        }
    }
   
   int max =  *max_element(count ,count + x); 
   int sum = 0;

    for(int i=0;i<x;i++){
        sum = sum + count[i];
        if(count[i] == max)
        {
            break;
        }
    }

   cout << a[sum-1];
    return 0;
}
