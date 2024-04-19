#include "Package.h"

int Package::ID = 1;

Package::Package(const std::string& name, const std::string& address, const std::string& city,
                 const std::string& state, int ZIP, double weight, double cost)
    : packageID(ID++), recipientName(name), recipientAddress(address), recipientCity(city),
      recipientState(state), recipientZIP(ZIP), packageWeight(weight), costPerOunce(cost) {}

void Package::setWeight(double weight) {
    if (weight > 0) {
        packageWeight = weight;
    } else {
        std::cout << "Invalid weight. Setting weight to 0." << std::endl;
        packageWeight = 0;
    }
}

void Package::setCostPerOunce(double cost) {
    if (cost > 0) {
        costPerOunce = cost;
    } else {
        std::cout << "Invalid cost per ounce. Setting cost to 0." << std::endl;
        costPerOunce = 0;
    }
}

double Package::calculateCost() const {
    return packageWeight * costPerOunce;
}

void Package::printPackageInfo() const {
    std::cout << "-------------------------------------------------------------------\n"
              << "Package id " << packageID << ":\n"
              << recipientName << "\n"
              << recipientAddress << "\n"
              << recipientCity << ", " << recipientState << " " << recipientZIP << "\n"
              << "\nCost: $" << calculateCost() << "\n"
              << "-------------------------------------------------------------------\n";
}
