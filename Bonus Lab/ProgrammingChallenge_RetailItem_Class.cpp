#include <iostream>
#include <string>

class RetailItem
{
private:
    std::string description;
    int unitsOnHand;
    double price;
public:
    RetailItem(std::string descrption_retail, int Units, double price_of_retail)
    {
      description = descrption_retail;
      unitsOnHand = Units;
      price = price_of_retail;
    }
   std::string getDescription(){return description;};
    int getUnitsOnHand(){return unitsOnHand;};
    double getPrice(){return price;};
    std::string to_string();
};

std::string RetailItem::to_string()
{
  std::string result = getDescription() + "  " + std::to_string(getUnitsOnHand()) +  "  " + std::to_string(getPrice());
  return result;
}

int main()
{
  RetailItem retailObject1("Jacket", 12, 59.95);
  RetailItem retailObject2("Designer Jeans", 40, 34.95);
  RetailItem retailObject3("Shirt", 20, 24.95);
  std::cout << retailObject1.to_string() << std::endl << retailObject2.to_string() << std::endl << retailObject3.to_string();
  return 0;
}




