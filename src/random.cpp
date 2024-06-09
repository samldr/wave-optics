#include <iostream>
#include <cmath>
#include <vector>
#include <random>
#include <numeric>

using namespace std;

double plancksLaw(double wavelength, double temperature) {
    const double h = 6.62607015e-34;  // Planck's constant
    const double c = 299792458;       // Speed of light
    const double k = 1.380649e-23;    // Boltzmann constant

    double numerator = 2 * h * c * c * pow(wavelength, -5);
    double denominator = exp((h * c) / (wavelength * k * temperature)) - 1;

    return numerator / denominator;
}

int main() {
    double temperature = 5000;  // Blackbody temperature in Kelvin
    vector<double> spectralRadiance;

    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> dis(0.0, 1.0);

    for (int i = 380; i < 780; i++) {
        //double wavelength = dis(gen) * 1e-6;  // Random wavelength between 0 and 1 micrometer
        spectralRadiance.push_back(plancksLaw(i, temperature));
        std::cout << "Wavelength: " << i << " Spectral Radiance: " << spectralRadiance.back() << std::endl;

        
    }

    auto result = accumulate(spectralRadiance.begin(), spectralRadiance.end(),0.0);
    cout << result << endl;

    return 0;
}
