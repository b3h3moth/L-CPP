#include <iostream>
#include <string>
using namespace std;

#include "UnixServer.h"

UnixServer::UnixServer()
{
    operating_system = "anon";
    release = "stable";
    id_machine = 0;
}

UnixServer::UnixServer(string os, string rel, int id)
{
    operating_system = os;
    release = rel;
    id_machine = id;
}

void UnixServer::setSystemOS(string os)
{
    operating_system = os;
}

void UnixServer::setRelease(string rel)
{
    release = rel;
}

void UnixServer::setSystemID(int id)
{
    id_machine = id;
}

string UnixServer::getSystemOS() const
{
    return operating_system;
}

string UnixServer::getRelease() const
{
    return release;
}

int UnixServer::getSystemID() const
{
    return id_machine;
}
