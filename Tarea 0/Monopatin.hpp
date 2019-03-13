class Monopatin : public Vehiculo
{
private:
    bool tieneLuces;
    
public:
    Monopatin();
    Monopatin(bool tl);
    ~Monopatin();

    setTieneLuces(bool tl);

    bool getTieneLuces();
    
    float darPrecioViaje(int duracion, int distancia);
};
