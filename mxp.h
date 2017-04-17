/*
*   mxp.h
*
*   Purpose: Define a class, mxp, that implements the Mud eXtension Protocol.
*   
*   Copyright 2017 Charles Click
*   This file licensed under the MIT License.
*/

#ifndef MXP_H
#define MXP_H

#include "connection.h"
#include <QString>
#include <QHash>
#include <QVariant>

class Mxp{
    
public:
    Mxp();
    ~Mxp();
    bool Process(QByteArray data);
    QVariant get(QString what);
    bool set(QString what, QVariant value);
    
private:
    bool enabled;
    int lastErrorCode;
    QString lastErrorText;
    QHash<QString, QVariant> mxpData;
    
};

#endif