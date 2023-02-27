#include <iostream>
using namespace std;

class Animal
{
private:
    string name;
    string sound;

public:
    Animal()
    {
        cout << "Hello! I still don't know who I am!" << endl;
    }

    Animal(string _name, string _sound)
    {
        name = _name;
        sound = _sound;
        cout << "Hello! I am a(n) " << name
             << ". " << sound << "!" << endl;
    }

    Animal(const Animal &other)
    {
        name = other.name;
        sound = other.sound;
        cout << "Hello! I am a clone of a(n) " << name
             << ". " << sound << "!" << endl;
    }

    ~Animal()
    {
        cout << "It's me, " << name << "! I am dying! "
             << sound << "!" << endl;
    }

    void make_noise() { cout << sound << "!" << endl; }
    void set_name(string _name) { name = _name; }
    void set_sound(string _sound) { sound = _sound; }
};

int main()
{
    Animal cat1("Cat", "Meow");
    Animal cat2(cat1);
    Animal cow1("Cow", "Moo");
    Animal duck1("Duck", "Quack");
    {
        Animal duck2(duck1);
        Animal cow2(cow1);
        Animal dog1("Dog", "Woof");
    }
    Animal a;
    a.set_name("Lion");
    a.set_sound("Roar");
    return 0;
}
