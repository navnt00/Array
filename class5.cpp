#include<iostream>
using namespace std;
int isSorted(int a[] , int n){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j ++){
            if(a[j] < a[i])
                return false;
        }
    }
    return true;
}
int main(){
    int a[] = {12, 13, 20 , 14, 15, 16, },n = 6;
    bool ans = isSorted(a, n);
    if (ans)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}