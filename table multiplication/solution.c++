#include <iostream>
using namespace std;
#include <string>
void header(){
        for(int i = 1; i <= 10; i++){
        cout<<i<<"     ";
        
    }
    cout<<endl;
    cout<<"_________________________________________________________"<<endl;
    }
string columnSeparator(int i){
    return i >= 10 ? " |" : "  |";
}
void multibpication(){
    header();
    for(int i=1; i<= 10; i++){
        cout<<" "<<i<<columnSeparator(i)<<" \t";
        for(int j = 1; j<=10; j++){
            cout<< i * j<<" \t";
        }
        cout<<endl;
    }
}
int main() {
    
multibpication();
    
    return 0;
}