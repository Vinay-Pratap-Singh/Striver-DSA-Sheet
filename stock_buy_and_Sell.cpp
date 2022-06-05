    int maxProfit(vector<int>& prices) {
        int minimum = INT_MAX;
        int index = 0;
        int profit = 0;
        for(int i=0; i<prices.size(); i++){
            if(minimum > prices[i]){
                minimum = prices[i];
                index = i;
            }
            else{
                if(prices[i] - prices[index] > profit){
                    profit = prices[i] - prices[index] ;
                }
            }
        }
        
        return profit;
    }