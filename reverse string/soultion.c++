// my own solution
// Complete the solution so that it reverses the string passed into it.
// 'world'  =>  'dlrow'
// 'word'   =>  'drow'
#include <iostream>
using namespace std;
#include <algorithm>
string reverseString (string str )
{
   reverse(str.begin(), str.end());
   return str;
}
int main() {
    cout<<reverseString("world")<<endl;
    cout<<reverseString("programming")<<endl;
    cout<<reverseString("algorithm")<<endl;
}