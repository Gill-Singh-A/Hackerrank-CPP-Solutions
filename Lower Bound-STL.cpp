#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, temp, nq, q;
    vector<int> arr;
    vector<int>::iterator i;
    
    cin >> n;
    while(n--){
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> nq;
    while(nq--){
        cin >> q;
        i = lower_bound(arr.begin(), arr.end(), q);
        cout << (*i == q? "Yes " : "No ") << i - begin(arr) + 1 << endl;
    }

    return 0;
}