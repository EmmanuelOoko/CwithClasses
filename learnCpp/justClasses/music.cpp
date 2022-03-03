#include <iostream>
#include "Song.hpp"
using namespace std;

int main(){
    Song electric_relaxation;
    electric_relaxation.add_title("Electric Relaxation");
    //electric_relaxation.artist("A Tribe Called Quest");

    cout << electric_relaxation.get_title() << "\n"; 
}