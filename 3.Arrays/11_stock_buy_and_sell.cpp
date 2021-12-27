class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here

        int profit=0;

        for(int i=1; i<A.size(); i++){

            if(A[i] > A[i-1]) 
                profit = A[i] - A[i-1];
        }

        return profit;
    }
};