#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <iomanip>
#include "funkcijos.cpp"

using namespace std;

class Kubas
{
private:
    int x;
    int y;

public:
    Kubas(int Xdydis, int Ydydis) : x(Xdydis), y(Ydydis) {}

    /*   ~Kubas(); */

    int getX() const
    {
        return x;
    }

    int getY() const
    {
        return y;
    }

    void setX(int newX)
    {
        x = newX;
    }

    void setY(int newY)
    {
        y = newY;
    }
};

#endif