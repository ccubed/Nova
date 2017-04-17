/*
*   connection.cpp
*   
*   Copyright 2017 Charles Click
*   This file licensed under the MIT License.
*/
#include "connection.h"
#include "mxp.h"
#include "msp.h"

Connection(QString host, int port, bool mxp, bool msp, bool ssl){
    
    // Grab host information
    hostinfo.hostname = host;
    hostinfo.port = port;
    
    // Determine what protocols we're supposed to support
    mxp ? mxp = Mxp() : mxp = 0;
    msp ? msp = Msp() : msp = 0;
    
}

~Connection();
bool connect();
bool isConnected();
void send(QString data);
void disconnect();