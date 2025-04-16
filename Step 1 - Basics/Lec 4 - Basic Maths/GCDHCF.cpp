#include<bits/stdc++.h>
using namespace std;
//Brute Force - Get the common divisors of the two numbers and get the maximum one
int bruteForceGCD(int n1, int n2){
    int gcd = 1;
    for(int i = 1; i <= min(n1, n2); i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    return gcd;
}

// Better approach would be iterating from Min(n1, n2) to 1, so it will take less number of iterations in the loop

// Optimal Approach - Euclidean Algorithm
// The GCD of two numbers remains the same even if the smaller number is subtracted from the larger number
// Repeatedly subtract the smaller number from the larger number until one of them becomes 0
// Once one becomes 0, the other one is the GCD

int optimalGCD(int n1, int n2){
    while(n1 > 0 && n2 > 0){
        if(n1 > n2) n1 = n1 % n2;
        else n2 = n2 % n1;
    }
    if(n1 == 0) return n2;
    else return n1;
}

int main(){
    cout << "GCD of 1 and 100 is " << optimalGCD(1,100);
    return 0;
}
