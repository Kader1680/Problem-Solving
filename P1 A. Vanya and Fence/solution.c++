// A. Vanya and Fence
// https://codeforces.com/contest/677/problem/A
// -------------------------------------------------------

#include <iostream>
using namespace std;
int main() {
    int n, wall, height, res;
    cout<<"enter number of friend ";
    cin>>n;
    cout<<"enter number of wall ";
    cin>>wall;
    while(n--){
        cout<<"enter height of freind ";
        cin>>height;
        res++;
        if(height > wall){
            res++;
        }
    }
    cout<<res;
    return 0;
}