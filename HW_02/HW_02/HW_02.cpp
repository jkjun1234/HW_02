#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;   //순수 가상함수
    virtual ~Animal() {};
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "왈왈!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "야옹~!" << endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() {
        cout << "음머~!" << endl;
    }
};

int main()
{
    Animal* animals[3]; 
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    for (int i = 0; i < 3; i++) {
        animals[i]->makeSound();
    }

    for (int i = 0; i < 3; i++)
    {
        delete animals[i];  //메모리 해제
    }
    
    return 0;
}

