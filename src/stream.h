#ifndef _STREAM_H_
#define _STREAM_H_
#include <libcpp/libcpp.h>

EXTERN_C_BEGIN
namespaceBegin(foxintango)

class foxintangoAPI Stream
{
public:
    virtual bool readable();
    virtual read();
    virtual write();
};
namespaceEnd
EXTERN_C_END
#endif
