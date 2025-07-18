#include "Model_StopWatch.h"


 static estopWatchState_t stopWatchState = S_STOPWATCH_STOP; //초기값


osMessageQId stopWatchEventMsgBox; //버튼 입력 정보
osMessageQDef(stopWatchEventQueue, 4, uint16_t);

osMailQId stopWatchDataMailBox;  //시간 정보
osMailQDef(stopWatchDataQueue, 4, stopWatch_t);


 void Model_StopWatch_Init()
 {
	 //CREAT QUEUE
	 stopWatchEventMsgBox = osMessageCreate(osMessageQ(stopWatchEventQueue), NULL);
	 stopWatchDataMailBox = osMailCreate(osMailQ(stopWatchDataQueue), NULL);
 }


 void Model_Set_StopWatchState(estopWatchState_t state)
 {
	 stopWatchState = state;
 }

 estopWatchState_t Model_Get_StopWatchState() //get 함수를 통해 state
 {
	 return stopWatchState;
 }

