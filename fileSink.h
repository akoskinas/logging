// this file contains the declarations for the fileSink class and its helper functions

// includes
#pragma once
#include <iostream>
#include "sink.h"

namespace myLoggingSystem{

class FileSink : public Sink
{
public:    
    void logMessage(const std::string& outputMsg) override;
    FileSink(const std::string& outputPath);
    virtual void Installed() override;
    
    // is the destructor needed?
    ~FileSink();
private:
    std::string path;
};

} // end of myLoggingSystem namespace