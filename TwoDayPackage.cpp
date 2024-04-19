#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(const std::string& name, const std::string& address,
                             const std::string& city, const std::string& state, int ZIP,
                             double w, double cost, double fee)
    : Package(name, address, city, state, ZIP, w, cost), flatFee(fee) {}

void TwoDayPackage::setFlatFee(double fee) {
    if (fee > 0) {
        flatFee = fee;
    } else {
        std::cout << "Invalid flat fee. Setting flat fee to 0." << std::endl;
        flatFee = 0;
    }
}

double TwoDayPackage::calculateCost() const {
    return Package::calculateCost() + flatFee;
}

void TwoDayPackage::printPackageInfo() const {
    std::cout << "-------------------------------------------------------------------\n"
              << "Two Day Package id " << getPackageID() << ":\n"
              << getRecipientName() << "\n"
              << getRecipientAddress() << "\n"
              << getRecipientCity() << ", " << getRecipientState() << " " << getRecipientZIP() << "\n"
              << "\nCost: $" << calculateCost() << "\n"
              << "-------------------------------------------------------------------\n";
}
