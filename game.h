/*
*   game.h
*
*   Purpose: Define a class, game, that implements an object used to store per
*   game settings and information.
*   
*   Copyright 2017 Charles Click
*   This file licensed under the MIT License.
*/

#ifndef GAME_H
#define GAME_H

#include "connection.h"
#include <QString>
#include <QHash>

class Game{
    
public:
    Game(QString name, QString host, int port, bool useMxp, bool useMsp, bool useSsl);
    Game(QString path);
    ~Game();
    
private:
    Connection sock;
    QHash<QString, QVariant> config;
    
};

#endif