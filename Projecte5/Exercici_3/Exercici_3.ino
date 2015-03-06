 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************

int valor;           
int xifres;
int resultat;

 //*******  Setup  ********************************************************
  void setup()               
 {  
  Serial.begin(9600);  
  Serial.println("Entrar un numero");   
 }
 //******  Loop  **********************************************************
 void loop ()
 {
   while (Serial.available() > 0) {  
    valor = Serial.parseInt(); 
    
    Serial.print("El numero "); 
    Serial.print(valor);  
    Serial.print(" te ");
    
    resultat = valor;
    
    for  (xifres = 0; resultat != 0; xifres++)
    {
      resultat = valor / 10 ;
      valor = valor / 10;
    }
    
    Serial.print(xifres);
    Serial.println(" xifres");
    
    Serial.read() == '\n';
    Serial.println("");
    Serial.println("Entrar un numero");
  }
 }
  
  
