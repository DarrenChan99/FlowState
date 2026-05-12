# PlantVision

Plant Vision is a data driven project that aims to use onboard sensors to display useful information and warnings to the user like a predictive watering algorithm and CO2 threshold monitor to help optimally track and water plants and improve productivity through elevated CO2 level warnings, signaling to the user it might be time to step outside.   

## BOM
| Component | Description | Part Number | Source | Qty | Notes |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **USB-C** | 16-pin (USB 2.0), Top Mount, Right Angle | **USB4105-GF-A** | DigiKey | 1 | Exact match for HRO footprint. 5A Rated. |
| **CO2 / Temp / Hum** | Sensirion SCD41 Photoacoustic Sensor | **SCD41** | AliExpress | 1 | High accuracy air quality sensing (I2C). |
| **Microcontroller** | ESP32 DevKit V1 (Narrow 30-Pin) | **ESP-WROOM-32** | Amazon | 1 | Dual-core processor with Wi-Fi/Bluetooth. |
| **Voltage Regulator** | 3.3V 800mA LDO (TO-220) | **LD1117V33** | DigiKey | 1 | Converts 5V USB power to 3.3V. |
| **Input Cap (C1)** | 10µF 25V Electrolytic Radial | **860020472003** | DigiKey | 1 | Bulk filter for 5V rail (Würth ATG5). |
| **Output Cap (C2)** | 47µF 16V Electrolytic Radial | **860010372004** | DigiKey | 1 | Stabilizes 3.3V rail (Würth ATG8). |
| **Bypass Cap (C3)** | 100nF 50V X7R Ceramic Radial | **K104K10X7RF5UH5**| DigiKey | 1 | High-frequency noise filter (Vishay). |
| **Resistors** | 5.1k Ohm 1/4W 1% Metal Film | **MFR-25FTE52-5K1**| DigiKey | 2 | Required for SDA/SCL data stability. |
| **Soil Sensor** | Capacitive Moisture Sensor v1.2 | **Generic** | Amazon | 1 | Corrosion-resistant soil tracking. |
| **LCD Touchscreen** | 2.8" or 3.5" TFT SPI Display | **ILI9341** | Amazon | 1 | User interface and data visualization. |
| **Solder Wire** | 0.6mm 63/37 Rosin Core | **Generic** | Amazon | 1 | Precision gauge for USB-C soldering. |
| **Custom PCB** | 1.6mm thick, 2 layer | **Generic** | JLPCB | 1 | Wiring |

