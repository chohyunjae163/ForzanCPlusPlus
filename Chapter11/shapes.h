/* date = January 13th 2023 11:05 pm */

#ifndef SHAPES_H
#define SHAPES_H

#include <initializer_list>

class Square
{
    protected:
    int Side;
    
    public:
    Square();
    explicit Square(int side);
    Square(const Square& Other);
    Square(const std::initializer_list<int>& v);
    ~Square();
    
    int GetPeri();
    int GetArea();
};

class Cube : public Square
{
    public:
    Cube();
    explicit Cube(int side);
    Cube(const Cube& Other);
    Cube(const std::initializer_list<int>& v);
    ~Cube();
    
    int GetArea();
    int GetVolume();
};

#endif //SHAPES_H
