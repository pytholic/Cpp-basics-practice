/*
file.cpp, created by @python on 2012.10.16
Description: An illustration of file processing
*/

#include <iostream>
#include <fstream>

int main()
{
    char first_name[30], last_name[30];
    int age;
    std::string filename;
    char done;

    std::cout << "Enter a file name: " << std::endl;
    std::cin >> filename;
    std::string filepath = "/Users/3i-a1-2021-15/Developer/learning/cpp_google_developers/file/" + filename + ".txt";

    std::ofstream People_out(filepath, std::ios::out);

    while (1)
    {
        std::cout << "\nEnter First Name: ";
        std::cin >> first_name;
        std::cout << "Enter Last Name: ";
        std::cin >> last_name;
        std::cout << "Enter Age: ";
        std::cin >> age;

        // write to output stream
        std::cout << "Writing to file..." << std::endl;
        if (People_out.is_open())
        {
            People_out << first_name << " "
                       << last_name << std::endl
                       << age << std::endl
                       << "\n";
        }

        // find if they want to continue
        std::cout << "Continue? y/n" << std::endl;
        std::cin >> done;
        if (done == 'n')
            break;
    }
    People_out.close();

    // Reading the file
    std::ifstream People_in(filepath);
    std::cout << "\nReading from a file..." << std::endl;

    while (1)
    {
        if (People_in.is_open())
        {
            People_in >> first_name >> last_name >> age;
            if (People_in.eof())
                break;
            std::cout << std::endl
                      << "First Name: " << first_name;
            std::cout << std::endl
                      << "Last Name:  " << last_name;
            std::cout << std::endl
                      << "Enter Age:  " << age;
            std::cout << std::endl;
        }
    }
    // Close the stream.
    People_in.close();

    return 0;
}