#include<iostream>
using namespace std;
int setMax(int A[] , int N)
{
    int mx = A[0];
    for (int i = 0; i < N; i++){
        if(A[i] > mx){
            mx = A[i];
        }
    }
    return mx;
}
int setMin(int A[] , int N){
    int min = A[0];
    for (int i = 0; i < N; i++){
        if(A[i] < min){
            min = A[i];
        }
    }
    return min;
}
int main(){
    int A[] = {5, 6, 2, 4, 9};
    int N = 5;
    cout << "THe Max Element Is -> " << setMax(A , N) << endl;
    cout << "The min Element Is ->" << setMin(A , N) << endl;
    return 0;
}