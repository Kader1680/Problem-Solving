// write system that take number as input
// in each input will ask you again to add more
// value and printing as vector type int
// input ==> 5 7 4 6 7 8
// output ==> {5, 7, 4, 6, 7, 8}

#include <iostream>

#include <vector>
using namespace std;


void reading(vector <int> &vNumber){
        char ReadMore = 'Y';
        int number;
        do
        {
            cout<<"enter your number";
            cin>>number;
            vNumber.push_back(number);
            cout << "\nDo you want to read more numbers? Y/N ?";         
            cin >> ReadMore;
        } while (ReadMore == 'Y' || ReadMore =='y');
        
}
void printing(vector <int> &vNumber){
    
    for (int i : vNumber)
    {
        cout<<i<<" ";
    }
    
}

int main()
{
  
    vector <int> vNumber;
    reading(vNumber);
    printing(vNumber);
    
        

    
    return 0;
}
