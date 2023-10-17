/*
getters.cc, created by @pytholic on 2023.10.17
Description: An example illustrating getter method.
*/

#include <iostream>

class RectangleWithoutGetter
{
public:
    double width;
    double height;

    RectangleWithoutGetter(double w, double h) : width(w), height(h) {}
};

#include <iostream>

class RectangleWithGetter
{
private:
    double width;
    double height;

public:
    RectangleWithGetter(double w, double h) : width(w), height(h) {}

    // Getter methods
    double getWidth() const
    {
        return width;
    }

    double getHeight() const
    {
        return height;
    }
};

int main()
{
    RectangleWithoutGetter myRectangle1(4.0, 6.0);
    // Accessing the class variables directly
    double rectWidth = myRectangle1.width;
    double rectHeight = myRectangle1.height;
    std::cout << "Rectangle width: " << rectWidth << std::endl;
    std::cout << "Rectangle height: " << rectHeight << std::endl;

    std::cout << "\n\n";

    RectangleWithGetter myRectangle2(4.0, 6.0);

    // Accessing the class variables using getter methods
    rectWidth = myRectangle2.getWidth();
    rectHeight = myRectangle2.getHeight();

    std::cout << "Rectangle width: " << rectWidth << std::endl;
    std::cout << "Rectangle height: " << rectHeight << std::endl;

    return 0;
}
