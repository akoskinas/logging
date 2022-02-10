// this file contains the declarations for the consoleSink class and its helper functions

// includes
#pragma once
#include <iostream>
#include "sink.h"

namespace myLoggingSystem{

class ConsoleSink : public Sink
{
public:
    void logMessage(const std::string& outputMsg) override;
    void Installed() override;
    ConsoleSink();
    
    // is the destructor needed?
    ~ConsoleSink();
};

} // end of myLoggingSystem namespace