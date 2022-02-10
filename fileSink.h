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
    
    //Q1: is the destructor is NOT needed for the rest to work??
    //Q2: how to deal with include files?? 
    //Q3: vs studio code and building!


    ~FileSink();
private:
    std::string path;
};

} // end of myLoggingSystem namespace