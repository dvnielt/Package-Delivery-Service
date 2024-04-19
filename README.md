# Package-Delivery-Service
Package-delivery services offer several different shipping options, each with specific costs
associated. Create a complete C++ program to represent various types of packages.

Create a base class Package that includes protected data members representing the name,
address, city, state and ZIP code for the recipient of the package, the weight (in ounces) and cost per ounce to ship the package. Package class also contains a static data member ID and the
following methods:

• A constructor Package(const string& name, const string& address, const string& city, const
string& state, int ZIP, double weight, double cost) that creates a package with specified
parameters. Don’t forget to update an ID.
• The mutator functions setWeight and setCostPerOunce. The mutator functions should
validate that the weight and cost per ounce contain positive values. If non-positive values
were provided the class should print an appropriate message and set the parameter to 0.
• A constant public member function calculateCost that returns a double indicating the cost
associated with shipping the package. Package’s calculateCost function should determine
the cost by multiplying the weight by the cost per ounce.
• A constant public member function printPackageInfo that displays a package information


Create a derived class TwoDayPackage that inherits the functionality of base class Package, but also includes a data member that represents a flat fee that the shipping company charges for two-day-delivery service. TwoDayPackage class contains the following methods:

• A constructor TwoDayPackage(const std::string& name, const std::string& address, const
std::string& city, const std::string& state, int ZIP, double w, double cost, double fee ) that creates a package with specified parameters.
• The mutator function setFlatFee. The mutator function should validate that the flat fee
contains a positive value. If non-positive value was provided the class should print an
appropriate message and set the parameter to 0.
• A redefined member function calculateCost so that it computes the shipping cost by adding
the flat fee to the weight-based cost calculated by base class Package’s calculateCost
function.
• A redefined member function printPackageInfo that displays a two-day package information.


Create a derived class OvernightPackage that inherits the functionality of base class Package, but also includes a data member representing an additional fee per ounce
charged for overnight-delivery service. OvernightPackage class contains the following methods:

• A constructor OvernightPackage(const std::string& name, const std::string& address,
const std::string& city, const std::string& state, int ZIP, double w, double cost, double fee )
that creates a package with specified parameters.
• A redefined member function calculateCost so that it adds the additional fee per ounce to
the standard cost per ounce and multiplies it by the package’s weight.• A constant public member function calculateCost that returns a double indicating the cost associated with shipping the package. Package’s calculateCost function should determine the cost by multiplying the weight by the cost per ounce.
• A constant public member function printPackageInfo that displays a package information.


Create a derived class TwoDayPackage that inherits the functionality of base class Package, but also include a data member that represents a flat fee that the shipping company charges for two-day-delivery service. TwoDayPackage class contains the following methods:

• A constructor TwoDayPackage(const std::string& name, const std::string& address, const
std::string& city, const std::string& state, int ZIP, double w, double cost, double fee ) that creates a package with specified parameters.
• The mutator function setFlatFee. The mutator function should validate that the flat fee
contains a positive value. If non-positive value was provided the class should print an
appropriate message and set the parameter to 0.
• A redefined member function calculateCost so that it computes the shipping cost by adding
the flat fee to the weight-based cost calculated by base class Package’s calculateCost
function.
• A redefined member function printPackageInfo that displays a two-day package information.


Create a derived class OvernightPackage that inherits the functionality of base class Package, but also includes a data member representing an additional fee per ounce
charged for overnight-delivery service. OvernightPackage class contains the following methods:

• A constructor OvernightPackage(const std::string& name, const std::string& address,
const std::string& city, const std::string& state, int ZIP, double w, double cost, double fee )
that creates a package with specified parameters.
• A redefined member function calculateCost so that it adds the additional fee per ounce to
the standard cost per ounce and multiplies it by the package’s weight.
• The mutator function setOvernightFeePerOunce. The mutator function should validate
that the overnight fee contains a positive value. If non-positive value was provided the
class should print an appropriate message and set the parameter to 0.
• A redefined member function printPackageInfo that displays an overnightpackage information.


Then a test program creates a package object p1("John Smith", "1020 Orange St", "Lakeland",
"FL", 33111, 10.5, 0.4), a two-day package object p2("Bob George", "21 Pine Rd", "Cambridge",
"MA", 44444, 10.5, 0.65, 2.0), an overnight package object p3("Don Kelly", "9 Main St", "Denver","CO",66666, 12.25, 0.7, 0.25), and displays the result of p1.printPackageInfo(), p2.printPackageInfo(), and p3.printPackageInfo().