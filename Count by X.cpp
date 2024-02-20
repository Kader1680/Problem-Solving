// code question link  => https://www.codewars.com/kata/5513795bd3fafb56c200049e/solutions/cpp


// countBy(1,10)  should return  {1,2,3,4,5,6,7,8,9,10}
// countBy(2,5)  should return {2,4,6,8,10}

#include <iostream>
using namespace std;
#include <vector>

vector <int> countBy(int s, int m){
    vector <int> v;
    for(int i=1; i<m + 1; i++){
         int numbres =  i * s;
        
         v.push_back(numbres);
    }
    return v;
}
int main() {
    vector <int> s = countBy(2, 5);
    for (int i=0; i<s.size(); i++)
    cout << s[i]<<" ";
    return 0;
}