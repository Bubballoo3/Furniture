// main.cpp
#include "Furniture.h"
#include <cassert>

int main() {
    // Test 1: Create a Furniture object using the constructor
    Furniture chair("Office Chair", 149.99, 10);
    chair.display();

    // Test 2: Test getter methods
    assert(chair.getName() == "Office Chair");
    assert(chair.getPrice() == 149.99);
    assert(chair.getQuantity() == 10);

    std::cout << "Getters passed." << std::endl;

    // Test 3: Test setter methods
    chair.setName("Ergonomic Office Chair");
    chair.setPrice(199.99);
    chair.setQuantity(5);

    assert(chair.getName() == "Ergonomic Office Chair");
    assert(chair.getPrice() == 199.99);
    assert(chair.getQuantity() == 5);

    chair.display();
    std::cout << "Setters passed." << std::endl;

    // Test 4: Test multiple Furniture objects
    Furniture table("Dining Table", 299.99, 3);
    Furniture sofa("Leather Sofa", 499.99, 2);

    table.display();
    sofa.display();

    // Test 5: Polymorphism with display method
    Furniture* items[] = { &chair, &table, &sofa };
    std::cout << "\nDisplaying all furniture items:" << std::endl;
    for(auto item : items) {
        item->display();
    }

    // Test 6: Dynamic Allocation and Cleanup
    Furniture* dynamicChair = new Furniture("Gaming Chair", 249.99, 7);
    dynamicChair->display();
    delete dynamicChair;
    std::cout << "Dynamic allocation test passed." << std::endl;

    std::cout << "All tests passed successfully!" << std::endl;

    return 0;
}
