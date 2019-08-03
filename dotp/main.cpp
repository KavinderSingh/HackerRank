#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int year;
    cin >> year;

    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int leap_year = 0;

    if(year == 1918)
    {
        cout << "26.09.1918";
        return 0 ;
    }

    if(year <= 1917)
    {
        if(year%4 == 0)leap_year = 1;
    } 

    else
    {

        if(year%100 == 0)
        {
            if(year%400 == 0)
            {
                // leap year
                leap_year = 1;
            }
            else
            {
                // not a leap year
                leap_year = 0;
            }
            
        }
        else
        {
            if(year%4 == 0)
            {
                //leap year
                leap_year = 1;
            }
        }
    }

    int sum = 0,date = 0;
    for(int i=0; i < 256/31; i++)
    {
        sum += days[i]; 
    }
    if(leap_year == 1) sum += 1;
    date = 256 - sum;
    int month = ceil(256.0/31.0);
    
    cout << date << ".0" << month << "." << year;

    return 0;
}