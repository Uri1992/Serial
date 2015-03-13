 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************

int cm;

 //*******  Setup  ********************************************************
  void setup()               
 {  
  Serial.begin(9600);  
  Serial.println("Quina mida en cm?");
 }
 //******  Loop  **********************************************************
 void loop ()
 {
    while (Serial.available() > 0) {  
    cm = Serial.parseInt(); 
    Serial.print("El cargol amb mida de ");
    Serial.print(cm);
    Serial.print(" cm es ");
    
    if (cm < 3 && cm > 0)
      {
      Serial.print("petit");
      }
      
    else if (cm < 5 && cm > 2)
      {
      Serial.print("mitja");
      } 
     
    else if (cm < 8 && cm > 4) 
      {
      Serial.print("gran");
      }  
        
    else if (cm < 11 && cm > 7)
      {
      Serial.print("molt gran");
      }
    
    else
      {
      Serial.print("incorrecte"); 
      } 
    
    Serial.read() == '\n';
    Serial.println("");
    Serial.println("Quina mida en cm?");
  }
 }
  
  
