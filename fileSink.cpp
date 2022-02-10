// this file contains the definitions of the helper functions of the fileSink class

// includes
#include <iostream>
#include "fileSink.h"

// sample implementation for FileSink ctor
myLoggingSystem::FileSink::FileSink(const std::string& outputPath) : path{outputPath}
{
    std::cout << "the output path is " << path << std::endl;
}

void myLoggingSystem::FileSink::logMessage(const std::string& outputMsg)
{
    std::cout << "logging to the file the message:" << outputMsg << std::endl;
}

void myLoggingSystem::FileSink::Installed()
{
    // do a meaningful check //
    std::cout << "the FileSink :" << path << "was installed successfully" << std::endl;
    status = SinkStatus::OK;
}

myLoggingSystem::FileSink::~FileSink()
{
    std::cout << "destructor called" << std::endl;
}