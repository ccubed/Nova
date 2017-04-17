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

class Connection{
    
public:
    Connection(QString host, int port, bool mxp, bool msp, bool ssl);
    ~Connection();
    bool connect();
    bool isConnected();
    void send(QString data);
    void disconnect();
    
private:
    Mxp protoMxp;
    Msp protoMsp;
    struct{
        
        QString hostname;
        int port;
        
    }hostinfo;
    QTcpSocket socket;
    
};

#endif