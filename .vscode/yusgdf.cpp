class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> ans ;
        for( int i = 0 ; i <= n-1 ; i++ ){
            int j = i+1 ;
            while( j <= n-1 ){
                if ( nums[i] == nums[j] ){
                    j++ ;
                }
                else{
                    ans.push_back(nums[j]) ;
                    break ;
                }
            }
           
        }
        int k = ans.size() ;
         return k ;
        
        
    }
};