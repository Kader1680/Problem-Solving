// find the sum of llutiple value in vector 
// input vector = {1, 5, 6, 8}  ==> 240
// my own solution 

#include <iostream>
using namespace std;
#include <vector>
int grow(vector<int> nums) {
    int sum = 1;
    int vsize = nums.size();
    for(int i =0; i<vsize; i++){
      
        sum = sum * nums[i];
    } 
    return sum;
}
int main(){
    cout<<grow({1, 5, 6, 8});
}