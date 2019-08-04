#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int cat1, cat2, mouse;

        cin >> cat1 >> cat2 >> mouse;

        if(abs(mouse - cat1) < abs(mouse - cat2))
        {
            cout << "Cat A"<< endl; 
        }
        else if(abs(mouse - cat1) > abs(mouse - cat2))
        {
            cout << "Cat B" <<endl;
        }
        else cout << "Mouse C" << endl;
    }

    return 0;
}