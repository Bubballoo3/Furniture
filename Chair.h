#include "Furniture.h"

class Chair : public Furniture {
private:
    bool hasArmrest; 
    int numOfLegs;
    bool hasSet; //ie. part of a set of chairs
    bool isOutdoor;
public:
    Chair(std::string n, double p, int q, double l, double h, double w, string sty, bool armrest,int nOL,bool hs, bool outdoor)
        : Furniture(n, p, q, l, h , w, sty), hasArmrest(armrest), numOfLegs(nOL), hasSet(hs), isOutdoor(outdoor) {}

    //getters
    bool getHasArmrest() const { return hasArmrest; }
    int getNumberOfLegs() const {return numOfLegs; }
    bool getHasSet() const {return hasSet;}
    bool getIsOutdoor() const {return isOutdoor;}

    //setters
    void setHasArmrest(bool armrest) { hasArmrest = armrest; }
    void setNumOfLegs(int nOL) {numOfLegs=nOL;}
    void setHasSet(bool hs) {hasSet=hs;}
    void setIsOutdoor(bool outdoor) {isOutdoor=outdoor;}

    //Display special chair attributes
    void display() const override {
        Furniture::display();  // Display inherited attributes
        std::cout << "Armrest: " << (hasArmrest ? "Yes" : "No") << std::endl;
        cout << "Has " << numOfLegs << " legs." << endl;
        cout << "It is an "<< (isOutdoor ? "outdoor" : "indoor") << 
        " chair and is "<< (hasSet ? "":"not") << " part of a set." << endl;
    }
};
