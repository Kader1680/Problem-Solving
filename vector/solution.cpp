// Example [1,-4,7,12] => 1 + 7 + 12 = 20
#include <iostream>
#include <vector>
using namespace std;
// first solution 

#include <vector>

int positive_sum (const std::vector<int> arr){
  int sum = 0;
    for(int element : arr){
        if(element < 0){
                sum +=  0;
        }else{
                sum +=  element;
            }
    }
    return sum;
}

// second solution
int sum(vector <int> numbers){
    int sum = 0;
    for(int i=0; i<numbers.size(); i++){
        if(numbers[i] < 0){
                sum +=  0;
        }else{
                sum +=  numbers[i];
            }
    }
    numbers.push_back(sum);
    return sum;
}
int main() {
    vector<int> numbers = {1, 7, 12, -4};
    cout<<sum(numbers);
    

    return 0;
}


