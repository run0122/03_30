# 03.30
 
<hr/>

## 1. Git Branch

오전에는 Git의 branch를 생성하는 실습을 했습니다. branch를 생성하면 원하는 파일을 복사하여, 영향을 안 주도록 코딩을 할 수 있습니다.
Merge 기능을 통해서 다른 branch 혹은 main과 branch를 합칠 수 있습니다. main과 branch를 Merge한다고 했을 때, base는 main이고 compare는 branch입니다. 
'This branch has no conflicts with the base branch' 라고 나오면 Merge가 가능한 겁니다.

![Image1](/git_log.PNG)

이처럼 git log --graph 명령어를 통해 이제까지의 로그와 함께 어떤 식으로 Merge가 이루어졌는지 그래프로 확인할 수 있습니다.

![Image2](/git_graph.PNG)

vs 코드의 Git Graph 기능을 사용해도 쉽게 알아볼 수 있습니다.

그 밖에도 git add .과 git restore . 도 배웠습니다. 
git add . : 모든 파일을 add 하겠다.
git restore . : add한 모든 file을 취소하겠다.

참고 사이트들 :

https://rogerdudler.github.io/git-guide/index.ko.html

git에 대한 명령어들이 눈으로 보기 쉽게 설명 돼있음.

https://danielkummer.github.io/git-flow-cheatsheet/index.ko_KR.html

Git Flow 참고.

<hr/>

## 2. TimerOne

Timer1이라는 기능을 이용하여 사각 파형을 생성해서 Output을 제어하는 방법을 배웠습니다. 

|함수|기능|설명|
|------|:---:|---|
|Timer1.initialize()|Timer1 초기화||
|Timer1.pwm()|핀에 사각 파형 생성|Timer1.pwm(pin, duty)<br>duty : 0~1023|
|Timer1.setPeriod()|마이크로초 단위로 주기 설정|Timer1.setPeriod(1000000) : 1Hz<br>Timer1.setPeriod(1000000/10) : 10Hz|
|Timer1.setPwmDuty(pin,duty)|핀에 사각 파형의 duty 설정|Timer1.setPwmDuty(LED, 511) : 중간<br>Timer1.setPwmDuty(LED, 100) : 어두움<br>Timer1.setPwmDuty(LED, 900) : 밝음<br>Timer1.setPwmDuty(SERVO, angle)|

<hr/>

## 3. Button Interrupt

버튼 인터럽트를 통해서 함수를 작동하는 방식도 구현해 보았습니다. mode는 RISING(LOW->HIGH) / FALLING(HIGH->LOW) / CHANGE(RISING&FALLING) / LOW 이렇게 4가지 입니다. 

실습은 문제가 없었으나 채터링 문제를 겪었습니다.

하드웨어 적으로는 커패시터를 사용해서 채터링을 방지할 수 있고, 버튼이 눌리는 시간을 확인하여 소프트웨어적으로 디바운스를 구현할 수 있다고 합니다. 디바운스 코드와 합쳐봤으나 제대로 작동하지 않았습니다. 아마 뭔가 문제가 있는 듯...

<hr/>
