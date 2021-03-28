//https://www.interviewcake.com/question/cpp/stock-price?course=fc1&section=greedy

int getMaxProfit(const vector<int>& stockPrices)
{
    if (stockPrices.size() < 2) {
        throw invalid_argument("Getting a profit requires at least 2 prices");
    }

    // we'll greedily update minPrice and maxProfit, so we initialize
    // them to the first price and the first possible profit
    int minPrice = stockPrices[0];
    int maxProfit = stockPrices[1] - stockPrices[0];

    // start at the second (index 1) time
    // we can't sell at the first time, since we must buy first,
    // and we can't buy and sell at the same time!
    // if we started at index 0, we'd try to buy *and* sell at time 0.
    // this would give a profit of 0, which is a problem if our
    // maxProfit is supposed to be *negative*--we'd return 0.
    for (size_t i = 1; i < stockPrices.size(); ++i) {
        int currentPrice = stockPrices[i];

        // see what our profit would be if we bought at the
        // min price and sold at the current price
        int potentialProfit = currentPrice - minPrice;

        // update maxProfit if we can do better
        maxProfit = max(maxProfit, potentialProfit);

        // update minPrice so it's always
        // the lowest price we've seen so far
        minPrice = min(minPrice, currentPrice);
    }

    return maxProfit;
}
