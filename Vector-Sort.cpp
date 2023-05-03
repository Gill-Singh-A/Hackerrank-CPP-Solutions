#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, temp;
    vector<int> arr;
    
    cin >> n;
    while(n--){
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    for(auto i = arr.begin(); i != arr.end(); i++)
        cout << *i << " ";
      
    return 0;
}
