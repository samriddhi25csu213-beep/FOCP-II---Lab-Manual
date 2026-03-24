// create a class animal which has its function eat
// create a class dog which is inherited from animal and contains his own function bark
// create an object of derived class which is able to access both the fun eat and bark


#include <iostream>
using namespace std;
class Animal
{
    public:
    void eat(){
        cout << "animal eats!" << endl;
    }
};
class Dog: public Animal
{
    public:
    void bark(){
        cout << "dog barks!";
    }
};
int main (){
    Dog d1;
    d1.eat();
    d1.bark();
}
