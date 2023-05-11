#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int n = 1000;
    double result = 1.0;
    
    for (int i = 1; i <= n; i++) {
        double factorial = 1.0;
        for (int j = 1; j <= i; j++) {
            factorial *= j * j * j;
        }
        result *= sqrt(factorial);
    }
    cout << "asfafasf" ;
    return 0;
}
