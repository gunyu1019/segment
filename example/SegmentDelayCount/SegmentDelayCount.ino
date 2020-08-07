#include <segment.h>
segment segment1(0,1,2,3,4,5,6,7); //Segment 를 시작하는 것입니다. 첫번째 세그먼트 기준 a에 속하며 두번째는 b,세번째는 c 해서 일곱번째까지는 g입니다 또한 여덝번째에는 세그먼트 기준 dp에 연결되는것과 같습니다.

void setup() {
  // put your setup code here, to run once:
  segment1.setoff(); //세그먼트를 초기화 시킵니다
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=9;i++){
    segment1.printNum(i);
    delay(1000);
  }
  segment1.setoff();
  delay(1000);
}
