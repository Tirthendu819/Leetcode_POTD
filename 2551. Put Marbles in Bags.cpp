class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
       int n=weights.size();

       int m=n-1;
       vector<int>ps(m,0);
       for(int i=0;i<n-1;i++)
       {
        ps[i]=weights[i]+weights[i+1];
       }  

       sort(begin(ps),end(ps));

       long long maxsum=0;
       long long minsum=0;

       for(int i=0;i<k-1;i++)
       {
        minsum+=ps[i];
        maxsum+=ps[m-1-i];
       }

       return maxsum-minsum;
    }
};
