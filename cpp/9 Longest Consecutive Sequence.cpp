class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int>s;
        
        //filling the set
        
        for(int i= 0 ; i < nums.size() ; i++){
            
           s.insert(nums[i]);
        }
        
        int ans = 0;
        
        for(int i = 0 ; i < nums.size() ; i++){
            
            //check if it is the start of the seq
            
            if( s.find(nums[i]-1) == s.end()){
                int temp = 1;
                
                // finding the seq
                int next = nums[i];
                
                while( s.find(next+1) != s.end()){
                    temp++;
                    next++;
                }
                
                if(ans < temp) ans = temp;
            }
        }
        
        
        return ans;
    }
};
