#include <iostream>
using namespace std;

class Song
{
private:
    /* data */
    string title;
    string artist;

public:
// Method declarations
    void add_title(string new_title);
    string get_title();

    void add_artist(std::string set_artist);
    std::string get_artist();
};


