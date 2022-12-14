/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "MockModel.h"

static const char* CMockString_Model_Init = "Model_Init";

typedef struct _CMOCK_Model_Init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  int CallOrder;

} CMOCK_Model_Init_CALL_INSTANCE;

static struct MockModelInstance
{
  char Model_Init_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE Model_Init_CallInstance;
} Mock;

extern jmp_buf AbortFrame;
extern int GlobalExpectCount;
extern int GlobalVerifyOrder;

void MockModel_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.Model_Init_CallInstance;
  if (Mock.Model_Init_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_Model_Init);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
}

void MockModel_Init(void)
{
  MockModel_Destroy();
}

void MockModel_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  GlobalExpectCount = 0;
  GlobalVerifyOrder = 0;
}

void Model_Init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_Model_Init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_Model_Init);
  cmock_call_instance = (CMOCK_Model_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Model_Init_CallInstance);
  Mock.Model_Init_CallInstance = CMock_Guts_MemNext(Mock.Model_Init_CallInstance);
  if (Mock.Model_Init_IgnoreBool)
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

void Model_Init_CMockIgnore(void)
{
  Mock.Model_Init_IgnoreBool = (char)1;
}

void Model_Init_CMockStopIgnore(void)
{
  Mock.Model_Init_IgnoreBool = (char)0;
}

void Model_Init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Model_Init_CALL_INSTANCE));
  CMOCK_Model_Init_CALL_INSTANCE* cmock_call_instance = (CMOCK_Model_Init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Model_Init_CallInstance = CMock_Guts_MemChain(Mock.Model_Init_CallInstance, cmock_guts_index);
  Mock.Model_Init_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->CallOrder = ++GlobalExpectCount;
}

