/*
*   msp.h
*
*   Purpose: Define a class, msp, that implements the Mud Sound Protocol.
*   
*   Copyright 2017 Charles Click
*   This file licensed under the MIT License.
*/

#ifndef MSP_H
#define MSP_H

#include "connection.h"
#include <QString>
#include <QByteArray>

class Msp{
    
public:
    Msp();
    ~Msp();
    bool Process(QByteArray data);
    
private:
    void PlaySound(QString path);
    bool enabled;
    int lastErrorCode;
    QString lastErrorText;
    
};

#endif