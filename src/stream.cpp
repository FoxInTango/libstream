#include "stream.h"
using namespace foxintango;

Stream::Stream(){}
Stream::Stream(const URL& url){}
Stream::~Stream(){}

bool Stream::readable() {
    return false;
}

bool Stream::writeable(){
    return false;
}

int Stream::read(const char* buffer, const unsigned int& size) { return 0; }
int Stream::write(const char* buffer, const unsigned int& size) { return 0; }

Unicode Stream::operator [](const Index& index){ return 0; }