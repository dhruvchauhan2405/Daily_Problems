class Solution {
public:
    double average(vector<int>& salary) {
        double max=salary[0],min=salary[0],sum=0;
        for(int i=0;i<salary.size();i++){
            if(salary[i]>max){
                max=salary[i];
            }
            if(salary[i]<min){
                min = salary[i];
            }
            sum=sum+salary[i];
        }
        // cout<<min<<" "<<max<<" "<<sum;
        double avg = (sum-min-max)/(salary.size()-2);
        return avg;
    }
};