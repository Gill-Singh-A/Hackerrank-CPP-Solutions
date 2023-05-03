#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int x[q], y[q];
    int** arr = new int*[n]();
    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        int* ar = new int[m]();
        for(int j = 0; j < m; j++)
            cin >> ar[j];
        arr[i] = ar;
    }
    for(int i = 0; i < q; i++)
        cin>>x[i]>>y[i];
    for(int i = 0; i < q; i++)
        cout<<arr[x[i]][y[i]]<<endl;
    return 0;
}
