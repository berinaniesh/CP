#include<iostream>
#include<climits>

int main () {

	int n;
	int years;
	std::cin >> n;
	std::cin >> years;

	int height[n];
	int min_height[n];
	int max_height[n];
	int l[n];
	int m[n];

	int count = 0;
	int interval_start = 0;
	int interval_end = 0;

	int max = INT_MIN;
	int min = INT_MAX;

	for (int i=0; i<n; i++) {
		std::cin >> height[i];
		std::cin >> l[i];
		std::cin >> m[i];
		min_height[i] = years * l[i] + height[i];
		if (min_height[i] < min) {
			min = min_height[i];
		}
		max_height[i] = years * m[i] + height[i];
		if (max_height[i] > max) {
			max = max_height[i];
		}
	}

	for (int i=0; i<n; i++) {
		interval_start = min_height[i];
		interval_end = max_height[i];
		for (int j=0; j<n; j++) {
			if (min_height[i] >= interval_start) {
				interval_start = min_height[i];
			}
			if (max_height[i] <= interval_end) {
				interval_end = max_height[i];
			}
		}
	}

}
