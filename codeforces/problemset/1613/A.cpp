#include<iostream>
//#include<math.h>

//#define U64 unsigned long long

int main () {
    int n;
    std::cin >> n;
    int n1[n];
    int n2[n];
    int zero1[n]; 
    int zero2[n];

    for (int i=0; i<n; i++) {
        std::cin >> n1[i];
        std::cin >> zero1[i];
        std::cin >> n2[i];
        std::cin >> zero2[i];
    }
    
    for (int i=0; i<n; i++) {
        if (n1[i] > 9) {
            
        }
    }

    for (int i=0; i<n; i++) {
        if (n1[i] == 0 && n2[i] == 0) {
            std::cout << '=' << std::endl;
            continue;
        }
        if (zero1[i] == zero2[i]) {
            if (n1[i] > n2[i]) {
                std::cout << '>' << std::endl;
                continue;
            } else if (n1[i] < n2[i]) {
                std::cout << '>' << std::endl;
                continue;
            } else {
                std::cout << '=' << std::endl;
                continue;
            }
        }

        if (zero1[i] > zero1[j]) {
            if (n1[i] != 0) {

            }
        }
    }

}