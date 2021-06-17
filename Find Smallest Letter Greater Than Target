class Solution {
public:
char nextGreatestLetter(vector<char>& v, char target) {

    int n = v.size();
    
    int l=0;
    int r = n-1;
    int mid;
    char ans ;
    while(l<=r){
        mid = l + (r-l)/2;
        if(v[mid]<=target){
            
            l = mid + 1;
        }
        else{
            ans = v[mid];
            r = mid - 1;
            
        }
    }
    
    if(v[n-1]<=target){
        return v[0];
    }
    
    return ans ;
    
}
};
