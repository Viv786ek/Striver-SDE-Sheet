int maximumProfit(vector<int> &prices){
    // Write your code here.
        int m=INT_MAX,pro=0;
        for(int i=0;i<prices.size();i++){
            m = min (m,prices[i]);
            pro = max(pro,prices[i]-m);
        }
        return pro;
}
