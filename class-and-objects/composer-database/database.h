/*
database.h, created by @pytholic on 2023.10.17
Description: Class for a database of Composer records.
*/
#include "composer.h"

// Our database holds 100 composers, and no more.
const int max_composers = 100;

class Database
{
public:
    Database();
    ~Database();

    // Add composer and returns a reference to a Composer object. This allows you to use the
    // function to add a new composer to the database and obtain a reference to the newly
    // added composer.
    Composer &add_composer(std::string in_first_name, std::string in_last_name,
                           std::string in_genre, int in_yob, std::string in_fact);

    // Get composer using last name
    Composer &get_composer(std::string in_last_name);
    // Display all composer in the database
    void display_all();
    // Sort database records by rank and then display all.
    void display_by_rank();

private:
    // Store the individual records in an array.
    Composer composers_[max_composers];
    // Track the next slot in the array to place a new record.
    int next_slot_;
};