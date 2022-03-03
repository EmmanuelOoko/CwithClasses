#include <iostream>
#include "animal.hpp"

// Constructor
animal::animal(string new_name, int num_limbs, string sauti)
{
    name = new_name;
    limbs = num_limbs;
    sound = sauti;
}


// Destructor
animal::~animal()
{
}

string animal::get_name(){
    return name;
}

int animal::get_limbs(){
    return limbs;
}

string animal::make_sound(){
    return sound;
}

int main(){
    animal tier("sheep", 4, "meeeehs");

    cout << "Our " << tier.get_name() << " has " << tier.get_limbs() << " limbs and it " << tier.make_sound() << ".\n";
}