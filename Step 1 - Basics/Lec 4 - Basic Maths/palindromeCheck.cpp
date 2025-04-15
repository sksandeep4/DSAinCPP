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
bool isPalindrome(int n){
    if(reverseNumber(n) == n){
        return true;
    }
    else return false;
}
int main(){
    int num;
    cout << "Enter a number to reverse: ";
    cin >> num;
    cout << "The reversed number is: " << reverseNumber(num) << endl; 
    if(isPalindrome(num)){
        cout << num << " is a Palindrome";
    }
    else{
        cout << num << " is not a Palindrome";
    }
    return 0;
}
