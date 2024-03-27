#include <iostream>
using namespace std;
string DNAStrand(const string dna){
    string result = "3";
    for(int i =0; i<dna.size(); i++){
        const char* s = "T";
        if(dna[i] =  "T"){
            // string rep = "A";
            // dna[i] = rep;
            result = "yes";
        }
        // result += dna[i];
    }
    return result;
}
int main() {
    // Write C++ code here
    cout<<DNAStrand("abdelkader");

    return 0;
}