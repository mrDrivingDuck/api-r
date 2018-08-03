#ifndef _SCALARR_H_
#define _SCALARR_H_

/*********************************************
 *
 * @Author -- Jingtang Zhang
 * @Date   -- 2018.7.14, Hangzhou
 * @Update -- 2018.8.1, Hangzhou
 * 
 *********************************************/

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

#include "Socket/SysIO.h"
#include "R_Type.h"
#include "Utill.h"

/******************************************************************
 *
 * @Description
 * 
 *  Basic class of SCALAR
 *  
 *  Store basic information of a scalar except the value.
 *  CANNOT be instancial
 * 
 *  Function 'getValue()' need to be overrided by extending class
 * 
 *  R only support
 *      bool int double string(char)
 *      [NA] need to be implemented independently
 *
 ******************************************************************/
class Scalarr 
{
private: 
    bool is_null;
public:
    Scalarr()
    {
        is_null = false;
    }
    virtual ~Scalarr() {};
    virtual void* getValue() = 0;
    void SetNull() {is_null = true;}
    bool IsNull() {return is_null;}
};

class ScalarBool : public Scalarr 
{
private:
    bool value;
public:
    ScalarBool(DataInputStream& in)
        :Scalarr()
    {
        char temp;
        in.readChar(temp);
        if (temp == (char) DDB_NULL_LOGICAL)
        {
            Scalarr::SetNull();
        }
        value = (bool) temp;
    }
    ScalarBool(bool in) {value = in;}
    ~ScalarBool() {}

    void* getValue() {return (void *)(&value);}
};

class ScalarInt : public Scalarr 
{
private: 
    int value;
public: 
    ScalarInt(DataInputStream& in)
        :Scalarr()
    {
        in.readInt(value);
    }
    ScalarInt(int in) {value = in;}
    ~ScalarInt() {}
    
    void* getValue() {return (void *)(&value);}
};

class ScalarDouble : public Scalarr
{
private:
    double value;
public:
    ScalarDouble(DataInputStream& in)
        :Scalarr()
    {
        in.readDouble(value);
        if (value == DDB_NULL_NUMERIC)
        {
            Scalarr::SetNull();
        }
    }
    ScalarDouble(double in) {value = in;}
    ~ScalarDouble() {}

    void* getValue() {return (void *)(&value);}
};

class ScalarString : public Scalarr 
{
private: 
    string value;
public:
    ScalarString(DataInputStream& in)
        :Scalarr()
    {
        in.readString(value);
        if (value == "")
        {
            Scalarr::SetNull();
        }
    }
    ScalarString(string in) {value = in;}
    ~ScalarString() {}

    void* getValue() {return (void *)(&value);}
};

class ScalarLong : public Scalarr
{
private: 
    double value;
public: 
    ScalarLong(DataInputStream &in)
        :Scalarr()
    {
        long long temp;
        in.readLong(temp);
        if (temp < DDB_NULL_LONG)
        {
            Scalarr::SetNull();
        }
        value = (double) temp;
    }
    ScalarLong(long long in) {value = (double) in;}
    ~ScalarLong() {}

    void* getValue() {return (void*)(&value);}
};

class ScalarFloat : public Scalarr
{
private: 
    double value;
public: 
    ScalarFloat(DataInputStream &in)
        :Scalarr()
    {
        float temp;
        in.readFloat(temp);
        if (temp == DDB_NULL_FLOAT)
        {
            Scalarr::SetNull();
        }
        value = (double) temp;
    }
    ~ScalarFloat() {}

    void* getValue() {return (void*)(&value);}
};

class ScalarShort : public Scalarr 
{
private: 
    int value;
public: 
    ScalarShort(DataInputStream &in)
        :Scalarr()
    {
        short temp;
        in.readShort(temp);
        if (temp == DDB_NULL_SHORT)
        {
            Scalarr::SetNull();
        }
        value = (int) temp;
    }
    ~ScalarShort() {}

    void* getValue() {return (void*)(&value);}
};

class ScalarDate : public Scalarr 
{
private: 
    string value;
public: 
    ScalarDate(DataInputStream &in)
        :Scalarr()
    {
        int temp;
        in.readInt(temp);
        value = Utill::ParseDate(temp);
        if (temp == DDB_NULL_INTEGER)
        {
            Scalarr::SetNull();
        }
    }
    ~ScalarDate() {}

    void* getValue() {return (void *)(&value);}
};

class ScalarDateTime : public Scalarr
{
private: 
    string value;
public: 
    ScalarDateTime(DataInputStream &in)
        :Scalarr()
    {
        int temp;
        in.readInt(temp);
        value = Utill::ParseDateTime(temp);
        if (temp == DDB_NULL_INTEGER)
        {
            Scalarr::SetNull();
        }
    }
    ~ScalarDateTime() {}

    void* getValue() {return (void *)(&value);}
};

void CreateScalar(Scalarr*& scalar_ptr, int data_type, DataInputStream& in)
{
    switch(data_type)
    {
        case DATA_TYPE::DT_BOOL:
            scalar_ptr = new ScalarBool(in);
            break;
        case DATA_TYPE::DT_INT:
            scalar_ptr = new ScalarInt(in);
            break;
        case DATA_TYPE::DT_DOUBLE:
            scalar_ptr = new ScalarDouble(in);
            break;
        case DATA_TYPE::DT_STRING:
            scalar_ptr = new ScalarString(in);
            break;
        case DATA_TYPE::DT_LONG:
            scalar_ptr = new ScalarLong(in);
            break;
        case DATA_TYPE::DT_FLOAT: 
            scalar_ptr = new ScalarFloat(in);
            break;
        case DATA_TYPE::DT_SHORT: 
            scalar_ptr = new ScalarShort(in);
            break;
        case DATA_TYPE::DT_DATE: 
            scalar_ptr = new ScalarDate(in);
            break;
        case DATA_TYPE::DT_DATETIME: 
            scalar_ptr = new ScalarDateTime(in);
            break;
        case DATA_TYPE::DT_VOID: 
            bool temp;
            in.readBool(temp);
            break;
        default:
            // cout << "DATA FORM UNSURPORT" << endl;
            break;
    }
}

#endif