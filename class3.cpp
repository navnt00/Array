//count the number of even elements in array

#include<iostream>
using namespace std;
int main(){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int count = 0;
    for (int i = 0; i < 10; i++){
        if(a[i] %2 == 0){
            count = count + 1;
        }
    }
    cout << "The even NUmber is ->" << count << endl;
    return 0;
}