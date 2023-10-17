#include <iostream>
using namespace std;

int main()
{
    string str1 = "My name is Haseeb!";
    size_t pos = str1.find("Haseeb"); // get position of substring
    string str2 = str1.substr(pos, 6);
    cout << str2 << endl;
    return 0;
}