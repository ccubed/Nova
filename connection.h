/*
*   connection.h
*
*   Purpose: Define a class, connection, that implements a single socket
*   connection to a game.
*   
*   Copyright 2017 Charles Click
*   This file licensed under the MIT License.
*/
#ifndef CONNECTION_H
#define CONNECTION_H

#include "mxp.h"
#include "msp.h"
#include "game.h"
#include <QTcpSocket>
#include <QSslSocket>

class Connection{
    
public:
    Connection();
    Connection(Game instance);
    ~Connection();
    
private:
    Mxp protoMxp;
    Msp protoMsp;
    
};

#endif