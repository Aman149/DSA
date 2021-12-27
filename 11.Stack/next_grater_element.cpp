void nextGrater(int arr[], int n) {
    stack<int> s;
    s.push(arr[n-1]);

    for(int i=n-2; i>=0; i--) {

        while(s.empty() == false && s.top() <= arr[i]) 
            s.pop();
        int nextG = s.empty() ? -1 : s.top();
        cout<<nextG;
        s.push(arr[i]);
    }
}