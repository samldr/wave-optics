#ifndef LIGHTSOURCE_H
#define LIGHTSOURCE_H

#include <iostream>
#include <vector>

using namespace std;

// TODO: make this class abstract?

class LightSource {
    public:
        vector<double> pos_; // the position of the light source
        double range_; // the angular range of the light source
        double rotation_; // the offset angle of the first ray
        double angleIncrement_; // the angle between each ray
        int rayNumber_; // the number of rays spawned by the light source

        LightSource(vector<double>, double, double, int);
};

#endif
