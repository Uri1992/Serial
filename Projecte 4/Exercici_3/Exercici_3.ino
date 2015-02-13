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

  if ( tempAigua > 100)  //Si "tempAigua" és més gran que 100 fes una acció
  {
    Serial.println("Aigua supera els 100C, esta bullint!");  /*Escriu el 
    text si es compleix la condicció del "if"*/
  } 
  
    if ( tempAigua == 100)  //Si "tempAigua" és igual a 100 fes una acció
  {
    Serial.println("Aigua a 100C");  /*Escriu el text si es compleix la
    condicció del "if"*/
  } 
  
  if ( tempAigua < 100 && tempAigua >= 90)  /*Si "tempAigua" és més petit 
  que 100 i més gran o igual de 90 fes una acció*/
  {
    Serial.println("Aigua a punt de bullir");  /*Escriu el text si es 
    compleix la condicció del "if"*/
  } 
  
  if ( tempAigua < 90)  //Si "tempAigua" és més petit de 90 fes una acció
  {
    Serial.println("Aigua encara no bull");  /*Escriu el text
    si es compleix la condicció del "if"*/
  } 
 }

 //******  Loop  **********************************************************
 void loop ()
 {
  
 }
  
  
