#ifndef SURFACE_H
#define SURFACE_H

#include <iostream>
#include <vector>
#include "Ray.h"
#include "RaySegment.h"

using namespace std;

class Surface {

    virtual vector<double> getNormal(void);
    virtual vector<double> getIntersection(Ray);
    virtual vector<RaySegment> newSegment(Ray); 
};


#endif