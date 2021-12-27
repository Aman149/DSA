class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
    vector<int> res;
    int maxele = a[n-1];
    
    res.push_back(a[n-1]);
    
    for(int i = n-2; i >= 0; i--){
        if(a[i] >= maxele) {
            res.push_back(a[i]);
            maxele = a[i];
        }
    }
    
    reverse(res.begin(), res.end());
    
    return res;
  }
};