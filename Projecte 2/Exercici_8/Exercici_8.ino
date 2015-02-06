 /*************************************************************************
 **                                                                      **
 **                 Descripció programa                                  **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************

long drive_Gb = 100;
long drive_Mb;
long drive_Kb;
long real_Drive_Mb;
long real_Drive_Kb;

 //*******  Setup  ********************************************************
 void setup()
 {
    Serial.begin(9600); 
    Serial.print("Your HD is ");
    Serial.println(drive_Gb);
  
    drive_Mb = 1024 * drive_Gb;
    drive_Kb = 1024 * drive_Mb;
    real_Drive_Mb = 1000 * drive_Gb;
    real_Drive_Kb = 1000 * real_Drive_Mb;
    
    Serial.print("In theory, it can store ");
    Serial.print(drive_Mb);
    Serial.print("Megabytes, ");
    Serial.print(drive_Kb);
    Serial.println("Kilobytes.");
    Serial.print("But it really only stores ");
    Serial.print(real_Drive_Mb);
    Serial.print("Kilobytes.");
    Serial.print(real_Drive_Kb);
    Serial.println("Kilobytes");
    Serial.print("You are missing ");
    Serial.print(drive_Kb - real_Drive_Kb );
    Serial.println("Kilobytes!");
 }


 //******  Loop  **********************************************************
 void loop ()
 {
  
 }
  
  
