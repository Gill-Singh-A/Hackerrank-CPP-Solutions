#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>

using namespace std;


int main() {
    int n, q, m;
    string name;
    map<string, int> marks;
    map<string, int>::iterator i;
    
    cin >> n;
    while(n--){
        cin >> q >> name;
        switch(q){
            case 1:
                cin >> m;
                marks[name] += m;
                break;
            case 2:
                marks.erase(name);
                break;
            case 3:
                i = marks.find(name);
                cout << ( i == marks.end()? 0: i->second) << endl;
                break;
        }
    }

    return 0;
}
