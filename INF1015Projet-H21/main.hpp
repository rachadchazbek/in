#include <iostream>
using namespace std;

class Piece;

class Case {
    public:
    Case(int x, int y) {
        this->x = x;
        this->y = y;
    }
    int getX() const {return x;}
    int getY() const {return y;}
    bool getIsOccupied() const {return isOccupied;}
    bool getIsOccupiedWhite() const {return isOccupiedWhite;}
    void setX(const int& s) {x = s;}
    void setY(const int& s) {y = s;}
    void setIsOccupied(const bool& b) {isOccupied = b;}
    void setIsOccupiedWhite(const bool& b) {isOccupiedWhite = b;}
    private:
    int x, y;
    bool isOccupied;
    bool isOccupiedWhite;
};
    

class Piece {
    public:
    Piece() {
        isAlive = 1;
        isWhite = 1;
        caseP = nullptr;
    }
    bool getIsAlive() const {return isAlive;}  // Getter isAlive.
    bool getIsWhite() const {return isWhite;}  // Getter isWhite.
    Case* getCase() {return caseP;}  // Getter case.
    void setIsAlive(const bool& b) {isAlive = b;}
    void setIsWhite(const bool& b) {isWhite = b;}
    void setCase(Case* c) {caseP = c;}
    
    private:
    bool isAlive;
    bool isWhite;
    Case* caseP;
};

