#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int BS(string a[], int n, string x, int ok){
    int left = 0, right = n - 1;
    int mid = 0, result = -1;
    while(left <= right){
        mid = (left + right) / 2;

        if(a[mid] == x){
            result = mid;
            if(ok == 1) right = mid - 1;
            if(ok == 2) left = mid + 1;
        }
        else if(x > a[mid]){
            left = mid + 1;
        }
        else right = mid -1;
    }

    return result;
}
int main()
{
    int n;
    cin >> n;

    string a[n];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int m;
    cin >> m;

    string b[m];

    for(int i=0; i<m; i++){
        cin >> b[i];
    }

    vector<int> v;

    int lo, fo, count = 0;

    sort(a, a+n);

    for(int i = 0; i < m; i++){
        fo = BS(a, n, b[i], 1);
        lo = BS(a, n, b[i], 2);
        if(lo == -1 && fo == -1)count = 0;
        else
        count = lo - fo + 1;

        v.push_back(count);
    }

    for(int i=0 ;i< v.size(); i++){
        cout << v[i] << endl;
    }

    return 0;
}