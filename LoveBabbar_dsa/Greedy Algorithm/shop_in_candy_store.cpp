// https://practice.geeksforgeeks.org/problems/shop-in-candy-store1145/1
/*
-> Shop in Candy Store - In a candy store, there are N different types of candies available and the prices of all the N different types of candies are provided to you.
You are now provided with an attractive offer.
For every candy you buy from the store and get at most K other candies ( all are different types ) for free.
Now you have to answer two questions. Firstly, you have to find what is the minimum amount of money you have to spend to buy all the N different candies. Secondly, you have to find what is the maximum amount of money you have to spend to buy all the N different candies.
In both the cases you must utilize the offer i.e. you buy one candy and get K other candies for free.


vector<int> candyStore(int candies[], int N, int K){

    sort(candies, candies+N);

    int mini =0;
    int buy =0;
    int free = N-1;

    while(buy <= free){
        mini = mini + candies[buy];
        buy++;
        free = free -K;
    }

    int maxi =0;
    buy = N-1;
    free =0;

    while(free<= buy){
        maxi = maxi + candies[buy];
        buy--;
        free= free+K;
    }
    vector<int> ans;
    ans.push_back(mini);
    ans.push_back(maxi);
    return ans;
}





*/