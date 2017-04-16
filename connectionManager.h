/*
*   connectionManager.h
*
*   Purpose: Define a class, connectionManager, that is responsible for
*   maintaining the socket connections made by the client.
*   
*   Copyright 2017 Charles Click
*   This file licensed under the MIT License.
*/

#ifndef CONNECTIONMANAGER_H
#define CONNECTIONMANAGER_H

#include "game.h"
#include <QTcpSocket>
#include <QList>
#include <QString>

class connectionManager{
    
public:
    ConnectionManager();
    ~ConnectionManager();
    
private:
    QList<game> connections;
    
};

#endif