#include <iostream>
#include <cmath>
#include <vector>

#include "LightSource.h"
#include "Ray.h"
#include "RaySegment.h"

using namespace std;

// simulation instructions (temp place)

const int _RAYNUMBER = 2000;                // number of rays initially spawned 
const int _DEPTH = 5;                       // depth / max bounces
const vector<int> _DIMENSION = {500, 500};  // scene dimensions


// physical constants

const double h = 6.62607015e-34;        // Planck's constant
const double c = 299792458;             // Speed of light
const double k = 1.380649e-23;          // Boltzmann constant
const double mu_0 = 4e-7*M_PI;          // Vacuum permeability
const double e_0 = 1/(mu_0 * c * c);    // Vacuum permittivity


void main(){

    // scene items
    vector<Ray> rays = {};
    vector<LightSource> sources = {};

    for(int i = 0; i < sources.size(); i++){
        
        sources[i].spawnRays(rays);


    }


    
}
