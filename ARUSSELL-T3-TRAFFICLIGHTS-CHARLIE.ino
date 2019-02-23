
#define GREEN 4               // GREEN leds Anode pin 4
#define AMBER 5               // AMBER leds Anode pin 5
#define RED 6                 // RED leds Anode pin 6
#define NSCATH 7              // NORTH SOUTH leds cathode
#define WECATH 8              // WEST EAST leds cathode

 int TLABEL = 100;            // VARIABLE integer TO TIME LIGHTS LIT STATE

  void setup() {
                              // Initialise pins High Impedance
  pinMode(RED, INPUT);        // High Impedance on RED leds Anode
  pinMode(AMBER, INPUT);      // High Impedance on AMBER leds Anode
  pinMode(GREEN, INPUT);      // High Impedance on GREEN leds Anode
  pinMode(NSCATH, INPUT);     // NORTH SOUTH Cathode  High Impedance
  pinMode(WECATH, INPUT);     // WEST EAST Cathode High Impedance  
  }

  void NSRED(){
  
  pinMode(GREEN, INPUT);      // High Impedance on GREEN leds Anode.
  pinMode(AMBER, INPUT);      // High Impedance on AMBER leds Anode.
  pinMode(WECATH, INPUT);     // WEST EAST Cathode, High Impedance.
  pinMode(RED,OUTPUT);        // Change RED Anode from High Impedance to O/P mode, Low Impedance.
  digitalWrite(RED,HIGH);     // +5V to RED leds Anode, NS and WE.
  pinMode(NSCATH,OUTPUT);     // NORTH SOUTH Cathode (Ground) from High Impedance to O/P mode, Low Impedance.
  digitalWrite(NSCATH,LOW);   // NS Cathode write O/P LOW, sink 40mA, completes circuit on  NS RED. ON.
  delay(5);                   // 5 miliseconds, lit for persistance of vision illusion.
    
  digitalWrite(RED,LOW);      // 0V to RED leds Anode. OFF
  pinMode(RED,INPUT);         // RED leds Anode High Impedance.
  pinMode(NSCATH,INPUT);      // NORTH SOUTH Cathode High Impedance.
  }

  void WERED(){
  
  pinMode(GREEN, INPUT);      // High Impedance on GREEN leds Anode.
  pinMode(AMBER, INPUT);      // High Impedance on AMBER leds Anode.
  pinMode(NSCATH, INPUT);     // NORTH SOUTH CATHODE High Impedance.
  pinMode(RED, OUTPUT);       // Change RED Anode from High Impedance, to O/P mode, Low Impedance.
  digitalWrite(RED, HIGH);    // +5v RED leds Anode NS and WE.
  pinMode(WECATH, OUTPUT);    // WEST EAST Cathode (Ground) from High Impedance to O/P mode, Low Impedance.
  digitalWrite(WECATH,LOW);   // WE Cathode write O/P LOW, sink 40mA, completes circuit. WE RED. ON.
  delay(5);                   // 5 miliseconds, lit for persistance of vision illusion.
  
  digitalWrite(RED, LOW);     // 0V to RED leds Anode. OFF.
  pinMode(RED, INPUT);        // RED leds Anode High Impedance.
  pinMode(WECATH, INPUT);     // WEST EAST Cathode High Impedance.
  }

  void NSREDAMBER(){
  
  pinMode(GREEN, INPUT);      // High Impedance on GREEN leds Anode.
  pinMode(WECATH, INPUT);     // WEST EAST Cathode High Impedance.
  pinMode(RED,OUTPUT);        // Change RED Anode from High Impedance to Low Impedance, O/P mode.
  pinMode(AMBER, OUTPUT);     // Change AMBER Anode from High Impedance to Low Impedance, O/P mode.
  digitalWrite(RED,HIGH);     // +5V to RED leds Anode, NS and WE.
  digitalWrite(AMBER,HIGH);   // +5V to AMBER leds Anode, NS and WE.
  pinMode(NSCATH,OUTPUT);     // NORTH SOUTH Cathode (GROUND) from High Impedance to O/P mode, Low Impedance.
  digitalWrite(NSCATH,LOW);   // NS Cathode write O/P LOW, sink 40mA, completes circuit. NS RED, AMBER. ON.
  delay(5);                   // 5 miliseconds, lit for persistance of vision illusion.

  digitalWrite(RED,LOW);      // 0V to RED leds Anode. OFF.
  digitalWrite(AMBER, LOW);   // 0V to AMBER leds Anode. OFF.
  pinMode(RED,INPUT);         // RED leds Anode High Impedance.
  pinMode(AMBER, INPUT);      // AMBER leds Anode High Impedance.
  pinMode(NSCATH,INPUT);      // NORTH SOUTH Cathode High Impedance.
  }

  void WEREDAMBER(){
 
  pinMode(GREEN, INPUT);      // High Impedance on GREEN leds Anode.
  pinMode(NSCATH, INPUT);     // NORT SOUTH Cathode High Impedance.
  pinMode(RED,OUTPUT);        // Change RED from High Impedance to Low Impedance, O/P mode.
  pinMode(AMBER, OUTPUT);     // Change AMBER from High Impedance to Low Impedance, to O/P mode.
  digitalWrite(RED,HIGH);     // +5V to RED leds, NS and WE.
  digitalWrite(AMBER,HIGH);   // +5V to AMBER leds, NS and WE.
  pinMode(WECATH,OUTPUT);     // WEST EAST Cathode (GROUND) from high Impedance to O/P mode, Low Impedance.
  digitalWrite(WECATH,LOW);   // WEST EAST Cathode write O/P LOW, sink 40mA, completes circuit.  WE RED, AMBER. ON.
  delay(5);                   // 5 miliseconds, lit for persistance of vision illusion.

  digitalWrite(RED,LOW);      // 0V to RED leds Anode. OFF.
  digitalWrite(AMBER, LOW);   // 0V to AMBER leds Anode. OFF.
  pinMode(RED,INPUT);         // RED leds Anode High Impedance.
  pinMode(AMBER, INPUT);      // AMBER leds Anode High Impedance.
  pinMode(WECATH,INPUT);      // WEST EAST Cathode High Impedance.
  }
  
  void NSGREEN(){
  
  pinMode(RED, INPUT);         // High Impedance on RED leds Anode
  pinMode(AMBER, INPUT);       // High Impedance on AMBER leds Anode.
  pinMode(WECATH, INPUT);      // WEST EAST Cathode High Impedance
  pinMode(GREEN, OUTPUT);      // Change GREEN Anode from High Impedance to Low Impedance, O/P mode.
  digitalWrite(GREEN, HIGH);   // +5v GREEN leds Anode NS and WE.
  pinMode(NSCATH, OUTPUT);     // NORTH SOUTH Cathode (GROUND) from High Impedance to O/P mode, Low Impedance.
  digitalWrite(NSCATH,LOW);    // NORTH SOUTH Cathode write O/P LOW, sink 40mA, completes circuit. NS GREEN ON.
  delay(5);                    // 5 miliseconds, lit for persistance of vision illusion.

  digitalWrite(GREEN, LOW);    // 0V to GREEN leds Anode. OFF.
  pinMode(GREEN, INPUT);       // GREEN leds Anode High Impedance.
  pinMode(NSCATH,INPUT);       // NORTH SOUTH Cathode High Impedance.
  }

  void WEGREEN(){
  
  pinMode(RED, INPUT);         // High Impedance on RED leds Anode.
  pinMode(AMBER, INPUT);       // High Impedance on AMBER leds Anode.
  pinMode(NSCATH, INPUT);      // NORTH SOUTH Cathode High Impedance.
  pinMode(GREEN, OUTPUT);      // Change GREEN Anode from High Impedance to Low Impedance, O/P mode.
  digitalWrite(GREEN, HIGH);   // +5v GREEN leds Anode NS and WE.
  pinMode(WECATH, OUTPUT);     // WEST EAST Cathode (GROUND) from High Impedance to O/P mode, Low Impedance.
  digitalWrite(WECATH,LOW);    // WEST EAST Cathode write O/P LOW, sink 40mA, completes circuit. WE GREEN ON.
  delay(5);                    // 5 miliseconds, lit for persistance of vision illusion.

  digitalWrite(GREEN, LOW);    // 0V to GREEN leds Anode. OFF.
  pinMode(GREEN, INPUT);       // GREEN leds Anode High Impedance .
  pinMode(WECATH,INPUT);       // WEST EAST Cathode High Impedance.
  }

  void NSAMBER(){
  
  pinMode(RED, INPUT);          // High Impedance on RED leds Anode.
  pinMode(GREEN, INPUT);        // High Impedance on GREEN leds Anode.
  pinMode(WECATH, INPUT);       // WEST EAST Cathode High Impedance.
  pinMode(AMBER, OUTPUT);       // Change AMBER leds from High Impedance to Low Impedance, O/P mode.
  digitalWrite(AMBER,HIGH);     // +5V to AMBER leds, NS and WE.
  pinMode(NSCATH,OUTPUT);       // NORTH SOUTH Cathode (GROUND) from High Impedance to O/P mode, Low Impedance.
  digitalWrite(NSCATH,LOW);     // NORT SOUTH circuit complete, Cathode sinks 400mA. NS AMBER ON.
  delay(5);                     // 5 miliseconds, lit for persistance of vision illusion.
  
  digitalWrite(AMBER,LOW);      // 0V to AMBER leds Anode
  pinMode(AMBER, INPUT);        // AMBER leds Cathode High Impedance.
  pinMode(NSCATH,INPUT);        // NORTH SOUTH Cathode High Impedance. 
  }

  void WEAMBER(){
  
  pinMode(RED, INPUT);          // High Impedance on RED leds Anode.
  pinMode(GREEN, INPUT);        // High Impedance on GREEN leds Anode.
  pinMode(NSCATH, INPUT);       // NORT SOUTH Cathode High Impedance.
  pinMode(AMBER, OUTPUT);       // Change AMBER leds from High Impedance to Low Impedance, O/P mode.
  digitalWrite(AMBER,HIGH);     // +5V to AMBER leds, NS and WE.
  pinMode(WECATH,OUTPUT);       // WEST EAST Cathode (GROUND) from High Impedance to O/P mode, low impedance.
  digitalWrite(WECATH,LOW);     // WEST EAST circuit complete, Cathode sinks 400mA. WE AMBER ON.
  delay(5);                     // 5 miliseconds, lit for persistance of vision illusion.
  
  digitalWrite(AMBER,LOW);      // 0V to AMBER leds Anode. OFF.
  pinMode(AMBER, INPUT);        // AMBER leds Cathode High Impedance.
  pinMode(NSCATH,INPUT);        // NORTH SOUTH Cathode High Impedance.  
  }
                               

void loop() {

//STATE 1. NS RED , WE GREEN
  TLABEL = 300;                       // 3 seconds.
  for(int x = 0; x < TLABEL; x++){    // Create TLABEL/100 seconds loop for mux´d leds

  NSRED();                            // NORTH SOUTH RED ON.
  WEGREEN();                          // WEST EAST GREEN ON.
  }


                        
//STATE 2. NS RED + AMBER, WE AMBER
  TLABEL = 100;                       // 1 second.
  for(int x = 0; x < TLABEL; x++){    // Create TLABEL/100 seconds loop for mux´d leds

  NSREDAMBER();                       // NORTH SOUTH RED, AMBER ON.
  WEAMBER();                          // WEST EAST AMBER ON.
  }

  

//STATE 3. NS GREEN, WE RED
  TLABEL = 300;                       // 3 seconds.
  for(int x = 0; x < TLABEL; x++){    //Create TLABEL/100 seconds loop for mux´d leds
    
    NSGREEN();                        // NORTH SOUTH GREEN ON.
    WERED();                          // WEST EAST RED ON.
  }


//STATE 4. NS AMBER, WE RED & AMBER
  TLABEL = 100;                       // 1 second.
  for(int x = 0; x < TLABEL; x++){    // Create TLABEL/100 seconds loop for mux´d leds

  NSAMBER();                          // NORTH SOUTH RED, AMBER ON.
  WEREDAMBER();                       // WEST EAST AMBER ON.
  }

                            
}
