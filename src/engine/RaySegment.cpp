class RaySegment {
        public:
            int * pos;
            int * dir;
            int * polarization;
            int intensity;
            int refractiveIndex;

            RaySegment(int * pos, int * dir, int * polarization, int intensity, int refractiveIndex) {
                pos = pos;
                dir = dir;
                polarization = polarization;
                intensity = intensity;
                refractiveIndex = refractiveIndex;
            }

};

