#include <iostream>
#include <vector>
#include "LightSource.h"

using namespace std;

LightSource::LightSource(vector<double> pos, double range, double rotation, int rayNumber)
{
    pos_ = pos;
    range_ = range;
    rotation_ = rotation;
    angleIncrement_ = range / rayNumber;
    rayNumber_ = rayNumber;
}


