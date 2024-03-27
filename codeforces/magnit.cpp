// link ==> https://codeforces.com/contest/344
#include <iostream>
using namespace std;
int main() {
    string mag;
    int number, count = 1;
 
    cin>>number;
    for(int i=0; i<number; i++){
        string value;
        cin>>value;
        if(i == 0){
            mag = value;
            continue;
        }
        if(mag[1] == value[0]){
            count++;
        }
        mag = value;
    }
    cout<<count;
    return 0;
}