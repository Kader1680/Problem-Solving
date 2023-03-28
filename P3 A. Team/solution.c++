// my soltion 
#include <iostream>
using namespace std;
int main() {
    int q, a, b, c, result;
    cin>>q;
    while(q--){
        cin>>a>>b>>c;
        int z = a + b + c;
        if(z >= 2){
            result++;
        }   
    }
    cout<<result;
    
    return 0;
}

// other solution 