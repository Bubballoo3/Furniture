#include "Furniture.h"

class Chair : public Furniture {
private:
    bool hasArmrest;
    int numOfLegs;

public:
    Chair(std::string n, double p, int q, double l, double h, double w, string sty, bool armrest,int nOL)
        : Furniture(n, p, q, l, h , w, sty), hasArmrest(armrest), numOfLegs(nOL) {}

    bool getHasArmrest() const { return hasArmrest; }
    int getNumberOfLegs() const {return numOfLegs; }

    void setHasArmrest(bool armrest) { hasArmrest = armrest; }
    void setNumOfLegs(int nOL) {numOfLegs=nOL;}
    void display() const override {
        Furniture::display();  // Display inherited attributes
        std::cout << "Armrest: " << (hasArmrest ? "Yes" : "No") << std::endl;
        cout << "Has " << numOfLegs << " legs." << endl;
    }
};
