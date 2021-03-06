#ifndef _VECTORR_H_
#define _VECTORR_H_

/*****************************************
 *
 * @Author -- Jingtang Zhang
 * @Date   -- 2018.7.14, Hangzhou
 * @Update -- 2018.8.17, Hangzhou
 * 
 *****************************************/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

#include "Socket/SysIO.h"
#include "R_Type.h"


/******************************************************************
 *
 * @Description
 * 
 *  Basic class of VECTOR
 *  
 *  Store basic information of a vector except the value.
 *  CANNOT be instancial
 * 
 *  Function 'getVector()' need to be overrided by extending class
 * 
 *  R only support
 *      bool int double string(char)
 *      [NA] need to be implemented independently
 *
 ******************************************************************/
class Vectorr 
{
private:
    int row;
    int clm;
    vector <int> NA_INDEX;
public:
    Vectorr(DataInputStream &in)
    {
        in.readInt(row);
        in.readInt(clm);
    }
    Vectorr() {}
    virtual ~Vectorr() {}

    int getRow() {return row;}
    int getClm() {return clm;}
    vector <int>& getNAIndex() {return NA_INDEX;}

    virtual void* getVector() = 0;
};

class VectorBool : public Vectorr 
{
private:
    vector <bool> vec;
public:
    VectorBool(DataInputStream& in)
        :Vectorr(in)
    {
        int size = Vectorr::getRow() * Vectorr::getClm();
        vec.reserve(size);
        for (int i = 0; i < size; i++)
        {
            char temp;
            in.readChar(temp);
            vec.push_back((bool) temp);
            if (temp == (char) DDB_NULL_BYTE)
            {
                Vectorr::getNAIndex().push_back(i+1);
            }
        }
    }
    ~VectorBool() {}    // Free automatically

    void* getVector() {return (void *)(&vec);}
};

class VectorInt : public Vectorr
{
private:
    vector <int> vec;
public:
    VectorInt(DataInputStream& in)
        :Vectorr(in)
    {
        int size = Vectorr::getRow() * Vectorr::getClm();
        vec.reserve(size);
        for (int i = 0; i < size; i++)
        {
            int temp;
            in.readInt(temp);
            vec.push_back(temp);
        }
    }
    ~VectorInt() {}     // Free automatically

    void* getVector() {return (void *)(&vec);}
};

class VectorDouble : public Vectorr 
{
private: 
    vector <double> vec;
public: 
    VectorDouble(DataInputStream& in)
        :Vectorr(in)
    {
        int size = Vectorr::getRow() * Vectorr::getClm();
        vec.reserve(size);
        for (int i = 0; i < size; i++)
        {
            double temp;
            in.readDouble(temp);
            vec.push_back(temp);
            if (temp == DDB_NULL_NUMERIC)
            {
                Vectorr::getNAIndex().push_back(i+1);
            }
        }
    }
    ~VectorDouble() {}      // Free automatically

    void* getVector() {return (void *)(&vec);}
};

class VectorString : public Vectorr 
{
private:
    vector <string> vec;
public: 
    VectorString(DataInputStream& in)
        :Vectorr(in)
    {
        int size = Vectorr::getRow() * Vectorr::getClm();
        vec.reserve(size);
        for (int i = 0; i < size; i++)
        {
            string temp;
            in.readString(temp);
            vec.push_back(temp);
            if (temp == "")
            {
                Vectorr::getNAIndex().push_back(i+1);
            }
        }
    }
    ~VectorString() {}      // Free automatically

    void* getVector() {return (void *)(&vec);}
};

class VectorChar : public Vectorr
{
private:
    vector <string> vec;
public:
    VectorChar(DataInputStream &in)
        :Vectorr(in)
    {
        int size = Vectorr::getRow() * Vectorr::getClm();
        vec.reserve(size);
        for (int i = 0; i < size; i++)
        {
            char temp;
            in.readChar(temp);
            stringstream ss;
            ss << temp;
            vec.push_back(ss.str());
            ss.str("");
            ss.clear();
            if (temp == DDB_NULL_BYTE)
            {
                Vectorr::getNAIndex().push_back(i+1);
            }
        }
    }
    ~VectorChar() {}

    void* getVector() {return (void *)(&vec);}
};

class VectorLong : public Vectorr
{
private: 
    vector <double> vec;
public: 
    VectorLong(DataInputStream& in)
        :Vectorr(in)
    {
        int size = Vectorr::getRow() * Vectorr::getClm();
        vec.reserve(size);
        for (int i = 0; i < size; i++)
        {
            long long temp;
            in.readLong(temp);
            if (temp < DDB_NULL_LONG)
            {
                Vectorr::getNAIndex().push_back(i+1);
            }
            vec.push_back((double) temp);
        }
    }
    ~VectorLong() {}

    void* getVector() {return (void *)(&vec);}
};

class VectorFloat : public Vectorr
{
private:
    vector <double> vec;
public: 
    VectorFloat(DataInputStream& in)
        :Vectorr(in)
    {
        int size = Vectorr::getRow() * Vectorr::getClm();
        vec.reserve(size);
        for (int i = 0; i < size; i++)
        {
            float temp;
            in.readFloat(temp);
            if (temp == DDB_NULL_FLOAT)
            {
                Vectorr::getNAIndex().push_back(i+1);
            }
            vec.push_back((double) temp);
        }
    }
    ~VectorFloat() {}

    void* getVector() {return (void *)(&vec);}
};

class VectorShort : public Vectorr
{
private: 
    vector <int> vec;
public: 
    VectorShort(DataInputStream &in)
        :Vectorr(in)
    {
        int size = Vectorr::getRow() * Vectorr::getClm();
        vec.reserve(size);
        for (int i = 0; i < size; i++)
        {
            short temp;
            in.readShort(temp);
            if (temp == DDB_NULL_SHORT)
            {
                Vectorr::getNAIndex().push_back(i+1);
            }
            vec.push_back((int) temp);
        }
    }
    ~VectorShort() {}

    void* getVector() {return (void *)(&vec);}
};

class VectorDate : public Vectorr 
{
private: 
    vector <string> vec;
public: 
    VectorDate(DataInputStream &in)
        :Vectorr(in)
    {
        int size = Vectorr::getRow() * Vectorr::getClm();
        vec.reserve(size);
        for (int i = 0; i < size; i++)
        {
            int temp;
            in.readInt(temp);
            string date_str = Utill::ParseDate(temp);
            vec.push_back(date_str);
            if (temp == DDB_NULL_INTEGER)
            {
                Vectorr::getNAIndex().push_back(i+1);
            }
        }
    }
    ~VectorDate() {}

    void* getVector() {return (void *)(&vec);}
};

class VectorMonth : public Vectorr
{
private: 
    vector <string> vec;
public: 
    VectorMonth(DataInputStream &in)
        :Vectorr(in)
    {
        int size = Vectorr::getRow() * Vectorr::getClm();
        vec.reserve(size);
        for (int i = 0; i < size; i++)
        {
            int temp;
            in.readInt(temp);
            string month_str = Utill::ParseMonth(temp);
            vec.push_back(month_str);
            if (temp == DDB_NULL_INTEGER)
            {
                Vectorr::getNAIndex().push_back(i+1);
            }
        }
    }
    ~VectorMonth() {}

    void* getVector() {return (void *)(&vec);}
};

class VectorDateTime : public Vectorr 
{
private: 
    vector <string> vec;
public: 
    VectorDateTime(DataInputStream &in)
        :Vectorr(in)
    {
        int size = Vectorr::getRow() * Vectorr::getClm();
        vec.reserve(size);
        for (int i = 0; i < size; i++)
        {
            int temp;
            in.readInt(temp);
            string date_time_str = Utill::ParseDateTime(temp);
            vec.push_back(date_time_str);
            if (temp == DDB_NULL_INTEGER)
            {
                Vectorr::getNAIndex().push_back(i+1);
            }
        }
    }
    ~VectorDateTime() {}

    void* getVector() {return (void *)(&vec);}
};

class VectorTime : public Vectorr
{
private:
    vector <string> vec;
public:
    VectorTime(DataInputStream &in)
        :Vectorr(in)
    {
        int size = Vectorr::getRow() * Vectorr::getClm();
        vec.reserve(size);
        for (int i = 0; i < size; i++)
        {
            int temp;
            in.readInt(temp);
            string time_str = Utill::ParseTime(temp);
            vec.push_back(time_str);
            if (temp == DDB_NULL_INTEGER)
            {
                Vectorr::getNAIndex().push_back(i+1);
            }
        }
    }
    ~VectorTime() {}

    void* getVector() {return (void *)(&vec);}
};

class VectorMinute : public Vectorr
{
private:
    vector <string> vec;
public:
    VectorMinute(DataInputStream &in)
        :Vectorr(in)
    {
        int size = Vectorr::getRow() * Vectorr::getClm();
        vec.reserve(size);
        for (int i = 0; i < size; i++)
        {
            int temp;
            in.readInt(temp);
            string minute_str = Utill::ParseMinute(temp);
            vec.push_back(minute_str);
            if (temp == DDB_NULL_INTEGER)
            {
                Vectorr::getNAIndex().push_back(i+1);
            }
        }
    }
    ~VectorMinute() {}

    void* getVector() {return (void *)(&vec);}
};

class VectorSecond : public Vectorr 
{
private:
    vector <string> vec;
public:
    VectorSecond(DataInputStream &in)
        :Vectorr(in)
    {
        int size = Vectorr::getRow() * Vectorr::getClm();
        vec.reserve(size);
        for (int i = 0; i < size; i++)
        {
            int temp;
            in.readInt(temp);
            string second_str = Utill::ParseSecond(temp);
            vec.push_back(second_str);
            if (temp == DDB_NULL_INTEGER)
            {
                Vectorr::getNAIndex().push_back(i+1);
            }
        }
    }
    ~VectorSecond() {}

    void* getVector() {return (void *)(&vec);}
};

class VectorTimestamp : public Vectorr
{
private:
    vector <string> vec;
public:
    VectorTimestamp(DataInputStream &in)
        :Vectorr(in)
    {
        int size = Vectorr::getRow() * Vectorr::getClm();
        vec.reserve(size);
        for (int i = 0; i < size; i++)
        {
            long long temp;
            in.readLong(temp);
            string timestamp_str = Utill::ParseTimestamp(temp);
            vec.push_back(timestamp_str);
            if (temp < DDB_NULL_LONG)
            {
                Vectorr::getNAIndex().push_back(i+1);
            }
        }
    }
    ~VectorTimestamp() {}

    void* getVector() {return (void *)(&vec);}
};

class VectorNanotime : public Vectorr
{
private:
    vector <string> vec;
public:
    VectorNanotime(DataInputStream &in)
        :Vectorr(in)
    {
        int size = Vectorr::getRow() * Vectorr::getClm();
        vec.reserve(size);
        for (int i = 0; i < size; i++)
        {
            long long temp;
            in.readLong(temp);
            string nanotime_str = Utill::ParseNanotime(temp);
            vec.push_back(nanotime_str);
            if (temp < DDB_NULL_LONG)
            {
                Vectorr::getNAIndex().push_back(i+1);
            }
        }
    }
    ~VectorNanotime() {}

    void* getVector() {return (void *)(&vec);}
};

class VectorNanotimestamp : public Vectorr
{
private:
    vector <string> vec;
public:
    VectorNanotimestamp(DataInputStream &in)
        :Vectorr(in)
    {
        int size = Vectorr::getRow() * Vectorr::getClm();
        vec.reserve(size);
        for (int i = 0; i < size; i++)
        {
            long long temp;
            in.readLong(temp);
            string nanotimestamp_str = Utill::ParseNanotimestamp(temp);
            vec.push_back(nanotimestamp_str);
            if (temp < DDB_NULL_LONG)
            {
                Vectorr::getNAIndex().push_back(i+1);
            }
        }
    }
    ~VectorNanotimestamp() {}

    void* getVector() {return (void *)(&vec);}
};

int CreateVector(Vectorr*& vector_ptr, int data_type, DataInputStream& in)
{
    // cout << data_type << endl;
    switch(data_type)
    {
        case DATA_TYPE::DT_BOOL:
            vector_ptr = new VectorBool(in);
            return VECTOR_LOGICAL;

        case DATA_TYPE::DT_INT:
            vector_ptr = new VectorInt(in);
            return VECTOR_INTEGER;

        case DATA_TYPE::DT_SHORT: 
            vector_ptr = new VectorShort(in);
            return VECTOR_INTEGER;
            
        case DATA_TYPE::DT_DOUBLE:
            vector_ptr = new VectorDouble(in);
            return VECTOR_NUMERIC;

        case DATA_TYPE::DT_LONG: 
            vector_ptr = new VectorLong(in);
            return VECTOR_NUMERIC;

        case DATA_TYPE::DT_FLOAT: 
            vector_ptr = new VectorFloat(in);
            return VECTOR_NUMERIC;

        case DATA_TYPE::DT_CHAR:
            vector_ptr = new VectorChar(in);
            return VECTOR_CHARACTER;

        case DATA_TYPE::DT_STRING:
            vector_ptr = new VectorString(in);
            return VECTOR_CHARACTER;

        case DATA_TYPE::DT_SYMBOL:
            vector_ptr = new VectorString(in);
            return VECTOR_CHARACTER;

        case DATA_TYPE::DT_DATE: 
            vector_ptr = new VectorDate(in);
            return VECTOR_DATE;

        case DATA_TYPE::DT_MONTH:
            vector_ptr = new VectorMonth(in);
            return VECTOR_DATE;

        case DATA_TYPE::DT_DATETIME: 
            vector_ptr = new VectorDateTime(in);
            return VECTOR_DATETIME;

        case DATA_TYPE::DT_TIME:
            vector_ptr = new VectorTime(in);
            return VECTOR_DATETIME;

        case DATA_TYPE::DT_MINUTE:
            vector_ptr = new VectorMinute(in);
            return VECTOR_DATETIME;

        case DATA_TYPE::DT_SECOND:
            vector_ptr = new VectorSecond(in);
            return VECTOR_DATETIME;

        case DATA_TYPE::DT_TIMESTAMP:
            vector_ptr = new VectorTimestamp(in);
            return VECTOR_DATETIME;

        case DATA_TYPE::DT_NANOTIME:
            vector_ptr = new VectorNanotime(in);
            return VECTOR_DATETIME;

        case DATA_TYPE::DT_NANOTIMESTAMP:
            vector_ptr = new VectorNanotimestamp(in);
            return VECTOR_DATETIME;
            
        default:
            // cout << "UNSURPORT VECTOR TYPE" << endl;
            break;
    }

    return VOIDD;
}

#endif