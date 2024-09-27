# MQ9
**Nguyên tắc hoạt động cảm biến khí dễ cháy MQ-9:**  
Cảm biến MQ-9 (Gas sensor) đo khí CO chuyển thành điện áp đưa ra chân AOUT.  
Biến trở trên Module có chức năng điều chỉnh điện áp tham chiếu (ngưỡng), khi cảm biến MQ-9 phát hiện khí CO đến ngưỡng thì chân DOUT sẽ đảo trạng thái.  

Sơ đồ nối dây với vi điều khiển  

VCC ↔ 2.5V ~ 5.0V  
GND ↔ GND  
AOUT ↔ MCU.IO (dùng tín hiệu analog)  
DOUT ↔ MCU.IO (dùng tín hiệu số)  
