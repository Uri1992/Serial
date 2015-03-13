 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************

int numero;

 //*******  Setup  ********************************************************
  void setup()               
 {  
  Serial.begin(9600);  
  Serial.print("Entrar numeros un per un (0 per acabar): ");
 }
 //******  Loop  **********************************************************
 void loop ()
 {
   while (Serial.available() > 0) {  
     numero = Serial.parseInt();
     Serial.print(numero);
     Serial.print("-");
   
   if (numero != 0)
    {
    for (int i = 0; numero == 0; i++)
      {
      Serial.print(numero);
      Serial.print("-");
      }
    }
    
    Serial.read() == '\n';
  }
 }
  
  
