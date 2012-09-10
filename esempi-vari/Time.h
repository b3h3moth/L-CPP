#ifndef TIME_H
#define TIME_H

class Time
{
    public:
    	Time(int h = 0, int m = 0, int s = 0);	// Costruttore di default
	
	void setTime(int h, int m, int s);	// Setta ora, minuti, secondi
	void setHour(int h);		// Imposta l'ora
	void setMinute(int m);		// Imposta i minuti
	void setSecond(int s);		// Imposta i secondi

	int getHour() const;		// Restituisce l'ora
	int getMinute() const;		// Restituisce i minuti
	int getSecond() const;		// Restituisce i secondi

	void printUniversal() const;	// Ora in formato universale
	void printStandard();		// Ora in formato standard
    
    private:
    	int hour;		// 0 - 23
	int minute;		// 0 - 59
	int second;		// 0 - 59
};

#endif
