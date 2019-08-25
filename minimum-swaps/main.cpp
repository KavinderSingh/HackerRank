#include <iostream>
using namespace std;

int ls(int a[], int n, int x){

    int i;
    for(int i=0;i<n;i++){
        if(a[i] == x)return i;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[n],temp[n];
    for(int i =0; i < n; i++){
        cin >> a[i];
        temp[i] = i;
    }
     
    int index1 = -1 ;

    int i,j,count=0;
    for(i = 1; i <= n; i++){
        for(int j = i-1; j < n; j++){

            if(a[j] == i){
                int t = a[j];

                if( t == a[temp[i-1]]){
                    break;
                }

                a[j] = a[temp[i-1]];
                a[temp[i-1]] = t;

                count++;

                break;
            }

        }
        
    }
    cout << count;


    return 0;
}