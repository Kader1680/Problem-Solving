#include <vector>
#include <iostream>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // No solution found
}
int main()
{
    vector <int> v = {11, 1, 4};
    vector <int> a = twoSum(v, 5);
    for(int k : a){
        cout<<k<<" ";
    }

}
