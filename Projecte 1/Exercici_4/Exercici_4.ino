 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************


 //*******  Setup  ********************************************************
 void setup()
 {
  Serial.begin(9600);  //Obre el port serie a 9600 bps 
  Serial.println("Escull el numero de l'operacio que vols realitzar?"); 
  Serial.println("1.Comprovar numero de targeta de credit");  //Mostra per pantalla "Hello world"
  Serial.println("2.Comprovar numero de compte bancari");
  Serial.println("3.Buscar un digit perdut de la targeta de credit");  
 }


 //******  Loop  **********************************************************
 void loop ()
 {
   
 }
  
  
