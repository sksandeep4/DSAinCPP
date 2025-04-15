#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int cnt = (int)(log10(n)+1);
    return cnt;
}
bool isArmstrongNumber(int n){
    int k = countDigits(n);
    int sum = 0;
    int originalNum = n;
    int ld;
    while(n > 0){
        ld = n % 10;
        sum = sum + pow(ld, k);
        n /= 10;
    }
    if(sum == originalNum){
        return true;
    }
    else return false;
}
int main(){
    int num;
    cout << "Enter a number to check: ";
    cin >> num;
    if(isArmstrongNumber(num)){
        cout << num << " is an Armstrong Number";
    }
    else{
        cout << num << " is not an Armstrong Number";
    }
    return 0;
}
