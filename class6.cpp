#include<iostream>
using namespace std;
int main(){
    int a[6] = {2, 4, 6, 8, 1, 9};
    int value = 10;
    int count = 0;
    for (int i = 0; i < 6; i++){
        for (int j = i + 1; j < 6 ; j++){
            if(a[i] + a[j] == value ){
                count = count + 1;
            }
        }
    }

    cout << "The sum Is ->" << count << endl;
    return 0;
}