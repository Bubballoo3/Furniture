#include <iostream>
#include <string>

class Furniture {
protected:
    std::string name;
    double price;
    int quantity;
    int inventoryID;  // New attribute for unique inventory ID

private:
    static int nextID;  // Static class variable to generate unique IDs

public:
    // Constructor to assign inventory ID and increment nextID
    Furniture(std::string n, double p, int q)
        : name(n), price(p), quantity(q), inventoryID(nextID++) {}

    // Virtual destructor to ensure proper cleanup in derived classes
    virtual ~Furniture() {}

    // Getters
    std::string getName() const { return name; }
    double getPrice() const { return price; }
    int getQuantity() const { return quantity; }
    int getInventoryID() const { return inventoryID; }  // Getter for inventoryID

    // Setters
    void setName(const std::string& n) { name = n; }
    void setPrice(double p) { price = p; }
    void setQuantity(int q) { quantity = q; }

    // Virtual display method
    virtual void display() const {
        std::cout << "Inventory ID: " << inventoryID << std::endl;
        std::cout << "Name: " << name << ", Price: $" << price
                  << ", Quantity: " << quantity << std::endl;
    }
};

// Initialize static variable
int Furniture::nextID = 1;
