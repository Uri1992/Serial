 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************

int comptar = 11;

 //*******  Setup  ********************************************************
  void setup()               
{  
  Serial.begin(9600);      
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)  /*Si "i" és més petit que el valor de
  "comptar" sumarà 1 a "i"*/
  {
    Serial.print(i);
    if  (comptar > i) 
    {
    Serial.print("-");
    }
  }   
 }

 //******  Loop  **********************************************************
 void loop ()
 {
  
 }
  
  
