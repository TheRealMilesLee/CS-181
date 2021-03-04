#include <iostream>
#include <string>

class RetailItem
{
private:
    std::string description;
    int unitsOnHand;
    double price;
public:
    /**
     * This constructor accepts three parameter and initialize the description, unitsOnHand, and price value
     * @param descrption_retail is a string parameter that could initialize the description variable
     * @param Units is a int parameter that used to initialize the unitsOnHand variable
     * @param price_of_retail is a double parameter that used to initialize the price variable
     */
    RetailItem(std::string descrption_retail, int Units, double price_of_retail)
    {
      description = descrption_retail;
      unitsOnHand = Units;
      price = price_of_retail;
    }

    /**
     * This function is to get the description of the retail item
     * @return a string value that is the description of the retail item
     */
   std::string getDescription(){return description;};

   /**
    * This function is to get the units on hand
    * @return a int value that is the units on hand
    */
   int getUnitsOnHand(){return unitsOnHand;};

   /**
    * This function is to get the price
    * @return a double value that is the price
    */
   double getPrice(){return price;};

   /**
    * This function is to output everything formatting
    * @return the formatting result
    */
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
  std::cout  << retailObject1.to_string() << std::endl << retailObject2.to_string() << std::endl << retailObject3.to_string();
  return 0;
}




