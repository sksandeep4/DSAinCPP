#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n){
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n){
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4(int n){
    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4
    // 5 5 5 5 5
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern5(int n){
    // * * * * *
    // * * * *
    // * * *
    // * * 
    // *
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n){
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2 
    // 1
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout << (n-j+1) << " ";
        }
        cout << endl;
    }
}
void pattern7(int n){
    //      *     
    //     ***    
    //    *****   
    //   *******  
    //  ********* 

    for(int i=1;i<=n;i++){
        // space
        for(int j=0;j<(n-i);j++){
            cout << " ";
        }
        // star
        for(int j=0;j<((2*i)-1);j++){
            cout << "*";
        }
        // space
        for(int j=0;j<(n-i);j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8(int n){
//      *********
//       *******
//        ***** 
//         ***    
//          *

    for(int i=1;i<=n;i++){
        // space
        for(int j=1;j<i;j++){
            cout << " ";
        }
        // star
        for(int j=0;j<((2*n)-(2*i)+1);j++){
            cout << "*";
        }
        // space
        for(int j=1;j<i;j++){
            cout << " ";
        }
        cout << endl;
    }
}
void pattern9(int n){
//          *     
//         ***    
//        *****   
//       *******  
//      ********* 
//      *********
//       *******
//        ***** 
//         ***    
//          *

    pattern7(n);
    pattern8(n);
}
void pattern10(int n){
//          *     
//          **    
//          ***   
//          ****  
//          ***** 
//          *****
//          ****
//          *** 
//          **    
//          *
    
    for(int i=1;i<=(2*n-1);i++){
        int stars = i;
        if(i > n) stars = 2*n - i;
        for(int j=1;j<=stars;j++){
            cout << "* ";       
        }
        cout << endl;
    }
}
void pattern11(int n){
    // 1
    // 01
    // 101
    // 0101
    // 10101
    int x;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
                x=1;
            }else{
                x=0;
            }
        for(int j=1;j<=i;j++){
            cout << x;       
            x=1-x;
        }
        cout << endl;
    }
}
void pattern12(int n){
   
//   1        1
//   12      21
//   123    321
//   1234  4321
//   1234554321

    for(int i=1; i <=n; i++){
    // Numbers
    for(int j=1;j<=i;j++){
        cout << j;
    }

    // Spaces
    for(int j=1; j <= (n-i)*2; j++){
        cout << " ";
    }
    // Numbers
        for(int j=i;j>=1;j--){
        cout << j;
    }
    cout << endl;

}
}
void pattern13(int n){

    // 1 
    // 2 3 
    // 4 5 6 
    // 7 8 9 10 
    // 11 12 13 14 15 

    int x = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << x << " ";
            x+=1;

        }
        cout<< endl;

    }
}
void pattern14(int n){

    // A 
    // A B 
    // A B C 
    // A B C D 
    // A B C D E 

    char x = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << x << " ";
            x+=1;
        }
        x = 'A';
        cout<< endl;

    }
}
void pattern15(int n){

    // A B C D E 
    // A B C D
    // A B C 
    // A B  
    // A

    char x = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i+1);j++){
            cout << x << " ";
            x+=1;
        }
        x = 'A';
        cout<< endl;

    }
}
void pattern16(int n){

    // A 
    // B B 
    // C C C 
    // D D D D 
    // E E E E E 

    char x = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << x << " ";
            
        }
        x+=1;
        cout<< endl;

    }
}
int main(){
    int n;
    cin >> n;
    pattern16(n);
}
