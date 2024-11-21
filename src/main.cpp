#include "data_acquisition.hpp"
#include "strategy.hpp"
#include "backtesting.hpp"
#include <iostream>

int main() {
    DataAcquisition da;
    auto data = da.loadHistoricalData("data/historical_data.csv");

    if (data.empty()) {
        std::cerr << "No data loaded" << std::endl;
        return -1;
    }

    SimpleMovingAverage sma(5);
    Backtesting bt;
    bt.runBacktest(sma, data);

    return 0;
}
