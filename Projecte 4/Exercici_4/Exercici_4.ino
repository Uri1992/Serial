 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************

float indicador = 35;

 //*******  Setup  ********************************************************
  void setup()               
{
   Serial.begin(9600);     

  if ( indicador < 3.5)
  {
    Serial.println("Qualificacio energetica A");
  } 

  if ( indicador < 6.5 && indicador >= 3.5)
  {
    Serial.println("Qualificacio energetica B");
  } 

  if ( indicador < 11.1 && indicador >= 6.5)
  {
    Serial.println("Qualificacio energetica C");
  } 
  
  if ( indicador < 17.7 && indicador >= 11.1)
  {
    Serial.println("Qualificacio energetica D");
  } 
  
  if ( indicador < 38.2 && indicador >= 17.7)
  {
    Serial.println("Qualificacio energetica E");
  } 
  
  if ( indicador < 43.2 && indicador >= 38.2)
  {
    Serial.println("Qualificacio energetica F");
  } 
  
  if ( indicador >= 43.2 && indicador >= 43.2)
  {
    Serial.println("Qualificacio energetica G");
  } 
  
 }

 //******  Loop  **********************************************************
 void loop ()
 {
  
 }
  
  
