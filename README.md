# 03.30
 
![Tinkercad Image](/LED3_Practice.png)

<hr/>

## 1. LED Turn On & Off

ㅇㅇ

![Image1](/git_log.PNG)

![Image2](/git_graph.PNG)

|함수|기능|설명|
|------|:---:|---|
|pinMode()|핀 입출력|pinMode(buttonPin, INPUT)<br>pinMode(ledPin, OUTPUT)|
|delay()|딜레이|delay(1000)|
|digitalRead()|읽기|int reading = digitalRead(buttonPin)|
|digitalWrite()|쓰기|digitalWrite(ledPin, ledState)|
|millis()|경과된 시간||

<hr/>

## 2. TimerOne

Timer1이라는 기능을 이용하여 사각 파형을 생성해서 Output을 제어하는 방법을 배웠습니다. 

|함수|기능|설명|
|------|:---:|---|
|Timer1.initialize()|Timer1 초기화||
|Timer1.pwm()|특정한 핀에 사각 파형 생성|Timer1.pwm(pin, duty)<br>duty : 0~1023|
|Timer1.setPeriod()|마이크로초 단위로 주기 설정|Timer1.setPeriod(1000000) : 1Hz<br>Timer1.setPeriod(1000000/10) : 10Hz|
|Timer1.setPwmDuty(pin,duty)|주어진 핀에 사각파형의 duty 설정|Timer1.setPwmDuty(LED, 511) : 중간 밝기<br>Timer1.setPwmDuty(LED, 100) : 어두움<br>Timer1.setPwmDuty(LED, 900) : 밝음<br>Timer1.setPwmDuty(SERVO, angle)|
|millis()|경과된 시간||

<hr/>

## 3. Button Interrupt

<hr/>
