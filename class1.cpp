#include<iostream>
using namespace std;
int main(){
    int a[5] = {5, 4, 3, 5, 6};
    int sum = 0;
    for (int i = 0; i < 5; i++){
        sum = sum + a[i];
    }
    cout << "The Sum Is -> " << sum << endl;
    return 0;
}

// finding the sum of the array