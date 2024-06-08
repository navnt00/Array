// finding the greates element from the array
// step 1 -> assign a array;
// step 2 -> let max element at 0 index;
// step3 -> traverse a array through for loop;
// search max and cout


#include<iostream>
using namespace std;
int main(){
    int a[5] = {10, 50, 30, 20, 6};
    int mx = a[0];
    for (int i = 0; i < 5;i++){
        if(a[i] > mx){
            mx = a[i];
        }
    }
    cout << "THe Greratest Element is ->" << mx << endl;
    return 0;
}