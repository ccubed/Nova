/*
*   game.cpp
*   
*   Copyright 2017 Charles Click
*   This file licensed under the MIT License.
*/
#include "game.h"

Game(QString name, QString host, int port, bool useMxp, bool useMsp, bool useSsl){
        
    config.insert("name", QVariant(name));
    config.insert("hostname", QVariant(host));
    config.insert("port", QVariant(port));
    config.insert("useMxp", QVariant(useMxp));
    config.insert("useMsp", QVariant(useMsp));
    config.insert("useSsl", QVariant(useSsl));
    conn = Connection(host, port, useMxp, useMsp, useSsl);
        
}

Game(QString path){
    
    // load the json doc
    
}
    
~Game(){
    
    // save the json doc
    
}
    
void relayData(QString text){
    
    conn.send(text);
    
}

void startGame(){
    
    conn.connect();
    
}

void stopGame(){
    
    conn.disconnect();
    
}