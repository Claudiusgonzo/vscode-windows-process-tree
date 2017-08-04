#ifndef SRC_PROCESS_H_
#define SRC_PROCESS_H_

#include <nan.h>
#include <windows.h>

struct ProcessInfo {
  TCHAR name[MAX_PATH];
  DWORD pid;
  DWORD ppid;
};

void GetRawProcessList(ProcessInfo process_info[1024], uint32_t* process_count);

#endif  // SRC_PROCESS_H_