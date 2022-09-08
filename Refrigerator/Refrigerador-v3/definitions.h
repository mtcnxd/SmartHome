/*
  VARS DEFINITIONS
*/
int hoursToDefrost[] = {6, 12, 18, 23};
int defrostTime   = 660; // seconds (11 mins)
int configTemp    = 400; // ADC value

bool isPushPressed = false;
int minimunTemp = 15;
int maximumTemp = 20;

static int pinCompressor = 0;
static int pinHeater = 2;  // pin D3
static int pinPush   = 16; // pin D0

unsigned long previousMillis = 0;
const long interval = 1000;
int previousMinutes = 0;

const char* mqttServer = "io.adafruit.com";
const char* mqttUser   = "mtcnxd";
const char* mqttPassword  = "f0dd74b723d90a2ca81a2fc6af57c5e0dc6982e4";
const String mqttClientId = "mtc.nxd@gmail.com";

char payload[50];
