#include <iostream>
using namespace std;
//variables
int list[10];
int summ, minn, addr, temp;

int main(){
    summ = 0;
    // Insert
    for(int i = 0; i < 10; i++){
        cin >> list[i];
    }
    minn = list[0];
    //Output
    for(int i = 0; i < 10; i++){
        cout << list[i] << " ";
        summ += list[i];
        if(minn > list[i]) minn = list[i];
    }
    cout << endl;
    cout << summ << endl;
    cout << minn << endl;
    //Sort
    for(int i = 0; i < 10; i++){
        minn = list[i];
        temp = minn;
        for(int j = i; j < 10; j++){
            if(minn > list[j]){
                minn = list[j];
                addr = j;
            }
        }
        if (temp == minn) addr = i;
        temp = list[i];
        list[i] = minn;
        list[addr] = temp;
    }
    for(int i = 0; i < 10; i++){
        cout << list[i] << " ";
    }
}