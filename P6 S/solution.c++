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

// other solution for other peaople

// #include <vector>
// #include <numeric>
// #include <functional>

// int grow(const std::vector<int>& nums) {
//   return std::accumulate(nums.cbegin(), nums.cend(), 1, std::multiplies<int>());
// }

// ----------------------------------------

//#include <numeric>
// int grow(std::vector<int> v) {
//   return std::accumulate(v.begin(), v.end(), 1, std::multiplies<>());
// }

// ----------------------------------------

// #include <vector>
// int grow(std::vector<int> nums) {
//   int result = 1;
//   for(auto x: nums)  result = result * x;
//   return result;
// }