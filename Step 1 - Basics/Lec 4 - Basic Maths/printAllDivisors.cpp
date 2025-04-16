#include<bits/stdc++.h>
using namespace std;
//Brute Force - Run a loop from 1 to N and check if each value of i is a divisor, if so store in array
vector<int> bruteForceAllDivisors(int n1){
    vector<int> divisors;
    for(int i = 1; i <= n1; i++){
        if(n1 % i == 0){
            divisors.push_back(i);
        }
    }
    return divisors;
}

// Better approach would be iterating from Min(n1, n2) to 1, so it will take less number of iterations in the loop

// Optimal Approach
// We have to traverse loop only from 1 to sqrt(n1)
// if i is divisor, add to array
// if i != n/i, add n/i to array too

vector<int> optimalAllDivisors(int n1){
    vector<int> divisors;
    for(int i = 1; i <= sqrt(n1); i++){
        if(n1 % i == 0){
            divisors.push_back(i);
            if(i != n1/i){
                divisors.push_back(n1/i);
            }
        }
    }
    return divisors;
}

int main(){
    vector<int> divisors = optimalAllDivisors(50);
    cout << "Divisors of 50 are ";
    for(int divisor : divisors){
        cout << divisor << " ";
    }
    return 0;
}
