# Vesak_Decoration_2024
**Description**

This Arduino project is designed to control decorative lighting patterns using a 4-channel relay module and 230V 5W bulbs. It is perfect for festivals like Vesak or other celebrations, providing dynamic and customizable light sequences to enhance any event.

**Features**

Predefined lighting patterns for 230V bulbs.    
Uses a 4-channel relay module to safely control high-voltage bulbs. *(The code can be changed and the number of relay modules can be changed as required )*.        
Easy to customize for different sequences or durations.        
Designed for safe operation with proper wiring and components.    

**Requirements**

Arduino board (e.g., Uno, Mega, Nano).  
4-channel relay module.     *(The code can be changed and the number of relay modules can be changed as required )*.             
5W 230V AC bulbs     *(minimum 4 / You can take as many bulbs as you like )*.              
TT wires for high-voltage connections.      
Jumper wires for connecting the Arduino to the relay module.      
Proper power supply for the Arduino.      
Safe casing or insulation for high-voltage components.      

**Installation**

*Clone the repository:*    
    git clone : https://github.com/DahamSathmina/Vesak_Decoration_Codes_2024.git    
Open the .ino file in the Arduino IDE.      
Connect your Arduino board to your computer.      
Upload the code to the Arduino board.      

# Wiring Instructions
<img src="https://github.com/DahamSathmina/Vesak_Decoration_Codes_2024/blob/a64127e0b1f585c327827662c2dae374a5993b43/5w%20Bulb%20Wirering%20Diagram.jpg" alt="image Alt" width="600" height="400">

**Hardware Setup**

Connect the relay module's input pins to the appropriate Arduino digital pins as defined in the code.         
Connect the relay module outputs to the bulbs :            
                                          * Use TT wires to connect the bulbs and ensure proper insulation.      
Power the relay module and Arduino board using their respective power supplies.  
Verify all connections to ensure safe and proper operation.  

**Safety Tips**

Ensure all high-voltage components are insulated and enclosed in a protective case.    
Double-check the wiring to avoid short circuits or damage to components.    
Do not handle the system while it is powered on.    

**Usage**

Power up your Arduino board and relay module.    
The system will execute predefined lighting patterns on the connected bulbs.    
Optionally, modify the code to create custom patterns :         
                                           * Adjust the timing of the sequences.        
                                           * Change the pins for different bulb configurations.      

**Customization**

Feel free to modify the code to :    
                                          * Add new lighting patterns.  
                                          * Integrate additional hardware (e.g., sensors, Bluetooth modules).  
                                          * Adjust timing, sequence order, or relay activation logic.  

**Contribution**

Contributions are welcome! If you have ideas to improve the project, feel free to open an issue or submit a pull request.

# License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
