#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    cin >> str;
    int j = str.length();
    for(int i = 0; i < j; i++)
        if(str[i]==',')
            cout << "\n";
        else
            cout << str[i];
    return 0;
}
