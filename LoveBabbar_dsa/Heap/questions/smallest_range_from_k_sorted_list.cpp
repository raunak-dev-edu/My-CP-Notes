// https://www.codingninjas.com/codestudio/problems/smallest-range-from-k-sorted-list_1069356?leftPanelTab=0
/*
->Smallest Ranage from K sorted list
TODO- Giving error

class node{
    public:
    int data;
    int row;
    int col;

    node(int d, int r, int c){
        data =d;
        row = r;
        col = c;

    }
};
class compare{
    public: 
    bool operator() (node* a, node* b){
        return a->data > b->data;
    }
};
int kSorted(vector<vector<int>> &a, int k, int n) {
    int mini= INT_MAX, maxi = INT_MIN;
    priority_queue<node*, vector<node*>, compare > minHeap;
    
    // step1: create a min heap for starting element of each list and tracking mini./maxi valur
    for(int i =0; i< k; i++){
        int element = a[i][0];
        mini = min(mini, element);
        maxi = max(maxi,element);
        minHeap.push(new node(element,i,0));
    }

    int start = mini, end = maxi;

    // process ranges 
    while(!minHeap.empty()){

        // mini fetch 
        node* temp = minHeap.top();
        minHeap.pop();

        mini = temp->data;

        // range or answer updation
        if(maxi - mini < end -start){
            start = mini;
            end = maxi;
        }

        // next element exits
        if(temp->col+1 >n){
            maxi = max(maxi, a[temp->row][temp->col+1]);
            minHeap.push(new node(a[temp->row][temp->col+1],temp->row,temp->col+1));
        }
        else{
        // next element does not exits
            break;
        }
    }
    return(end-start +1);
}



*/