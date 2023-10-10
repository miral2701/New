#pragma once

#include "Figure.h"

class Parallelogram :
    public Figure
{
    double c;
public:
    Parallelogram(double a,double b,double c1);
    virtual void ShowArea() const;
};