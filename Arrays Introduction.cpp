#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int n;
    vector<int> arr;
    cin >> n;
    for(int i = 0; i < n; i++){
        int j;
        cin >> j;
        arr.push_back(j);
    }
    for(int i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";
    return 0;
}
