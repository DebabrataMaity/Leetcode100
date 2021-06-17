class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)
            return false;
        int i=0;
        for(i=0;i<arr.size();)
        {
            if(arr[i]<arr[i+1])
            {
                i++;
            }
            else
                break;
        }
        if(i==0 || i==arr.size()-1)
            return false;
        int j;
        for( j=i;j<arr.size()-1;)
        {
            if(arr[j]>arr[j+1])
                j++;
            else
                break;
            cout<<j<<endl;
        }
        if(j==arr.size()-1)
            return true;
        else
            return false;
    }
};
