// this file contains the declarations for the sink class and its helper functions

// includes
#pragma once
#include <iostream>

namespace myLoggingSystem{

// scoped enum declaration
enum class SinkStatus
{
    OK, NotOK
};

// Sink class declaration
class Sink
{
public:
    virtual void logMessage(const std::string& outputMsg)=0;
    virtual void Installed()=0;
    virtual ~Sink()=0;

protected:
    SinkStatus status{SinkStatus::NotOK};
};

// helper functions declaration
void installSink(Sink& currentSink);
void sinkLog(Sink& currentSink, const std::string& msg);


} // end of myLoggingSystem namespace