 long long minimumTime(vector<int>& time, int totalTrips) {
        
        long long left=0,right=totalTrips*(long long)time[0],ans=right;
        while(left<right){
            long long mid=(left+right)/2;
            long long count=0;
            for(int i=0;i<time.size();++i){
                count+=mid/time[i]; 
            }
            if(count>=totalTrips){
                ans=min(ans,mid); 
                right=mid;

            }
            else{
                left=mid+1;
            }  
        }
        return ans;
    }