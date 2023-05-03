#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

void printKMax(int arr[], int n, int k){
    deque<int> dq;
    int max = INT16_MIN, rem;
    for(int i = 0; i < k; i++){
        dq.push_back(arr[i]);
        if( arr[i] > max )
            max = arr[i];
    }
    for(int i = k; i <= n; i++){
        cout << max << " ";
        rem = arr[i-k];
        dq.push_back(arr[i]);
        dq.pop_front();
        if( arr[i] > max )
            max = arr[i];
        else if( rem == max )
            max = *max_element(dq.begin(), dq.end());
    }
    cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}

  	return 0;
}
