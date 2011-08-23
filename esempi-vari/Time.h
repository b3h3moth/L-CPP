#ifndef TIME_H
#define TIME_H

class Time
{
	public:
		Time();		// Costruttore

		void setTime(int h, int m, int s);	// Setta l'orario
		void printUniversal();				// Ora in formato universale
		void printStandard();				// Ora in formato standard

	private:
		int hour;		// 0 - 23
		int minute;		// 0 - 59
		int second;		// 0 - 59
};

#endif
