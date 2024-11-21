#include "../include/data_acquisition.hpp"
#include <fstream>
#include <sstream>
#include <iostream>

std::vector<MarketData> DataAcquisition::loadHistoricalData(const std::string &filepath) {
    std::vector<MarketData> data;
    std::ifstream file(filepath);
    std::string line;

    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filepath << std::endl;
        return data;
    }

    while (getline(file, line)) {
        std::stringstream ss(line);
        MarketData md;
        ss >> md.date >> md.open >> md.high >> md.low >> md.close >> md.volume;
        data.push_back(md);
    }

    file.close();
    return data;
}
