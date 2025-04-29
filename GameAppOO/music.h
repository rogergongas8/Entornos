#ifndef MUSIC_H
#define MUSIC_H

#include <SFML/Audio.hpp>
#include <string>
#include <memory>

class Music {
public:
    Music(const std::string& filepath);
    ~Music();

    void play();
    void stop();
    void setLoop(bool loop);
    void setVolume(float volume);

private:
    std::unique_ptr<sf::Music> music;
};

#endif
