#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>

class Package {
public:
    Package(const std::string& name, const std::string& address, const std::string& city,
            const std::string& state, int ZIP, double weight, double cost);

    void setWeight(double weight);
    void setCostPerOunce(double cost);
    double calculateCost() const;
    void printPackageInfo() const;

    int getPackageID() const { return packageID; }
    const std::string& getRecipientName() const { return recipientName; }
    const std::string& getRecipientAddress() const { return recipientAddress; }
    const std::string& getRecipientCity() const { return recipientCity; }
    const std::string& getRecipientState() const { return recipientState; }
    int getRecipientZIP() const { return recipientZIP; }

private:
    static int ID;
    int packageID;
    std::string recipientName;
    std::string recipientAddress;
    std::string recipientCity;
    std::string recipientState;
    int recipientZIP;
    double packageWeight;
    double costPerOunce;
};

#endif // PACKAGE_H
