using namespace std;                                                                                                                                                      
                                                                                                                                                                          
int main() {                                                                                                                                                              
        // OPERATORI ARITMETICI                                                                                                                                           
        // + somma                                                                                                                                                        
        // - sottrazione                                                                                                                                                  
        // * moltiplicazione                                                                                                                                              
        // / divisione                                                                                                                                                    
        // % resto                                                                                                                                                        
        int var = 5, var1 = 10, var2 = 22;                                                                                                                                
                                                                                                                                                                          
        // Operatore somma                                                                                                                                                
        int var3 = var1 + var2;                                                                                                                                           
                                                                                                                                                                          
        // Operatore sottrazione                                                                                                                                          
        int var4 = var3 - var2;                                                                                                                                           
                                                                                                                                                                          
        // Operatore moltiplicazione                                                                                                                                      
        int var5 = var1 * var2;                                                                                                                                           
                                                                                                                                                                          
        // Operatore divisione                                                                                                                                            
        // Il risultato della divisione tra due interi dara' un intero, qualora il                                                                                        
        // quoziente contenesse una parte frazionaria, sara' troncata.                                                                                                    
        int var6 = var2 / var1;                                                                                                                                           
                                                                                                                                                                          
        // Operatore resto o modulo                                                                                                                                       
        // Calcola il resto della divisione tra interi, applicabile solo a:                                                                                               
        // short; int; long; char.                                                                                                                                        
        int var7 = var2 % var1;                                                                                                                                           
        int var8 = 21 % -5;             // 1 o -1 dipendente dalla macchina                                                                                               
                                                                                                                                                                          
        // Eccezioni aritmetiche                                                                                                                                          
        // Un char puo' contenere 8 bit, per cui un valore che e' compreso tra 127   
      // e 255, byte invece supera questo valore andando in overflow.                                                                                                   
        char byte = 32;                                                                                                                                                   
        int val = 8;                                                                                                                                                      
        byte = val * byte;                                                                                                                                                
                                                                                                                                                                          
        // Conversioni automatiche                                                                                                                                        
        double dbl_val = 10.0;                                                                                                                                            
        int int_val = 20;                                                                                                                                                 
        int valore = int_val / dbl_val;         // Convertito ad intero                                                                                                   
                                                                                                                                                                          
        return(0);                                                                                                                                                        
}                         
