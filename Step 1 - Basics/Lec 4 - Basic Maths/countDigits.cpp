                                
#include <bits/stdc++.h>
using namespace std;
// Calculate the count of digits in 'n'
// Optimized Solution
// using logarithmic operation log10(n) + 1.
int countDigits(int n){
    int cnt = (int)(log10(n)+1);
    return cnt;
}

int main() {
    int N = 329823;
    cout << "N: "<< N << endl;
    int digits = countDigits(N);
    cout << "Number of Digits in N: "<< digits << endl;
    return 0;
}
                                
                            