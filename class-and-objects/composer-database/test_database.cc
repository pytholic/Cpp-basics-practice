/*
test_database.cc, created by @pytholic on 2023.10.17
Description: This program tests the composer class.
*/

#include <iostream>
#include "database.h"
#include <stdio.h>
using namespace std;

int main()
{
    printf("\nTesting the database class.\n\n");

    Database db;
    Composer &comp1 = db.add_composer("Ludwig van", "Beethoven", "Romantic", 1770,
                                      "Beethoven was completely deaf during the latter part of his life - he never "
                                      "heard a performance of his 9th symphony.");
    // Rememberthe above functio nreturns a reference
    comp1.promote(7);

    Composer &comp2 = db.add_composer("Johann Sebastian", "Bach", "Baroque", 1685,
                                      "Bach had 20 children, several of whom became famous musicians as well.");
    comp2.promote(15);

    Composer &comp3 = db.add_composer("Wolfgang Amadeus", "Mozart", "Classical", 1756,
                                      "Mozart feared for his life during his last year - there is some evidence "
                                      "that he was poisoned.");
    comp3.promote(2);

    printf("\nAll composers: \n\n");
    db.display_all();

    printf("\nAll composers sorted by rank: \n\n");
    db.display_by_rank();
}