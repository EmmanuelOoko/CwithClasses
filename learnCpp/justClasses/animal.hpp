#include <iostream>
using namespace std;

class animal
{
private:
    /* data */
    string name;
    int limbs;
    string sound;

public:
    animal(string new_name, int num_limbs, string sauti);
    ~animal();

    string get_name();
    int get_limbs();
    string make_sound();

};
