/*
database.cc, created by @pytholic on 2023.10.17
*/

#include <iostream>
#include "database.h"
#include <algorithm>
#include <cmath>

Database::Database() : next_slot_(0){};
Database::~Database(){};

Composer &Database::add_composer(std::string in_first_name, std::string in_last_name,
                                 std::string in_genre, int in_yob, std::string in_fact)
{
    if (next_slot_ < max_composers)
    {
        // Create new composer object
        Composer new_composer;
        new_composer.set_first_name(in_first_name);
        new_composer.set_last_name(in_last_name);
        new_composer.set_composer_genre(in_genre);
        new_composer.set_composer_yob(in_yob);
        new_composer.set_fact(in_fact);
        // Add the new composer to the array
        composers_[next_slot_] = new_composer;
        // Return a reference to the newly added composer and increment next_slot_
        return composers_[next_slot_++];
    }
    else
    {
        std::cout << "Database is full!" << std::endl;
        return composers_[0];
    }
};

Composer &Database::get_composer(std::string in_last_name)
{
    for (int i = 0; i < next_slot_; i++)
    {
        if (composers_[i].last_name() == in_last_name)
            return composers_[i];
    }
    // Handle the case where the composer is not found.
    // For now, let's return the first composer as a placeholder.
    std::cout << "Not found!" << std::endl;
    return composers_[0];
};

// Display all composers in the database
void Database::display_all()
{
    for (int i = 0; i < next_slot_; i++)
    {
        composers_[i].display();
    }
}

// Sort database records by rank and then display all.
void Database::display_by_rank()
{
    std::sort(composers_, composers_ + next_slot_, [](const Composer &comp1, const Composer &comp2)
              { return std::abs(comp1.ranking()) > std::abs(comp2.ranking()); });

    // Display the sorted composers
    display_all();
}