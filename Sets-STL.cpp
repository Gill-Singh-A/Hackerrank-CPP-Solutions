#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n, q1, q2;
    set<int> arr;
    set<int>::iterator i;
    
    cin >> n;
    while(n--){
        cin >> q1 >> q2;
        switch(q1){
            case 1:
                arr.insert(q2);
                break;
            case 2:
                arr.erase(q2);
                break;
            case 3:
                i = arr.find(q2);
                cout << (i == arr.end()? "No" : "Yes") << endl;
                break;
        }
    }

    return 0;
}
