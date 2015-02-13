 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************

int num = 64;

 //*******  Setup  ********************************************************
  void setup()               
{
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.println("Different formats for the same number:");

  Serial.write(num);
  Serial.println();
  
  Serial.println(num);
  Serial.println(num,DEC);  //Mostra en decimals
  
  Serial.println(num,BIN);  //Mostra en binari
  
  Serial.println(num,HEX);  //Mostra en hexa
  
  Serial.println(num,OCT);  //Mostra en octaus
 }


 //******  Loop  **********************************************************
 void loop (){
  
 }
  
  
