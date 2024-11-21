#include "strategy.hpp"
#include <iostream>

void SimpleMovingAverage::execute(const std::vector<MarketData> &data) {
    if (data.size() < window_size) {
        std::cerr << "Not enough data to compute moving average" << std::endl;
        return;
    }

    for (size_t i = window_size; i < data.size(); ++i) {
        double sum = 0.0;
        for (int j = 0; j < window_size; ++j) {
            sum += data[i - j].close;
        }
        double moving_average = sum / window_size;
        std::cout << "Date: " << data[i].date << " SMA: " << moving_average << std::endl;
    }
}
