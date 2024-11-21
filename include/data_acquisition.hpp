#ifndef DATA_ACQUISITION_HPP
#define DATA_ACQUISITION_HPP

#include <vector>
#include <string>

struct MarketData {
    std::string date;
    double open;
    double high;
    double low;
    double close;
    int volume;
};

class DataAcquisition {
public:
    std::vector<MarketData> loadHistoricalData(const std::string &filepath);
};

#endif // DATA_ACQUISITION_HPP
