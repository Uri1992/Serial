 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************

float r1, r2;           
float rSerie, rParalel;

 //*******  Setup  ********************************************************
  void setup()               
 {  
  Serial.begin(9600);      
  Serial.println("Entra el valor de R1 i R2 (separats per una coma)");
 }
 //******  Loop  **********************************************************
 void loop ()
 {
    while (Serial.available() > 0)
    {  
    r1 = Serial.parseInt();
    Serial.print("R1 = ");  
    Serial.print(r1);  
    
    r2 = Serial.parseInt();
    Serial.print("  R2 = "); 
    Serial.println(r1);  
    
    if (Serial.read() == '\n') { 
      rSerie = r1 + r2;
      rParalel = 1/((1/r1)+(1/r2));
    }
    Serial.print("Serie = ");
    Serial.print(rSerie);
    Serial.print("  Paralel = ");
    Serial.println(rParalel);
    
    Serial.println("");
    Serial.println("Entra nous valors per R1 i R2");
    Serial.println("");
   }  
 }
  
  
