#include <iostream>
#include <stdlib.h>

using namespace std;

class Persona{
private:    //atributos
    int edad;
    string nombre;
public:     //metodos
    Persona(int, string);   //constructor
    void leer();
    void correr();
};

/*!
 * \brief Persona::Persona: el constructor nos sirve para inicializar atributos
 * \param _edad
 * \param _nombre
 */
Persona::Persona(int _edad, string _nombre){
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer(){
    cout
}
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
