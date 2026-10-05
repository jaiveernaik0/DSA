// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int count =0;
//     if (n==0){
//         cout<< "1";
//     }
//     else {while ( n >0){
//         n = n/10;
//         count +=1 ;
//     }
// }
//     cout<< count;

//     return 0;
// }

// 


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    if (n == 0) {
        count = 1;
    }
    else {
        while (n > 0) {
            n = n / 10;
            count++;
        }
    }

    cout << count;

    return 0;
}