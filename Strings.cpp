#include <iostream>
#include <string>

using namespace std;

int main() {
    string n[2];
    cin>>n[0]>>n[1];
    cout<<n[0].size()<<" "<<n[1].size()<<endl<<n[0]+n[1]<<endl;
    char a = n[0][0];
    n[0][0] = n[1][0];
    n[1][0] = a;
    cout<<n[0]<<" "<<n[1]<<endl;
    return 0;
}
