#include "mySerial.h"
#include <time.h> 
#include "ros/ros.h"

class ControleSerial{
clock_t t;
 mySerial serial;
 
 public:
 ControleSerial():serial("/dev/ttyACM0", 9600){
} 

 void abrir(){
   
  // t = clock();
  serial.Send('A');
  
  
}
 void fechar(){
	//float segundos_anterior =(((float)t)/CLOCKS_PER_SEC);
	//float segundos_atual = (((float)clock())/CLOCKS_PER_SEC);
	//ROS_INFO("%f %f %f", segundos_anterior, segundos_atual, segundos_atual - segundos_anterior );
 	 //if(segundos_atual - segundos_anterior > 0.01){
 		 serial.Send('F'); 
	//}
}

};
