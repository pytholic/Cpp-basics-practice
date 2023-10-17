/*
test_composer.cc, created by @pytholic on 2023.10.17
Description: This program tests the composer class.
*/

#include <iostream>
#include <stdio.h>
#include "composer.h"
using namespace std;

int main()
{
    printf("\nTesting the composer class.\n\n");

    Composer composer;

    composer.set_first_name("Ludvig van");
    composer.set_last_name("Beethoven");
    composer.set_composer_yob(1970);
    composer.set_composer_genre("Romantic");
    composer.set_fact("Beethoven was completely deaf during the latter part of "
                      "his life - he never heard a performance of his 9th symphony.");
    composer.promote(2);
    composer.demote(1);
    composer.display();
}