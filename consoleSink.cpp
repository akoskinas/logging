// this file contains the definitions of the helper functions of the consoleSink class

// includes
#include <iostream>
#include "consoleSink.h"

myLoggingSystem::ConsoleSink::ConsoleSink()
{
    std::cout << "calling consoleSink constructor " << std::endl;
}

void myLoggingSystem::ConsoleSink::logMessage(const std::string& outputMsg)
{
    std::cout << "logging to the console the message: " << outputMsg << std::endl;
}

void myLoggingSystem::ConsoleSink::Installed()
{
    // do a meaningful check //
    std::cout << "the ConsoleSink was installed successfully" << std::endl;
    status = SinkStatus::OK;
}

myLoggingSystem::ConsoleSink::~ConsoleSink()
{
    std::cout << "calling consoleSink destructor " << std::endl;
}