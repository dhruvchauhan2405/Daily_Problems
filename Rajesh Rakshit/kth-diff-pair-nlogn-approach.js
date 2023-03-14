class Solution {
public:

bool binarySearch(int s,int e,int target,vector<int> &arr){
for(int i=0;i<arr.size();i++){
    cout<<arr[i];
}
cout<<endl;
int mid=s+(e-s)/2;
cout<<s<<endl;
cout<<e<<endl;
while(s<=e){
    cout<<mid<<endl;
    cout<<arr[mid]<<endl;
    if(arr[mid]==target){
        // cout<<arr[mid]<<endl;
        cout<<target<<endl;
        return true;
    }
    if(arr[mid]<target){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
  mid=s+(e-s)/2;
}

   return false;
}
    int findPairs(vector<int>& nums, int k) {
     sort(nums.begin(),nums.end());
     int count=0;
     int i=0;
    if(binarySearch(i+1,nums.size()-1,nums[i]+k,nums))
                 {   count++;}
                //  cout<<count<<endl;
    for(int i=1;i<nums.size()-1;i++){
            
              if(nums[i]==nums[i-1]){
                  continue;
              }
            else{
                cout<<endl;
                cout<<i<<endl;
                cout<<nums[i]<<endl;
            //    ;
            //     cout<<count<<endl;
               if(binarySearch(i+1  ,nums.size()-1,nums[i]+k,nums))
                //  cout<<nums[i]<<endl;
                    count++;
                    // cout<<count<<endl;
            }
             cout<<endl;  
           }   
    
    return count;
    }
};
