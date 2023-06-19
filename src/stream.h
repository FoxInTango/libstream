#ifndef _STREAM_H_
#define _STREAM_H_
#include <liburl/liburl.h>
#include <libstring/libstring.h>
#include <libcpp/libcpp.h>
EXTERN_C_BEGIN
namespaceBegin(foxintango)

class foxintangoAPI StreamReader{};
class foxintangoAPI StreamWriter{};
class foxintangoAPI Stream
{
public:
    Stream();
    Stream(const URL& url);
    virtual ~Stream();
public:
    virtual bool readable();
    virtual bool writeable();
    virtual int read(const char* buffer,const unsigned int& size);
    virtual int write(const char* buffer,const unsigned int& size);
public:
    virtual Unicode operator [](const Index& index);
};
namespaceEnd
EXTERN_C_END
#endif
