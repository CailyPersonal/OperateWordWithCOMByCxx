#pragma once
#include <Ole2.h>

// AutoWrap() - Automation helper function...���ʹ��DISPATCH_METHOD,���Ҵ��в�������Ҫ������˳�򵹹�����
HRESULT AutoWrap(int autoType, VARIANT *pvResult, IDispatch *pDisp, LPOLESTR ptName, int cArgs...);

// Used to do a simple function mark
void NothingTodo();