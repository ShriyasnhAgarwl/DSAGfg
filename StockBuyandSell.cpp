class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
          vector<vector<int>> res;
        
        for(int i = 0; i < n-1; i++){
            if(A[i] < A[i+1])
                res.push_back({i, i+1});
        }
          return res;
    }
};
