class LightSource {
    public:
        int * pos;
        int range;
        int rotation;
        int angleIncrement;
        int rayNumber;

        
        LightSource(int * pos, int range, int rotation, int angleIncrement, int rayNumber);
    };


LightSource::LightSource(int * pos, int range, int rotation, int angleIncrement, int rayNumber)
{
    pos = pos;
    range = range;
    rotation = rotation;
    angleIncrement = angleIncrement;
    rayNumber = rayNumber;
}


