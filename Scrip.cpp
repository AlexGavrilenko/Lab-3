#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int n = 100000;
    vector<int> divisors;
    
    for (int i = 1; i <= n; i++) {
        divisors.clear();
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisors.push_back(j);
            }
        }
    }
    
    return 0;
}
