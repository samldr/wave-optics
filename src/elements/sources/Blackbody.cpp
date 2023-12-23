#include <iostream>
#include <vector>
#include <cmath>
#include "Blackbody.h"
#include "LightSource.h"
#include "Ray.h"

using namespace std;

Blackbody::Blackbody(double temperature, vector<double> pos, double range, double rotation, int rayNumber) 
: LightSource(pos, range, rotation, rayNumber) {
    temperature_ = temperature;
}

void Blackbody::spawnRays(vector<Ray> rays){
    
    // TODO: replace this temporary values with the correct blackbody spectrum distribution
    double wavelength = 2.8977729e-3 / temperature_; // Wien's displacement law
    
    // TODO: replace this temporary value with the correct refractive index at spawn point
    double refractiveIndex = 1;

    for(int i = 0; i < rayNumber_; i++){
        double angle = (i + 1) *angleIncrement_ + rotation_;
        vector<double> dir = {cos(angle), sin(angle)};
        vector<double> polarization = {1, 0}; // use a horizontally polarized wave for now
    
        rays.push_back(Ray(wavelength, pos_, dir, polarization, 1, refractiveIndex));
    };
}