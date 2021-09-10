// https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1#

vector<int> JobScheduling(Job arr[], int n) 
    { 
        std::sort(arr,arr+n,[&](Job &max, Job &min){
           return max.profit>min.profit; 
        });
        int total_profit=0;
        int time_max=0;
        for(int i=0;i<n;i++){
            time_max=std::max(time_max,arr[i].dead);
        }
        int count=0;
        vector<int> timeslots(time_max + 1, false);
        for(int i=0 ; i<n;i++){
            Job currJob=arr[i];
            for(int t=currJob.dead;t>0;t--){
                if(timeslots[t]==false){
                    timeslots[t]=true;
                    count++;
                    total_profit+=arr[i].profit;
                    break;
                }
            }
        }
        vector<int > result;
        result.push_back(count);
        result.push_back(total_profit);
        return result;
    }