#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cout << a[(i+m)% n] << " ";
    }

    return 0;
}