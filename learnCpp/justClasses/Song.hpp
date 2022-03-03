#include <iostream>
using namespace std;

class Song
{
private:
    /* data */
    string title;
    string artist;

public:
// Add a constructor here
  Song(string new_title, string new_artist);

 // Add a destructor here:
 // Song(string new_title, string new_artist);
 // ~Song();

// Method declarations (no need, taken care by the constructor)
   // void add_title(string new_title);
   string get_title();

   // void add_artist(std::string set_artist);
   string get_artist();
};


