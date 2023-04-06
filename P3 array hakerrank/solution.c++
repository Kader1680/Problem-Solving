#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int size;
    cin>>size;
    int Array[size];
    int i;
    for(int i = 0; i <size; i++){
        cin>>Array[i];
    }
    for(int i = (size - 1) ; i >= 0; i--){
        cout<<Array[i]<<" ";
    }
    return 0;
}
