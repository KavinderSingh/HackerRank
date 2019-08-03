#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int trek[n];

    int sum = 0, valleys=0;

    for(int i=0;i<n;i++)
    {
        char c;
        cin >> c;
        if(c== 'D') sum += -1;
        else sum += 1;
        trek[i] = sum;
    }

    int first_zero, second_zero,flag = 0;

    for(int i=0;i<n;i++)
    {
        if((trek[i] == 0 || i==0) && flag == 0)
        {
            first_zero = i;
            flag = 1;
            continue;
        }
        else if(trek[i] == 0 && flag == 1)
        {
            second_zero = i;
        }
        else if(trek[i]!= 0) continue;

        int sum_in_between=0;

        for(int j=first_zero; j<second_zero;j++)
        {
            sum_in_between += trek[j];
        }

        if(sum_in_between < 0)
        {
            valleys++;
        }

        first_zero = second_zero;
    }
    
    cout << valleys;
    return 0;
}