# PlantVision
Plant Vision is a data driven project that aims to use onboard sensors to display useful information and warnings to the user like a predictive watering algorithm and CO2 threshold monitor to help optimally track and water plants and improve productivity through elevated CO2 level warnings, signaling to the user it might be time to step outside.   

# Why?
Recently one of my plants died to unknown factors and I realized that I was guessing when to water and how much sun to give it. At this same time I wanted to learn c++, microcontrollers, and data based algorithms to build my skills. So after some brainstorming this project perfectly encapsulated my needs.

### Gallery

#### Schematic
<img src="https://github.com/user-attachments/assets/b36f6d5f-a203-4745-b305-b1b13fe54f30" alt="Schematic" width="502" height="332" />

#### PCB Layout
<img src="https://github.com/user-attachments/assets/f6de79b2-5e7b-46e7-ab3e-c3a270df783c" alt="PCB Layout" width="298" height="304" />

#### 3D Render
<img src="https://github.com/user-attachments/assets/c9df3d69-6842-409e-ad1e-d1bebac9e79f" alt="3D Render" width="294" height="274" />

#### CAD View (Front)
<img src="https://github.com/user-attachments/assets/fe03f22b-82d8-4df8-92ae-3cafea43061f" alt="CAD Front" width="180" height="238" />

#### CAD View (Back)
<img src="https://github.com/user-attachments/assets/94680365-9b8b-4365-9ac1-94f1e800dcf2" alt="CAD Back" width="181" height="261" />


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

