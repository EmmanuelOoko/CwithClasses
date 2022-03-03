#include "Song.hpp"
//Song Method Definitions

void Song::add_title(string new_title)
{
    // sets title to new_title
    title = new_title;
}

string Song::get_title()
{
    return title;
}

void Song::add_artist(string new_artist)
{
    // sets artist to new_artist
    artist = new_artist;
}

string Song::get_artist()
{
    return artist;
}