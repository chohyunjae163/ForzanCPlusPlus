#include "shapes.h"
#include <iostream>

Square::Square()
{
    std::cout << "Default Square Constructor Called" << std::endl;
}

Square::Square(int side): Side{side}
{
}

Square::Square(const Square& Other): Side{Other.Side}
{
}

Square::Square(const std::initializer_list<int>& v)
{
    Side = *(v.begin());
}

Square::~Square()
{
}

int Square::GetPeri()
{
    return Side * 4;
}

int Square::GetArea()
{
    return Side* Side;
}

Cube::Cube()
{
    std::cout << "Cube is created" << std::endl;
}

Cube::Cube(int side): Square{side}
{
}

Cube::Cube(const Cube& Other): Square{Other.Side}
{
}

Cube::Cube(const std::initializer_list<int>& v)
{
    Side = *(v.begin());
}

Cube::~Cube()
{
}

int Cube::GetArea()
{
    return Side * Side * 6;
}

int Cube::GetVolume()
{
    return Side * Side * Side;
}
