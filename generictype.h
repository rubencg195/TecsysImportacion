#ifndef GENERICTYPE_H
#define GENERICTYPE_H
#include <QString>

class genericType
{
public:
    genericType(int _type, int _iValue, float _fValue, QString _sValue );

    const static int INTEGER = 0;
    const static int FLOAT = 1;
    const static int STRING = 2;

    int type = 0;
    int iValue = 0;
    float fValue = 0;
    QString sValue = "";
};

#endif // GENERICTYPE_H
