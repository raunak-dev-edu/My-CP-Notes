// https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1
/*
->minmum cost of ropes

long long minCost(long long int arr[], long long n){
    //create a min heap
    priority_queue<long long, vector<long long>, greater<long long>> pq;

    for(int i =0; i<n; i++){
        pq.push(arr[i]);
    }

    long long cost =0;

    while(pq.size() >1){
        long long a = pq.top();
        pq.pop();

        long long b =pq.top();
        pq.pop();

        long long sum = a+b;
        cost +=sum;

        pq.push(sum);
    }
    return cost;
}

TC- O(nlogn)
SC - O(n)

*/