/*

  WiFi UDP Send and Receive String

 This sketch wait an UDP packet on localPort using a WiFi shield.

 When a packet is received an Acknowledge packet is sent to the client on port remotePort

 Circuit:

 * WiFi shield attached

 created 30 December 2012

 by dlf (Metodo2 srl)

 */

#include <SPI.h>
#include <WiFi.h>
#include <WiFiUdp.h>

int status = WL_IDLE_STATUS;
char ssid[] = "Virenverbreiter";     //  your network SSID (name)
char pass[] = "41441846345868142445";  // your network password (use for WPA, or use as key for WEP)
int keyIndex = 0;                // your network key Index number (needed only for WEP)

unsigned int localPort = 2390;  // local port to listen on

char packetBuffer[255];               //buffer to hold incoming packet
char ReplyBuffer[] = "acknowledged";  // a string to send back

WiFiUDP Udp;

void setup() {

  //Initialize serial and wait for port to open:

  Serial.begin(9600);

  while (!Serial) {

    ;  // wait for serial port to connect. Needed for native USB port only
  }

  // check for the presence of the shield:

  if (WiFi.status() == WL_NO_SHIELD) {

    Serial.println("WiFi shield not present");

    // don't continue:

    while (true)
      ;
  }

  // attempt to connect to Wifi network:

  while (status != WL_CONNECTED) {

    Serial.print("Attempting to connect to SSID: ");

    Serial.println(ssid);

    // Connect to WPA/WPA2 network. Change this line if using open or WEP network:

    status = WiFi.begin(ssid, pass);

    // wait 10 seconds for connection:

    delay(10000);

    Serial.println(WiFi.status());
  }

  Serial.println("Connected to wifi");

  Serial.println("\nStarting connection to server...");

  // if you get a connection, report back via serial:

  Udp.begin(localPort);
}

void loop() {

}