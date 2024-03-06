#include <iostream>
#include <string>
using namespace std;
class Jugador {
private:
    string nombre;
    int opcion;

public:
    Jugador(const string nombre) : nombre(nombre), opcion(0) {}

    void elegirOpcion() {
        cout << nombre << ", elige tu opción:\n";
        cout << "1. Piedra\n";
        cout << "2. Tijera\n";
        cout << "3. Papel\n";
        cin >> opcion;
    }

    int getOpcion() const {
        return opcion;
    }

    string getNombre() const {
        return nombre;
    }
};
string consultarGanador(int opcion_jugador1, int opcion_jugador2) {
    if (opcion_jugador1 == opcion_jugador2) {
        return "Empate";
    }
    else if ((opcion_jugador1 == 1 && opcion_jugador2 == 2) ||
        (opcion_jugador1 == 2 && opcion_jugador2 == 3) ||
        (opcion_jugador1 == 3 && opcion_jugador2 == 1)) {
        return "Jugador 1";
    }
    else {
        return "Jugador 2";
    }
}

int main() {
    string nombre_jugador1, nombre_jugador2;

    cout << "Ingrese el nombre del Jugador 1: ";
    cin >> nombre_jugador1;

    cout << "Ingrese el nombre del Jugador 2: ";
    cin >> nombre_jugador2;

    Jugador jugador1(nombre_jugador1);
    Jugador jugador2(nombre_jugador2);

    jugador1.elegirOpcion();
    jugador2.elegirOpcion();

    int opcion_jugador1 = jugador1.getOpcion();
    int opcion_jugador2 = jugador2.getOpcion();

    string ganador = consultarGanador(opcion_jugador1, opcion_jugador2);
    cout << "El ganador es: " << ganador << endl;
    return 0;
}