//121. Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices){

        int BuyPrice=0,Profit=0;
        //find Max
        for(int i=0;i<prices.size();i++)
            if(prices[i]>BuyPrice)
                BuyPrice=prices[i];


        for(int i=0;i<prices.size();i++)
            if(prices[i]<BuyPrice)
                BuyPrice=prices[i];
            else if (prices[i]-BuyPrice>Profit)
                Profit=prices[i]-BuyPrice;

        return Profit;
    }
};

