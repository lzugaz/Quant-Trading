#ifndef BACKTESTING_HPP
#define BACKTESTING_HPP

#include "strategy.hpp"
#include "data_acquisition.hpp"

class Backtesting {
public:
    void runBacktest(Strategy &strategy, const std::vector<MarketData> &data);
};

#endif // BACKTESTING_HPP
