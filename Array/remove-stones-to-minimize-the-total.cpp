
                 //Heap question
class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
       priority_queue<int> pq(piles.begin(), piles.end());
       int ans = accumulate(piles.begin(),piles.end(),0); //ans=18

       while(k--){
           int a = pq.top(); //9, 5
           pq.pop();
           
           pq.push(a-a/2);  //9-4=5, 5-2=3
           ans-=a/2; //18-4=14, 14-2=12
       } 
       return ans; //12
    }
};