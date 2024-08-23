
#include <iostream>

using namespace std;

// Class 1: Animal

class Animal {
public:
    void move() {
        cout << "The animal moves around the forest." << endl;
    }


    void eat() {
        cout << "The animal eats some food." << endl;
    }
};


// Class 2: Plant

class Plant {
public:
    void grow() {
        cout << "The plant grows taller." << endl;
    }


    void photosynthesize() {
        cout << "The plant performs photosynthesis." << endl;
    }
};


int main() {
    // Instantiating objects of both classes
    Animal deer;
    Plant tree;
    


    
    // Using member functions
    deer.move();
    deer.eat();
    
    tree.grow();
    tree.photosynthesize();
    
    return 0;
}
