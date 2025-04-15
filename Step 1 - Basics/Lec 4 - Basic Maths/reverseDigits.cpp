#include<bits/stdc++.h>
using namespace std;
int reverseNumber(int n){
    int revNum = 0;
    int ld;
    while(n > 0){
        ld = n % 10;
        revNum = (revNum * 10) + ld;
        n /= 10;
    }
    return revNum;
}
int main(){
    int num;
    cout << "Enter a number to reverse: ";
    cin >> num;
    cout << "The reversed number is: " << reverseNumber(num); 
    return 0;
}
