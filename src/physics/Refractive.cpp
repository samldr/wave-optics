#include "Refractive.hpp"
// TODO: need to implement point class properly her also
Refractive :: Refractive(Mat material){
    material_ = material;
};

double Refractive :: sellmeier(Ray ray){
    double wavelength = ray.wavelength_;
    
    switch (material_){
        case 0: // Soda-Lime Glass
            return 1.5130 - 0.003169 * pow(wavelength, 2) + 0.003962 * pow(wavelength, -2);
            break;
    }
}



vector<RaySegment> Refractive :: newSegment(Ray ray, Point normal, Point intersection){
    RaySegment segment = ray.segments_.back();

    Eigen::Vector2d eIncident(segment.dir_.data()); 
    Eigen::Vector2d eNormal(normal.data());

    double ndoti = eNormal.dot(eIncident);
    double n1 = segment.refractiveIndex_; // incident
    double n2 = refractiveIndex_;   // transmitted

    if (ndoti < 0) {
        eNormal = -eNormal;
        ndoti = -ndoti;
    }

    double mu  = n1 / n2;
    double sin2 = pow(mu, 2) * (1-pow(ndoti, 2));

    if(sin2>0){

        Eigen::Vector2d eReflected = eIncident - 2 * eIncident.dot(eNormal) * eNormal;
        vector<double> reflected = {eReflected[0], eReflected[1]};
        vector<RaySegment> output = {RaySegment(intersection, reflected, segment.polarization_, segment.intensity_, segment.refractiveIndex_)};
        return output;

    } else {
        
        double reflectivity = pow((n2 - n1) / (n2 + n1), 2);
        double transmissivity = 1 - reflectivity;

        Eigen::Vector2d eTransmitted;
        eTransmitted = mu*eIncident + (mu * ndoti - sqrt(1 - sin2))*eNormal;
        vector<double> transmitted = {eTransmitted[0], eTransmitted[1]};

        Eigen::Vector2d eReflected = eIncident - 2 * eIncident.dot(eNormal) * eNormal;
        vector<double> reflected = {eReflected[0], eReflected[1]};

        vector<RaySegment> output;
        output.push_back(RaySegment(intersection, reflected, segment.polarization_, segment.intensity_ * reflectivity, segment.refractiveIndex_));

    }
    
    
    
    
}