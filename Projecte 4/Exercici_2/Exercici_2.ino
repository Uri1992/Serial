 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************

int tempAigua = 101;

 //*******  Setup  ********************************************************
  void setup()               
{
   Serial.begin(9600);     

  if ( tempAigua >= 100)  //Si "tempAigua" és més gran que 100 fes una acció
  {
    Serial.print("Aigua supera els 100C, esta bullint!");  /*Escriu el text
    si es compleix la condicció del "if"*/
  } 
  else
    {
    Serial.print("Aigua encara no bull");
    }
 }

 //******  Loop  **********************************************************
 void loop ()
 {
  
 }
  
  
