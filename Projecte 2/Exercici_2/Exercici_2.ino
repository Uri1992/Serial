 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************

int a = 3;
int b = 4;
int h ;

 //*******  Setup  ********************************************************
 void setup()
 {
    Serial.begin(9600); 
   
    Serial.print("Lets calculate a hypoteneuse"); 
    Serial.println();  
    Serial.print("a = ");
    Serial.println(a);
    Serial.print("b = ");
    Serial.println(b);   
  
    h = sqrt(a*a + b*b);
    
    Serial.print("h = ");      
    Serial.println(h);
 }


 //******  Loop  **********************************************************
 void loop ()
 {
  
 }
  
  
