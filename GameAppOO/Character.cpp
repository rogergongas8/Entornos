#include "character.h"
#include <random>

Personaje::Personaje(int v) : vida(v) {}

void Personaje::recibirDano(int dano) {
    vida -= dano;
    cout << "Recibes " << dano << " de dano. Vida restante: " << vida << "\n";
}

int Personaje::obtenerVida() const { return vida; }

void Personaje::atacar(Personaje& objetivo) {
    cout << "El personaje ataca.\n";
}

Heroe::Heroe(int vida) : Personaje(vida) {}
void Heroe::atacar(Personaje& enemigo) {
    int dano = 10;
    cout << "Atacas e infliges " << dano << " de dano.\n";
    enemigo.recibirDano(dano);
}
void Heroe::esquivar() {
    if (rand() % 2 == 0) cout << "Esquivas el ataque!\n";
    else { cout << "No logras esquivar.\n"; recibirDano(5); }
}

Enemigo::Enemigo(int vida) : Personaje(vida) {}
void Enemigo::atacar(Personaje& heroe) {
    cout << "El enemigo ataca e inflige 5 de dano.\n";
    heroe.recibirDano(5);
}

Boss::Boss(int vida) : Enemigo(vida) {}
void Boss::atacar(Personaje& heroe) {
    cout << "El jefe final ataca con gran fuerza!\n";
    heroe.recibirDano(15);
}