#include<iostream>

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
	for (int i=0; i<n; i++) {
		std::cin >> height[i];
		int l;
		int m;
		std::cin >> l[i];
		std::cin >> m[i];
		min_height[i] = years * l[i] + height[i];
		max_height[i] = years * m[i] + height[i];
	}
}


