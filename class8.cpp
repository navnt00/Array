#include<iostream>
using namespace std;
void insertAtPosition(int *arr , int n , int value , int pos){
    for (int i = n; i >= pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
}
int main(){
    int n=8;
    int pos = 5;
    int arr[9]={10,9,14,8,20,48,16,9};
    int value = 24;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertAtPosition(arr, n, value, pos);
    cout << "after performing insertion ->" << endl;
    for (int i = 0; i <= n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}