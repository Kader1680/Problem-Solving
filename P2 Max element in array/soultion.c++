// find the max value in array of 5 elements ==> {1, 55, 63, 2, 8}
#include <iostream>
using namespace std;
int main() {
    int size = 5;
    int array[size] = {1, 55, 63, 2, 8};
    int max = array[0];
    for(int i=0; i < size; i++){
        if(max < array[i]){
            max = array[i];
        }
    }
    cout<<max;
    return 0;
}