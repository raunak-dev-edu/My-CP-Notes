// https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1
/*
-> Fractional Knapsack - Given weights and values of N items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
Note: Unlike 0/1 knapsack, you are allowed to break the item. 

static bool cmp(pair<double,Item>a, pair<double, Item> b){
    return a.first > b.first;
}
double fractionalKnapsack(int W, Item arr[], int n){
    vector<pair<double,Item>> v;

    for(int i =0; i<n; i++){
        double perUnitValue = (1.0*arr[i].value)/arr[i].weight;
        pair<double,Item> p = make_pair(perUnitValue, arr[i]);
        v.push_back(p);
    }
    sort(v.begin(), v.end(), cmp);

    double totalValue =0;
    for(int i =0; i <n; i++){
        if(v[i].second.weight > W){
            //toh main sirf fraction le sakta hu
            totalValue += W*v[i].first;
            W =0;
        }
        else{
            totalValue += v[i].second.value;
            W = W -v[i].second.weight;
        }
    }
    return totalValue;
}



*/