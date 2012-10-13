#ifndef STUDENTSCORE_H
#define STUDENTSCORE_H

#include <string>

/* Non sempre e' possibile utilizzare l'assegnamento membro a membro; mediante
la classe StudentScore si evidenzia questa problematica. */

const double DEFAULT_SCORE = 0.0;

class StudentScore
{
    public:
        // Costruttore
        StudentScore(string name, int num_scores);
        // Costruttore di copia
        StudentScore(const StudentScore &object);
        // Distruttore
        ~StudentScore() { delete [] test_scores; };
        
        // Setta un valore per il punteggio del test
        void setTestScore(double score, int index){test_scores[index] = score;};
        
        // Setta il nome dello studente
        void setStudentName(string name) { student_name = name; };
        
        // Ritorna il nome dello studente
        string getStudentName() const { return student_name; };
        
        // Ritorna il numero di punteggi del test
        int getNumTestScores() const { return num_test_scores; };

        // Ritorna uno specifico punteggio relativo al test
        double getTestScore(int index) const { return test_scores[index]; };

        // Ridefinizione operatore =
        void operator=(const StudentScore &right_side);

    private:
        string student_name;    // Nome dello studente
        double *test_scores;    // Punta ad un array dei punteggi dei test
        int num_test_scores;    // Numero dei punteggi dei test

        // Funzione atta alla creazione di un array di punteggi di test
        void createTestScore(int size)
        {
            num_test_scores = size;
            test_scores = new double[size];

            // Inizializza ciascun elemento dell'array a DEFAULT_SCORE
            for (int i=0; i<size; i++)
                test_scores[i] = DEFAULT_SCORE;
        }
};

#endif
