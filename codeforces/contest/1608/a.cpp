#include<iostream>
using namespace std;

bool checker (int *ans, int num, int index) {
	if (index == 0) return true;
	for (int i=index-1; i>=0; i--) {
		if (num <= ans[i]) return false;
		if (num % ans[i] == 0) return false;
	}

	return true;
}

bool solve (int n, int *ans) {
	for (int i=0; i<n; i++) {
		if (ans[i] == 0) {
			for (int j=1; j<=1000000000; j++) {
				if (checker(ans, j, i)){
					ans[i] = j;
					if (solve (n, ans)) return true;
				}
				else {
					ans[i] = 0;
				}
			}
		}
		return false;
	}
	return true;
}

int main () {
	int n;
	cin >> n;
	int arr[n];
	//static int start_num = 1;
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}
	for (int i=0; i<n; i++) {
		int *ans = new int[arr[i]];
		for (int i=0; i<n; i++) {
			ans[i] = 0;
		}
		solve (arr[i], ans);
		for (int k=0; k<arr[i]; k++) {
			cout << ans[k] << " ";
		}
		delete [] ans;
		cout << endl;
	}

}

