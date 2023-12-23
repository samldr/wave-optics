#ifndef BLACKBODY_H
#define BLACKBODY_H

#include <iostream>
#include <vector>
#include "LightSource.h"
#include "Ray.h"

class Blackbody : public LightSource{
    public:
        double temperature_; // the temperature of the blackbody in Kelvin

        Blackbody(double, vector<double>, double, double, int);
        void spawnRays(vector<Ray>);
};


#endif