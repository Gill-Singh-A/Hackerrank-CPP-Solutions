#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

        cout << left << nouppercase << showbase << hex << (long long)A << endl; 
        cout << right << setw(15) << setprecision(2) << showpos << fixed << setfill('_') << B << endl;
        cout << setprecision(9) << noshowpos << uppercase << scientific << C << endl;

	}
	return 0;

}