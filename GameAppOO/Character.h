#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
using namespace std;

class Personaje {
protected:
    int vida;
public:
    Personaje(int v);
    void atacar(Personaje& objetivo);
    void recibirDano(int dano);
    int obtenerVida() const;
};

class Heroe : public Personaje {
public:
    Heroe(int vida);
    void atacar(Personaje& enemigo);
    void esquivar();
};

class Enemigo : public Personaje {
public:
    Enemigo(int vida);
    void atacar(Personaje& heroe);
};

class Boss : public Enemigo {
public:
    Boss(int vida);
    void atacar(Personaje& heroe);
};

#endif