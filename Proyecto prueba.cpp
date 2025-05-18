#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    // Declaración de variables
    int numPortales;
    char portal1_1, portal1_2, portal2_1, portal2_2, portal3_1, portal3_2, portal4_1, portal4_2, portal5_1, portal5_2; // Hasta 5 portales.
    char planetaEnergia;
    int cantidadEnergia;
    int vidaViajero;
    char planetaInicio, planetaFin;
    int numPortalesViaje;
    char portalViaje1, portalViaje2, portalViaje3, portalViaje4, portalViaje5; // Hasta 5 portales en el viaje.
    int tiempoViaje = 0;
    int energiaRestante;
    char planetaActual;
    bool viajeImposible = false;
    bool viajePosible = false;
    bool viajeSinSentido = false;
    bool viajeExitoso = false;
    bool viajeFallido = false;

    // Inicializar las energias de los planetas.
    int energiaA = 0, energiaB = 0, energiaC = 0, energiaD = 0, energiaE = 0, energiaF = 0, energiaG = 0, energiaH = 0,energiaU = 0, energiaV = 0, energiaW = 0, energiaX = 0, energiaY = 0, energiaZ = 0;
    char planetaA = ' ', planetaB = ' ', planetaC = ' ', planetaD = ' ', planetaE = ' ', planetaF = ' ', planetaG = ' ', planetaH = ' ', planetaU = ' ', planetaV = ' ', planetaW = ' ', planetaX = ' ', planetaY = ' ', planetaZ = ' ';

    // 1. Número de portales encontrados
    cout << "Ingrese el número de portales encontrados: ";
    cin >> numPortales;

    // 2. Lista de portales y sus conexiones
    cout << "Ingrese los portales y sus conexiones (ej: AB):" << endl;
    if (numPortales > 0) {
        cin >> portal1_1 >> portal1_2;
    }
    if (numPortales > 1) {
        cin >> portal2_1 >> portal2_2;
    }
    if (numPortales > 2) {
        cin >> portal3_1 >> portal3_2;
    }
    if (numPortales > 3) {
        cin >> portal4_1 >> portal4_2;
    }
    if (numPortales > 4) {
        cin >> portal5_1 >> portal5_2;
    }

    // 3. Lista de planetas y su energía
    cout << "Ingrese los planetas y su energía (ej: A 2):" << endl;
    for (int i = 0; i < numPortales; ++i) {
        cin >> planetaEnergia >> cantidadEnergia;
        if (planetaEnergia == 'A') {
            planetaA = 'A';
            energiaA = cantidadEnergia;
        } else if (planetaEnergia == 'B') {
            planetaB = 'B';
            energiaB = cantidadEnergia;
        } else if (planetaEnergia == 'C') {
            planetaC = 'C';
            energiaC = cantidadEnergia;
        } else if (planetaEnergia == 'D') {
            planetaD = 'D';
            energiaD = cantidadEnergia;
        }
    }

    // 4. Vida del viajero
    cout << "Ingrese la vida del viajero: ";
    cin >> vidaViajero;

    // 5. Planeta de inicio y fin
    cout << "Ingrese el planeta de inicio: ";
    cin >> planetaInicio;
    cout << "Ingrese el planeta fin: ";
    cin >> planetaFin;

    // 6. Número de portales en el viaje
    cout << "Ingrese el número de portales en el viaje: ";
    cin >> numPortalesViaje;

    // 7. Lista de portales del viaje
    cout << "Ingrese los portales del viaje (ej: B):" << endl;
    if (numPortalesViaje > 0) {
        cin >> portalViaje1;
    }
    if (numPortalesViaje > 1) {
        cin >> portalViaje2;
    }
    if (numPortalesViaje > 2) {
        cin >> portalViaje3;
    }
    if (numPortalesViaje > 3) {
        cin >> portalViaje4;
    }
    if (numPortalesViaje > 4) {
        cin >> portalViaje5;
    }

    // Lógica del viaje
    planetaActual = planetaInicio;
    tiempoViaje = 0;
    energiaRestante = 0;

    for (int i = 0; i < numPortalesViaje; ++i) {
        char portalActual = ' ';
        if (i == 0)
            portalActual = portalViaje1;
        else if (i == 1)
            portalActual = portalViaje2;
        else if (i == 2)
            portalActual = portalViaje3;
        else if (i == 3)
            portalActual = portalViaje4;
        else if (i == 4)
            portalActual = portalViaje5;

        char planetaDestino = ' ';
        int tiempoViajePortal = 0;

        // Determinar el planeta de destino y el tiempo de viaje
        if ((planetaActual == portal1_1 && portalActual == portalViaje1) || (planetaActual == portal1_2 && portalActual == portalViaje1)) {
            planetaDestino = (planetaActual == portal1_1) ? portal1_2 : portal1_1;
            tiempoViajePortal = (planetaDestino == 'B') ? 1 :
                               (planetaDestino == 'C') ? 2 :
                               (planetaDestino == 'D') ? 3 : 0; // Añadido 0 para el caso de A
        } else if ((planetaActual == portal2_1 && portalActual == portalViaje1) || (planetaActual == portal2_2 && portalActual == portalViaje1)) {
            planetaDestino = (planetaActual == portal2_1) ? portal2_2 : portal2_1;
            tiempoViajePortal = (planetaDestino == 'B') ? 1 :
                               (planetaDestino == 'C') ? 2 :
                               (planetaDestino == 'D') ? 3 : 0;
        } else if ((planetaActual == portal3_1 && portalActual == portalViaje1) || (planetaActual == portal3_2 && portalActual == portalViaje1)) {
            planetaDestino = (planetaActual == portal3_1) ? portal3_2 : portal3_1;
            tiempoViajePortal = (planetaDestino == 'B') ? 1 :
                               (planetaDestino == 'C') ? 2 :
                               (planetaDestino == 'D') ? 3 : 0;
        } else if ((planetaActual == portal1_1 && portalActual == portalViaje2) || (planetaActual == portal1_2 && portalActual == portalViaje2)) {
            planetaDestino = (planetaActual == portal1_1) ? portal1_2 : portal1_1;
            tiempoViajePortal = (planetaDestino == 'B') ? 1 :
                               (planetaDestino == 'C') ? 2 :
                               (planetaDestino == 'D') ? 3 : 0; // Añadido 0 para el caso de A
        } else if ((planetaActual == portal2_1 && portalActual == portalViaje2) || (planetaActual == portal2_2 && portalActual == portalViaje2)) {
            planetaDestino = (planetaActual == portal2_1) ? portal2_2 : portal2_1;
            tiempoViajePortal = (planetaDestino == 'B') ? 1 :
                               (planetaDestino == 'C') ? 2 :
                               (planetaDestino == 'D') ? 3 : 0;
        } else if ((planetaActual == portal3_1 && portalActual == portalViaje2) || (planetaActual == portal3_2 && portalActual == portalViaje2)) {
            planetaDestino = (planetaActual == portal3_1) ? portal3_2 : portal3_1;
            tiempoViajePortal = (planetaDestino == 'B') ? 1 :
                               (planetaDestino == 'C') ? 2 :
                               (planetaDestino == 'D') ? 3 : 0;
        }  else if ((planetaActual == portal1_1 && portalActual == portalViaje3) || (planetaActual == portal1_2 && portalActual == portalViaje3)) {
            planetaDestino = (planetaActual == portal1_1) ? portal1_2 : portal1_1;
            tiempoViajePortal = (planetaDestino == 'B') ? 1 :
                               (planetaDestino == 'C') ? 2 :
                               (planetaDestino == 'D') ? 3 : 0; // Añadido 0 para el caso de A
        } else if ((planetaActual == portal2_1 && portalActual == portalViaje3) || (planetaActual == portal2_2 && portalActual == portalViaje3)) {
            planetaDestino = (planetaActual == portal2_1) ? portal2_2 : portal2_1;
            tiempoViajePortal = (planetaDestino == 'B') ? 1 :
                               (planetaDestino == 'C') ? 2 :
                               (planetaDestino == 'D') ? 3 : 0;
        } else if ((planetaActual == portal3_1 && portalActual == portalViaje3) || (planetaActual == portal3_2 && portalActual == portalViaje3)) {
            planetaDestino = (planetaActual == portal3_1) ? portal3_2 : portal3_1;
            tiempoViajePortal = (planetaDestino == 'B') ? 1 :
                               (planetaDestino == 'C') ? 2 :
                               (planetaDestino == 'D') ? 3 : 0;
        }

        // Actualizar el planeta actual y el tiempo de viaje
        planetaActual = planetaDestino;
        tiempoViaje += tiempoViajePortal;

        // Calcular la energía restante
        if (planetaActual == 'A')
            energiaRestante = energiaA - tiempoViajePortal;
        else if (planetaActual == 'B')
            energiaRestante = energiaB - tiempoViajePortal;
        else if (planetaActual == 'C')
            energiaRestante = energiaC - tiempoViajePortal;
        else if (planetaActual == 'D')
            energiaRestante = energiaD - tiempoViajePortal;

        // Actualizar la energía del planeta
        if (planetaActual == 'A')
            energiaA = energiaRestante;
        else if (planetaActual == 'B')
            energiaB = energiaRestante;
        else if (planetaActual == 'C')
            energiaC = energiaRestante;
        else if (planetaActual == 'D')
            energiaD = energiaRestante;

        if (energiaRestante < 0) {
            viajeFallido = true;
            break;
        }

        if (tiempoViaje > vidaViajero) {
            viajeImposible = true;
            break;
        }
    }

    // Determinar el resultado del viaje
    if (viajeImposible) {
        cout << "Imposible: El viajero muere durante el viaje. Años de viaje: " << tiempoViaje << endl;
    } else if (viajeFallido) {
        cout << "Fallido: Debido a las energías implicadas no puede realizarse el viaje. Años de viaje: " << tiempoViaje << endl;
    } else if (planetaActual == planetaInicio) {
        viajeSinSentido = true;
        cout << "Sin sentido: El viaje termina en el planeta de inicio. Años de viaje: " << tiempoViaje << endl;
    } else if (planetaActual == planetaFin) {
        viajeExitoso = true;
        cout << "Exitoso: El viaje termina en el planeta planificado y el viajero llega con vida. Años de viaje: " << tiempoViaje << endl;
    } else {
        viajePosible = true;
        cout << "Posible: Es posible realizar el viaje pero no culmina en el planeta deseado. Años de viaje: " << tiempoViaje << endl;
    }

    return 0;
}