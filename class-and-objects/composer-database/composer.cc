/*
composer.cc, created by @pytholic on 2023.10.17
Description: The class for a Composer record.
*/

#include <iostream>
#include "composer.h"

// Constructor
Composer::Composer() : ranking_(default_ranking) {}

// Destructor
Composer::~Composer(){};

// Accessors and Mutators
void Composer::set_first_name(std::string in_first_name)
{
    first_name_ = in_first_name;
}

std::string Composer::first_name()
{
    return first_name_;
}

void Composer::set_last_name(std::string in_last_name)
{
    last_name_ = in_last_name;
}

std::string Composer::last_name()
{
    return last_name_;
}

void Composer::set_composer_yob(int in_composer_yob)
{
    composer_yob_ = in_composer_yob;
}

int Composer::composer_yob()
{
    return composer_yob_;
}

void Composer::set_composer_genre(std::string in_composer_genre)
{
    composer_genre_ = in_composer_genre;
}

std::string Composer::composer_genre()
{
    return composer_genre_;
}

void Composer::set_ranking(int in_ranking)
{
    ranking_ = in_ranking;
}

int Composer::ranking() const
{
    return ranking_;
}

void Composer::set_fact(std::string in_fact)
{
    fact_ = in_fact;
}

std::string Composer::fact()
{
    return fact_;
}

// Methods
void Composer::promote(int increment)
{
    ranking_ += increment;
}

void Composer::demote(int decrement)
{
    ranking_ -= decrement;
}

void Composer::display()
{
    std::cout << "Composer Name: " << first_name_ << " " << last_name_ << std::endl;
    std::cout << "Year of Birth: " << composer_yob_ << std::endl;
    std::cout << "Composer Genre: " << composer_genre_ << std::endl;
    std::cout << "Composer Ranking: " << ranking_ << std::endl;
    std::cout << "Fact about Composer: " << fact_ << std::endl
              << std::endl;
}