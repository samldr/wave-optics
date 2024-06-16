#ifndef REFLECTIVESURFACE_H
#define REFLECTIVESURFACE_H

#include <iostream>
#include <vector>

#include "Surface.h"
#include "Ray.h"
#include "RaySegment.h"

using namespace std;

class ReflectiveSurface : public Surface {
    
    vector<RaySegment> newSegment(Ray);

};

#endif