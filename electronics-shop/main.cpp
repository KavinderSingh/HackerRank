#include <iostream>
using namespace std;

int main()
{
    int budget,k,m;
    cin >> budget >> k >> m;
    int keyboards[k], mouse[m];

    for(int i=0;i<k;i++)
    {
        cin >> keyboards[i];
    }

    int sum[k*m],x=0;

    for(int i=0;i<m;i++)
    {
        cin >> mouse[i];
    }

    for(int i = 0; i < k; i++)
    {

        for(int j = 0; j < m; j++)
        {
            sum[x++] = keyboards[i] + mouse[j];
        }
    }

    int max = -1;

    for(int i=0;i<x;i++)
    {
        if(sum[i] > max && sum[i] <= budget)
        {
            max = sum[i];
        }    
    }

    cout << max;

    return 0;
}