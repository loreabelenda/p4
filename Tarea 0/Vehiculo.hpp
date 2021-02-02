class Vehiculo
{
private:
    int nroSerie;
    float porcentajeBateria;
    float precioBase;
    
public:
    Vehiculo();
    Vehiculo(int n, float p, float p);
    ~Vehiculo();

    setNroSerie(int n);
    setPorcentajeBateria(float p);
    setPrecioBase(float pb);

    int getNroSerie();
    float getPorcentajeBateria();
    float getPrecioBase();

    float darPrecioViaje(int duracion, int distancia);
};

