 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************

int a = 5;
int b = 10;
int c = 20;

 //*******  Setup  ********************************************************
 void setup()
 {
    Serial.begin(9600); 
   
    Serial.print("a = ");
    Serial.println(a);
    Serial.print("b = ");
    Serial.println(b);
    Serial.print("c = ");
    Serial.println(c);
    
    Serial.print("a + b = ");       
    Serial.println(a + b);

    Serial.print("a * c = ");    
    Serial.println(a * c);
  
    Serial.print("c / b = ");     
    Serial.println(c / b);

    Serial.print("c % b = ");       
    Serial.println(c % b);
  
    Serial.print("b - c = ");      
    Serial.println(b - c);

 }


 //******  Loop  **********************************************************
 void loop ()
 {
  
 }
  
  
