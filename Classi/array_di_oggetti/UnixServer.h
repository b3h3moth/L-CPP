#ifndef UNIXSERVER_H
#define UNIXSERVER_H

class UnixServer
{
    public:
        // Costrutori
        UnixServer();
        UnixServer(string os, string rel, int id);

        void setSystemOS(string os);
        void setRelease(string rel);
        void setSystemID(int id);

        string getSystemOS() const;
        string getRelease() const;
        int getSystemID() const;

    private:
        string operating_system;
        string release;
        int id_machine;
};

#endif
