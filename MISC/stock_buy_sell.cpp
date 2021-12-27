#include <bits/stdc++.h>
using namespace std;
int maxProfit(int a[], int n) {
    int profit = 0;

    for(int i=1; i<n; i++) {

        if(a[i] > a[i-1])
            profit = a[i] - a[i-1];
    }
    return profit;
}

// Driver code
int main()
{
    int price[] = {100, 180, 260, 310,
                   40, 535, 695};
    int n = sizeof(price) / sizeof(price[0]);

    cout << maxProfit(price, n);

    return 0;
}
