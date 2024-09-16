#include <iostream>
#include <string>

#include <vector>
#include <chrono>
#include <ctime>

using namespace std;

class Furniture {
protected:
    std::string name;
    double price;
    int quantity;
    int inventoryID;  // New attribute for unique inventory ID
    vector<double> dimensions; // Store the dimensions as <x,y,z>
    string style;
    time_t dateAdded; // store the date this item was added to inventory



private:
    static int nextID;  // Static class variable to generate unique IDs

public:
    // Constructor to assign inventory ID and increment nextID
    Furniture(std::string n, double p, int q)
        : name(n), price(p), quantity(q), inventoryID(nextID++) {
            dateAdded=std::chrono::system_clock::to_time_t(chrono::system_clock::now());
        }

    // Virtual destructor to ensure proper cleanup in derived classes
    virtual ~Furniture() {}

    // Getters
    std::string getName() const { return name; }
    double getPrice() const { return price; }
    int getQuantity() const { return quantity; }
    int getInventoryID() const { return inventoryID; }  // Getter for inventoryID
    vector<double> getDimensions() const {return dimensions;} //getter for dimensions vector 
    string getStyle() const {return style;} 
    time_t getDateAdded() const {return dateAdded;}
    // Setters
    void setName(const std::string& n) { name = n; }
    void setPrice(double p) { price = p; }
    void setQuantity(int q) { quantity = q; }
    void setDimensions(double length, double height, double width) {dimensions={length,height,width};};
    void setStyle(string sty) {style=sty;}

    // Virtual display method
    virtual void display() const {
        std::cout << "Inventory ID: " << inventoryID << std::endl;
        std::cout << "Name: " << name << ", Price: $" << price
                  << ", Quantity: " << quantity << std::endl;
    }
};

// Initialize static variable
int Furniture::nextID = 1;
