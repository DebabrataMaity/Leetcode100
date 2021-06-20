class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        int n=row.size();
        map<int,int>mp;
        int cnt=0;
        for(int i=0;i<n;i++) mp[row[i]]=i;
        for(int i=0;i<n;i+=2){
            while(abs(row[i]-row[i+1])!=1){
                int now=row[i];
                int rightchoice;
                if(now%2==1){
                    rightchoice=now-1;
                }
                else{
                    rightchoice=now+1;
                }
                int to;
                int at=mp[rightchoice];
                if(at%2==1){
                    to=at-1;
                }
                else{
                    to=at+1;
                }
                cnt++;
                mp[row[to]]=i;
                mp[row[i]]=to;
                swap(row[i],row[to]);
            }
        }
        return cnt;
    }
};
