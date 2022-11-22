//Hengyi Li
//This is a Prue Abstract Base Class Program
//This Program Created by Hengyi Li on 10:15 PM, March 19, 2021
//This Program has been done by Hengyi Li on 7:20 PM, March 20, 2021.
//Copyright @ 2021 Hengyi Li. All rights reserved.

#include <iostream>
#include <string>

class Ship
{
private:
    std::string ship_name;
   int year;
public:
    /**
     * This constructor is work as a set method
     * @param name is a string value that store the name of the ship
     * @param year_boat is a int value that stroe the year of the ship
     */
    Ship(std::string name, int year_boat){ship_name = name; year = year_boat;}

    /**
     * This function is to set the name of the ship
     * @param name_of_ship is the string value that assigned to the the ship_name variable
     */
    void set_ship_name(std::string name_of_ship){ ship_name = name_of_ship;};

    /**
     * This function is to set the year of the ship
     * @param year_of_built is a int value that assigned to the year variable
     */
    void set_year(int year_of_built) { year = year_of_built;}

    /**
     * This function is to get the year of the ship
     * @return a int value that represents the year of the ship
     */
    virtual int get_year() const {return year;}

    /**
     * This function is to get the name of the ship
     * @return a string value that contains the name of the ship
     */
    virtual std::string get_ship_name() const {return ship_name;}

    /**
     * This function is to display everything
     */
    virtual void display()
    {
      std::cout << "The name of the ship is: " << get_ship_name() << std::endl
                << "And the year of the ship is: " << get_year() << std::endl;
    }

};

class CruiseShip: public Ship
{
protected:
    int max_number_passenger;
public:
    /**
     * This constructor is to set the name, year and the max passenger of the cruise ship
     * @param name is the string value that stores the name of the ship
     * @param yearBoat is the int value that stores the year of the ship
     * @param max_passenger is the int value that stores the max passenger of the ship
     */
    CruiseShip(std::string name, int yearBoat, int max_passenger) : Ship(name, yearBoat)
    {
      set_ship_name(name);
      set_max_passenger(max_passenger);
    }

    /**
     * This function is to set the max number of the passenger
     * @param max_number is a int value that contains the max number of the passenger
     */
    void set_max_passenger(int max_number){max_number_passenger = max_number;}

    /**
     * This function is to get the max capacity of the ship
     * @return the int value that has the number of the max number of the passenger
     */
    int get_max_number_passenger() const{return max_number_passenger;}

    /**
     * This function is to display everything
     */
    void display()
    {
        std::cout << std::endl <<  "The name of the Cruise ship is: " << get_ship_name() << std::endl
                  << "And it has the max passenger is: " << get_max_number_passenger() << std::endl;

    }

};

class CargoShip: public Ship
{
protected:
    int tonnage;
public:
    /**
     * This constructor is used to initialize the name, year, and the tonnage of the ship
     * @param CargoName is a string value that contain the name of the ship
     * @param CargoYear is a int value that has the year of the ship
     * @param tonnage is a int value that has the tonnage of the ship
     */
    CargoShip(std::string CargoName, int CargoYear, int tonnage): Ship(CargoName, CargoYear)
    {
      set_tonnage(tonnage);
    }

    /**
     * This function is to set the tonnage of the ship
     * @param ton is the int value that store the tonnage of the ship
     */
    void set_tonnage(int ton){ tonnage = ton;}

    /**
     * This function is to get the tonnage of the ship
     * @return a int value that has the tonnage of the ship
     */
    int get_tonnage() const{return tonnage;}

    /**
     * This function is to prompt the display information
     */
    void display()
    {
      std::cout << std::endl << "The name of the Cargo ship is: " << get_ship_name() <<std::endl
                << "And the Cargo capacity is " << get_tonnage() <<std::endl;
    }
};

/**
 * This function is to call the display function
 * @param ships is a pointer object
 */
 void Display(Ship *ships);

int main()
{
  const int ARRAY_SIZE = 10;
  Ship *ships[ARRAY_SIZE]
  {
    new Ship("Akira", 2049),
    new CruiseShip("Cyberpunk", 2077, 42),
    new CargoShip("BladeRunner", 1982, 1968)
  };

  for(size_t loop = 0; loop < ARRAY_SIZE; loop++)
  {
    Display(ships[loop]);
  }

  delete *ships;
  
  return 0;
}

void Display(Ship *ships)
{
  ships->display();
}
