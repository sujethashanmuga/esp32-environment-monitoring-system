
#include <DHT.h>

// Pin configuration
#define DHT_PIN 15
#define DHT_TYPE DHT22
#define LED_PIN 2

// Temperature alert threshold
const float TEMP_LIMIT = 30.0;

// Initialize DHT22 sensor
DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  dht.begin();

  Serial.println("==================================");
  Serial.println(" ESP32 ENVIRONMENTAL MONITORING");
  Serial.println("==================================");
  Serial.println("System initialized successfully!");
  Serial.println();
}

void loop() {
  // Read temperature and humidity
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Handle invalid sensor readings
  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("ERROR: DHT22 sensor reading failed.");
    digitalWrite(LED_PIN, LOW);
    delay(2000);
    return;
  }

  // Display sensor data
  Serial.print("Temperature: ");
  Serial.print(temperature, 1);
  Serial.print(" C | Humidity: ");
  Serial.print(humidity, 1);
  Serial.println(" %");

  // Check temperature threshold
  if (temperature > TEMP_LIMIT) {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("ALERT: High temperature detected!");
    Serial.println("LED STATUS: ON");
  } else {
    digitalWrite(LED_PIN, LOW);
    Serial.println("STATUS: Temperature is normal.");
    Serial.println("LED STATUS: OFF");
  }

  Serial.println("----------------------------------");
  delay(2000);
}

