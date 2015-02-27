 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************

float indicador = 44;

 //*******  Setup  ********************************************************
  void setup()               
{
   Serial.begin(9600);     

  if ( indicador < 3.5)
  {
    Serial.println("Qualificacio energetica A");
  } 
  else if (indicador < 6.5)
  {
    Serial.println("Qualificacio energetica B");
  }
  else if ( indicador < 11.1)
  {
    Serial.println("Qualificacio energetica C");
  } 

  else if ( indicador < 17.7)
  {
    Serial.println("Qualificacio energetica C");
  } 
  
  else if ( indicador < 38.2)
  {
    Serial.println("Qualificacio energetica D");
  } 
  
  else if ( indicador < 43.2)
  {
    Serial.println("Qualificacio energetica E");
  } 
  
  else if ( indicador < 43.2)
  {
    Serial.println("Qualificacio energetica F");
  } 
  
  else
  {
    Serial.println("Qualificacio energetica G");
  } 
 }

 //******  Loop  **********************************************************
 void loop ()
 {
  
 }
  
  
