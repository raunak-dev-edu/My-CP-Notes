// https://www.codingninjas.com/codestudio/problems/k-th-largest-sum-contiguous-subarray_920398?leftPanelTab=0
/*
->kth largest sum subarray

-> approach 1 - TC - O(n^2logn) , SC -O(n^2)

int getKthLargest(vector<int> & arr, int k){
    vector<int> sumStore;
    int n = arr.size();

    for(int i =0; i<n; i++){
        int sum =0;

        for(int j =i; j<n; j++){
            sum+=arr[j];
            sumStore.push_back(sum);
        }
    }

    sort(sumStore.begin(), sumStore.end());

    return sumStore[sumStore.size()- k];
}

->approach 2 - min heap

int getKthLargest(vector<int> & arr, int k){

    priority_queue<int, vector<int>, greater<int>> mini;

    int n= arr.size();
    for(int i =0;i<n; i++){
        int sum =0;
        for(int j =i; j<n; j++){
            sum+= arr[j];
            if(mini.size() < k){
                mini.push(sum);
            }
            else{
                if(sum>mini.top()){
                    mini.top();
                    mini.push(sum);
                }
            }
        }
    }
    return mini.top();
}

TODO - approach2 is giving error

*/