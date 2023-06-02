#include "stream.h"
using namespace foxintango;

Stream::Stream(){}
Stream::~Stream(){}

bool Stream::readable() {
    return false;
}

int Stream::read(const char* buffer, const unsigned int& size) { return 0; }
int Stream::write(const char* buffer, const unsigned int& size) { return 0; }