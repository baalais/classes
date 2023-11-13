// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Dog{
    public: 
    string name;
    Dog(string n, float a) {
        this->name = n;
        this->age = a;
        cout << name << " Born \n";
    }
    
    float birthday() const {
        return age;
        this->age+1;
    }
    
    void woof() {
        cout << "Woof!";
    };
    
    private:
    int age;
};

int main() {
    Dog dog1("Reksis", 6);
    cout << dog1.name << "\n";
    dog1.woof();
    cout << "\n";
    

    return 0;
}