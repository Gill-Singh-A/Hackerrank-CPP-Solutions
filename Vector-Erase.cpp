#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, temp, p, p1, p2;
    vector<int> arr;
    
    cin >> n;
    while(n--){
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> p;
    cin >> p1 >> p2;

    arr.erase(arr.begin() + p - 1);
    for(auto i = arr.begin() + p1 - 1; p1 != p2; p2--)
        arr.erase(i);

    cout << arr.size() << endl;
    for(auto i = arr.begin(); i != arr.end(); i++)
        cout << *i << " ";

    return 0;
}
