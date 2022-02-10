// this file contains the main function

// includes
#include "fileSink.h"
#include "consoleSink.h"


int main () {
    myLoggingSystem::FileSink fs("somepath.txt");
    //myLoggingSystem::ConsoleSink cs;

    //myLoggingSystem::installSink(fs);
    //myLoggingSystem::installSink(cs);

    //myLoggingSystem::sinkLog(fs, "test1");
    //myLoggingSystem::sinkLog(cs, "test2");

    return 0;
}