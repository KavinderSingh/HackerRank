#include <iostream>
using namespace std;

int main(){
    int a[6][6];

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            cin >> a[i][j];
        }
    }

    int n = 6;

    int sum = 0, max = -10000;

    for(int j = 0; j < n-2; j++){

        for(int i = 0; i < n-2; i++){
            int flag = 1;
            for(int x = i; x < (i + 3); x++){
                for(int k = 0; k < 3; k++){
                    sum += a[x][j + k];
                }
                if(flag == 1){
                    if(x+1 < n){
                        sum += a[++x][j+1];
                        flag = 0;
                    }
                    else break;
                }
            }
            if(sum > max) max = sum;
            sum = 0;
        }
    }

    cout << max;

    return 0;
}