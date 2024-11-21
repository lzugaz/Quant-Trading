#include "backtesting.hpp"

void Backtesting::runBacktest(Strategy &strategy, const std::vector<MarketData> &data) {
    strategy.execute(data);
}
