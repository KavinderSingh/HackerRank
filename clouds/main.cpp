#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int c = 0;

    for(int i = 0; i <= n-2;){
        if(a[i+2] != 1){
            i = i+2;
            c++;
        }
        else if(a[i+1] != 1){
            i = i+1;
            c++;
        }
    }

    cout << c;

    return 0;
}