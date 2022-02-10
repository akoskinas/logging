// this file contains the definitions of the helper functions of the sink class
// sink class itself doesn't have a definition because it is a virtual function

// includes
#include "sink.h"

// sample implementation for installSink
void myLoggingSystem::installSink(myLoggingSystem::Sink& currentSink)
{
    currentSink.Installed();
}

// sample implementation for sinkLog
void myLoggingSystem::sinkLog(myLoggingSystem::Sink& currentSink, const std::string& msg)
{
    currentSink.logMessage(msg);
}