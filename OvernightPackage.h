#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

class OvernightPackage : public Package {
public:
    OvernightPackage(const std::string& name, const std::string& address,
                     const std::string& city, const std::string& state, int ZIP,
                     double w, double cost, double fee );

    void setOvernightFeePerOunce(double fee);
    double calculateCost() const override;
    void printPackageInfo() const override;

private:
    double overnightFeePerOunce;
};

#endif // OVERNIGHTPACKAGE_H
