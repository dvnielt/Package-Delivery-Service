#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(const std::string& name, const std::string& address,
                                   const std::string& city, const std::string& state, int ZIP,
                                   double w, double cost, double fee )
    : Package(name, address, city, state, ZIP, w, cost), overnightFeePerOunce(fee) {}

void OvernightPackage::setOvernightFeePerOunce(double fee) {
    if (fee > 0) {
        overnightFeePerOunce = fee;
    } else {
        std::cout << "Invalid overnight fee per ounce. Setting fee to 0." << std::endl;
        overnightFeePerOunce = 0;
    }
}

double OvernightPackage::calculateCost() const {
    return (Package::calculateCost() + overnightFeePerOunce * getPackageWeight());
}

void OvernightPackage::printPackageInfo() const {
    std::cout << "-------------------------------------------------------------------\n"
              << "Overnight Package id " << getPackageID() << ":\n"
              << getRecipientName() << "\n"
              << getRecipientAddress() << "\n"
              << getRecipientCity() << ", " << getRecipientState() << " " << getRecipientZIP() << "\n"
              << "\nCost: $" << calculateCost() << "\n"
              << "-------------------------------------------------------------------\n";
}
