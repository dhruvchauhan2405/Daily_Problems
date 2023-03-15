// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int start=0;
        int second=1;
int count=0;

        while(start<nums.size()&&second<nums.size()){
                cout<<start<<endl;
                cout<<second<<endl;
            if(nums[second]-nums[start]==k){
                count++;
                start++;
                second++;
                
                while(second<nums.size() && nums[second]==nums[second-1] ){
                    second++;
                }
            }
            if(nums[second]-nums[start]>k ){
                start++;
                if(second-start==0){
                    second++;
                }
            }
            if(nums[second]-nums[start]<k  ){
                second++;
            }
        }

        return count;
    }
int main() {
    vector<int> arr{1,1};
    int k=0;
    int p=findPairs(arr,k);
    cout<<p<<endl;
    // Write C++ code here
    std::cout << "Hello world!";

    return 0;
}
