void prevGrater(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);

    for (int i = 0; i <n ; i++)
    {

        while (s.empty() == false && s.top() <= arr[i])
            s.pop();
        int prevG = s.empty() ? -1 : s.top();
        cout << prevG;
        s.push(arr[i]);
    }
}