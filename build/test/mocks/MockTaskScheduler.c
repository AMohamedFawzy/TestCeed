/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "MockTaskScheduler.h"

static const char* CMockString_TaskScheduler_DoAdc = "TaskScheduler_DoAdc";
static const char* CMockString_TaskScheduler_DoUsart = "TaskScheduler_DoUsart";
static const char* CMockString_TaskScheduler_Init = "TaskScheduler_Init";
static const char* CMockString_TaskScheduler_Update = "TaskScheduler_Update";
static const char* CMockString_time = "time";

typedef struct _CMOCK_TaskScheduler_Init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_TaskScheduler_Init_CALL_INSTANCE;

typedef struct _CMOCK_TaskScheduler_Update_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;
  uint32 Expected_time;

} CMOCK_TaskScheduler_Update_CALL_INSTANCE;

typedef struct _CMOCK_TaskScheduler_DoUsart_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;
  int CallOrder;

} CMOCK_TaskScheduler_DoUsart_CALL_INSTANCE;

typedef struct _CMOCK_TaskScheduler_DoAdc_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;
  int CallOrder;

} CMOCK_TaskScheduler_DoAdc_CALL_INSTANCE;

static struct MockTaskSchedulerInstance
{
  char TaskScheduler_Init_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE TaskScheduler_Init_CallInstance;
  char TaskScheduler_Update_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE TaskScheduler_Update_CallInstance;
  char TaskScheduler_DoUsart_IgnoreBool;
  bool TaskScheduler_DoUsart_FinalReturn;
  CMOCK_MEM_INDEX_TYPE TaskScheduler_DoUsart_CallInstance;
  char TaskScheduler_DoAdc_IgnoreBool;
  bool TaskScheduler_DoAdc_FinalReturn;
  CMOCK_MEM_INDEX_TYPE TaskScheduler_DoAdc_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void MockTaskScheduler_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.TaskScheduler_Init_CallInstance;
  if (Mock.TaskScheduler_Init_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_TaskScheduler_Init);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.TaskScheduler_Update_CallInstance;
  if (Mock.TaskScheduler_Update_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_TaskScheduler_Update);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.TaskScheduler_DoUsart_CallInstance;
  if (Mock.TaskScheduler_DoUsart_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_TaskScheduler_DoUsart);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  call_instance = Mock.TaskScheduler_DoAdc_CallInstance;
  if (Mock.TaskScheduler_DoAdc_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_TaskScheduler_DoAdc);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
}

void MockTaskScheduler_Init(void)
{
  MockTaskScheduler_Destroy();
}

void MockTaskScheduler_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void TaskScheduler_Init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_TaskScheduler_Init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_TaskScheduler_Init);
  cmock_call_instance = (CMOCK_TaskScheduler_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.TaskScheduler_Init_CallInstance);
  Mock.TaskScheduler_Init_CallInstance = CMock_Guts_MemNext(Mock.TaskScheduler_Init_CallInstance);
  if (Mock.TaskScheduler_Init_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  UNITY_CLR_DETAILS();
}

void TaskScheduler_Init_CMockIgnore(void)
{
  Mock.TaskScheduler_Init_IgnoreBool = (char)1;
}

void TaskScheduler_Init_CMockStopIgnore(void)
{
  Mock.TaskScheduler_Init_IgnoreBool = (char)0;
}

void TaskScheduler_Init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_TaskScheduler_Init_CALL_INSTANCE));
  CMOCK_TaskScheduler_Init_CALL_INSTANCE* cmock_call_instance = (CMOCK_TaskScheduler_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.TaskScheduler_Init_CallInstance = CMock_Guts_MemChain(Mock.TaskScheduler_Init_CallInstance, cmock_guts_index);
  Mock.TaskScheduler_Init_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
}

void TaskScheduler_Update(uint32 time)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_TaskScheduler_Update_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_TaskScheduler_Update);
  cmock_call_instance = (CMOCK_TaskScheduler_Update_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.TaskScheduler_Update_CallInstance);
  Mock.TaskScheduler_Update_CallInstance = CMock_Guts_MemNext(Mock.TaskScheduler_Update_CallInstance);
  if (Mock.TaskScheduler_Update_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  {
    UNITY_SET_DETAILS(CMockString_TaskScheduler_Update,CMockString_time);
    UNITY_TEST_ASSERT_EQUAL_UINT32(cmock_call_instance->Expected_time, time, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_TaskScheduler_Update(CMOCK_TaskScheduler_Update_CALL_INSTANCE* cmock_call_instance, uint32 time);
void CMockExpectParameters_TaskScheduler_Update(CMOCK_TaskScheduler_Update_CALL_INSTANCE* cmock_call_instance, uint32 time)
{
  cmock_call_instance->Expected_time = time;
}

void TaskScheduler_Update_CMockIgnore(void)
{
  Mock.TaskScheduler_Update_IgnoreBool = (char)1;
}

void TaskScheduler_Update_CMockStopIgnore(void)
{
  Mock.TaskScheduler_Update_IgnoreBool = (char)0;
}

void TaskScheduler_Update_CMockExpect(UNITY_LINE_TYPE cmock_line, uint32 time)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_TaskScheduler_Update_CALL_INSTANCE));
  CMOCK_TaskScheduler_Update_CALL_INSTANCE* cmock_call_instance = (CMOCK_TaskScheduler_Update_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.TaskScheduler_Update_CallInstance = CMock_Guts_MemChain(Mock.TaskScheduler_Update_CallInstance, cmock_guts_index);
  Mock.TaskScheduler_Update_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  CMockExpectParameters_TaskScheduler_Update(cmock_call_instance, time);
}

bool TaskScheduler_DoUsart(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_TaskScheduler_DoUsart_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_TaskScheduler_DoUsart);
  cmock_call_instance = (CMOCK_TaskScheduler_DoUsart_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.TaskScheduler_DoUsart_CallInstance);
  Mock.TaskScheduler_DoUsart_CallInstance = CMock_Guts_MemNext(Mock.TaskScheduler_DoUsart_CallInstance);
  if (Mock.TaskScheduler_DoUsart_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.TaskScheduler_DoUsart_FinalReturn;
    Mock.TaskScheduler_DoUsart_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void TaskScheduler_DoUsart_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_TaskScheduler_DoUsart_CALL_INSTANCE));
  CMOCK_TaskScheduler_DoUsart_CALL_INSTANCE* cmock_call_instance = (CMOCK_TaskScheduler_DoUsart_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.TaskScheduler_DoUsart_CallInstance = CMock_Guts_MemChain(Mock.TaskScheduler_DoUsart_CallInstance, cmock_guts_index);
  Mock.TaskScheduler_DoUsart_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.TaskScheduler_DoUsart_IgnoreBool = (char)1;
}

void TaskScheduler_DoUsart_CMockStopIgnore(void)
{
  if(Mock.TaskScheduler_DoUsart_IgnoreBool)
    Mock.TaskScheduler_DoUsart_CallInstance = CMock_Guts_MemNext(Mock.TaskScheduler_DoUsart_CallInstance);
  Mock.TaskScheduler_DoUsart_IgnoreBool = (char)0;
}

void TaskScheduler_DoUsart_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_TaskScheduler_DoUsart_CALL_INSTANCE));
  CMOCK_TaskScheduler_DoUsart_CALL_INSTANCE* cmock_call_instance = (CMOCK_TaskScheduler_DoUsart_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.TaskScheduler_DoUsart_CallInstance = CMock_Guts_MemChain(Mock.TaskScheduler_DoUsart_CallInstance, cmock_guts_index);
  Mock.TaskScheduler_DoUsart_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

bool TaskScheduler_DoAdc(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_TaskScheduler_DoAdc_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_TaskScheduler_DoAdc);
  cmock_call_instance = (CMOCK_TaskScheduler_DoAdc_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.TaskScheduler_DoAdc_CallInstance);
  Mock.TaskScheduler_DoAdc_CallInstance = CMock_Guts_MemNext(Mock.TaskScheduler_DoAdc_CallInstance);
  if (Mock.TaskScheduler_DoAdc_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.TaskScheduler_DoAdc_FinalReturn;
    Mock.TaskScheduler_DoAdc_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (cmock_call_instance->CallOrder > ++GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledEarly);
  if (cmock_call_instance->CallOrder < GlobalVerifyOrder)
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLate);
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void TaskScheduler_DoAdc_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_TaskScheduler_DoAdc_CALL_INSTANCE));
  CMOCK_TaskScheduler_DoAdc_CALL_INSTANCE* cmock_call_instance = (CMOCK_TaskScheduler_DoAdc_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.TaskScheduler_DoAdc_CallInstance = CMock_Guts_MemChain(Mock.TaskScheduler_DoAdc_CallInstance, cmock_guts_index);
  Mock.TaskScheduler_DoAdc_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.TaskScheduler_DoAdc_IgnoreBool = (char)1;
}

void TaskScheduler_DoAdc_CMockStopIgnore(void)
{
  if(Mock.TaskScheduler_DoAdc_IgnoreBool)
    Mock.TaskScheduler_DoAdc_CallInstance = CMock_Guts_MemNext(Mock.TaskScheduler_DoAdc_CallInstance);
  Mock.TaskScheduler_DoAdc_IgnoreBool = (char)0;
}

void TaskScheduler_DoAdc_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_TaskScheduler_DoAdc_CALL_INSTANCE));
  CMOCK_TaskScheduler_DoAdc_CALL_INSTANCE* cmock_call_instance = (CMOCK_TaskScheduler_DoAdc_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.TaskScheduler_DoAdc_CallInstance = CMock_Guts_MemChain(Mock.TaskScheduler_DoAdc_CallInstance, cmock_guts_index);
  Mock.TaskScheduler_DoAdc_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
  cmock_call_instance->ReturnVal = cmock_to_return;
}

