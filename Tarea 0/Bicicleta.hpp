class Bicicleta : public Vehiculo
{
private:
    TipoBici tipo;
    int cantCambios;
    
public:
    Bicicleta();
    Bicicleta(TipoBici t, int cantc);
    ~Bicicleta();

    setTipo(TipoBici t);
    setCantCambios(int cant);

    TipoBici getTipo();
    int getCantCambios();
    
    float darPrecioViaje(int duracion, int distancia);
};

