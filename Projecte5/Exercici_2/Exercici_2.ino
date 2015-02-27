 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************

int valor;           

 //*******  Setup  ********************************************************
  void setup()               
 {  
  Serial.begin(9600);  
  Serial.print("Entrar un numero, ");   
 }
 //******  Loop  **********************************************************
 void loop ()
 {
   while (Serial.available() > 0) {  
    valor = Serial.parseFloat(); 
    Serial.print(valor);
    if (valor % 2 == 0)
      {
      Serial.println(" es parell");  
      }
    
    else 
      { 
      Serial.println(" es senar");
      }
    Serial.println("");
  }
 }
  
  
