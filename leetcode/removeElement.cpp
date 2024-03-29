// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

vector<int> print(vector<int> result, int value){

    return result;
}


int main() {
    vector <int> v = {45, 6,7, 8};
    vector<int> result = print(v, 6);
    string e;
    for(auto i : result){
        if(i == 45){
            e = "yes";
        }else{
            e =  "no";
        }
      
    }
    
    cout<<e;
    return 0;

}