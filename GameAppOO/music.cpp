#include "Music.h"
#include <iostream>

Music::Music(const std::string& filepath) {
    music = std::make_unique<sf::Music>();
    if (!music->openFromFile(filepath)) {
        std::cerr << "Error al cargar la música desde: " << filepath << std::endl;
    }
}

Music::~Music() {
    stop();
}

void Music::play() {
    if (music) music->play();
}

void Music::stop() {
    if (music) music->stop();
}

void Music::setLoop(bool loop) {
    if (music) music->setLoop(loop);
}

void Music::setVolume(float volume) {
    if (music) music->setVolume(volume);
}
