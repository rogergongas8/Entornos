#include <iostream>
#include "character.h"
using namespace std;

int main() {
    Heroe heroe(100);
    Enemigo enemigo(50);
    Boss jefe(100);

    cout << "Comienza la batalla!\n";
    while (heroe.obtenerVida() > 0 && enemigo.obtenerVida() > 0) {
        cout << "Vida Heroe: " << heroe.obtenerVida() << " | Vida Enemigo: " << enemigo.obtenerVida() << "\n";
        string accion;
        cout << "Atacar o esquivar? ";
        cin >> accion;
        if (accion == "atacar") heroe.atacar(enemigo);
        else if (accion == "esquivar") heroe.esquivar();
        if (enemigo.obtenerVida() > 0) enemigo.atacar(heroe);
    }

    if (heroe.obtenerVida() > 0) {
        cout << "Llega el jefe final!\n";
        while (heroe.obtenerVida() > 0 && jefe.obtenerVida() > 0) {
            cout << "Vida Heroe: " << heroe.obtenerVida() << " | Vida Jefe: " << jefe.obtenerVida() << "\n";
            string accion;
            cout << "Atacar o esquivar? ";
            cin >> accion;
            if (accion == "atacar") heroe.atacar(jefe);
            else if (accion == "esquivar") heroe.esquivar();
            if (jefe.obtenerVida() > 0) jefe.atacar(heroe);
        }
        cout << (heroe.obtenerVida() > 0 ? "Victoria!" : "Has sido derrotado.") << "\n";
    }
    return 0;
}
