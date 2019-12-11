#include "ros/ros.h"
#include "ControleSerial.h"
#include "std_msgs/String.h"

ControleSerial cs;



void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
  //ROS_INFO("I heard: [%s]", msg->data.c_str());
  	if (msg->data.compare("A")==0){
 			cs.abrir();
	}
 	if(msg->data.compare("F")==0){
    			cs.fechar();
	}	
}

int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "noArduino");

  ros::NodeHandle n;

  ros::Subscriber sub = n.subscribe("entradaArduino", 1000, chatterCallback);

  ros::spin();

  return 0;
}
