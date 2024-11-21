#ifndef STRATEGY_HPP
#define STRATEGY_HPP

#include "data_acquisition.hpp"
#include <vector>

class Strategy {
public:
    virtual void execute(const std::vector<MarketData> &data) = 0;
};

class SimpleMovingAverage : public Strategy {
private:
    int window_size;
public:
    SimpleMovingAverage(int window) : window_size(window) {}
    void execute(const std::vector<MarketData> &data) override;
};

#endif // STRATEGY_HPP
