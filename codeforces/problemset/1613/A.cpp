#include<iostream>
//accepted

int main () {
    int n;
    std::cin >> n;
    float n1[n];
    float n2[n];
    int zero1[n]; 
    int zero2[n];

    for (int i=0; i<n; i++) {
        std::cin >> n1[i];
        std::cin >> zero1[i];
        std::cin >> n2[i];
        std::cin >> zero2[i];
    }
    
    for (int i=0; i<n; i++) {
        while (n1[i] >= 10) {
            n1[i] = n1[i]/10;
            zero1[i]++;
        }
        while (n2[i] >= 10) {
            n2[i] = n2[i]/10;
            zero2[i]++;
        }

    }

    for (int i=0; i<n; i++) {
        if (n1[i] == 0 && n2[i] == 0) {
            std::cout << '=' << std::endl;
            continue;
        }
        if (n1[i] == 0 && n2[i] !=0) {
            std::cout << '<' << std::endl;
            continue;
        }
        if (n1[i] !=0 && n2[i] == 0) {
            std::cout << '>' << std::endl;
            continue;
        }

        if (zero1[i] == zero2[i]) {
            if (n1[i] > n2[i]) {
                std::cout << '>' << std::endl;
                continue;
            } else if (n1[i] < n2[i]) {
                std::cout << '<' << std::endl;
                continue;
            } else {
                std::cout << '=' << std::endl;
                continue;
            }
        }

        if (zero1[i] > zero2[i]) {
            std::cout << '>' << std::endl;
            continue;
        }
        else if (zero1[i] < zero2[i]) {
            std::cout << '<' << std::endl;
        }
    }

}