#include <ntddk.h>

#define dprintf				DbgPrint	//KdPrint

#define	DEVICE_NAME			L"\\Device\\Win7x64HideProtect"
#define LINK_NAME			L"\\DosDevices\\Win7x64HideProtect"
#define LINK_GLOBAL_NAME	L"\\DosDevices\\Global\\Win7x64HideProtect"

#define IOCTL_ULR3IN 	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x800, METHOD_BUFFERED, FILE_ANY_ACCESS) //In LONG
#define IOCTL_USR3IN 	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x801, METHOD_BUFFERED, FILE_ANY_ACCESS) //In BSTR
#define IOCTL_GetKPEB 	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x802, METHOD_BUFFERED, FILE_ANY_ACCESS) //Out LONG
#define IOCTL_GetBSTR 	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x804, METHOD_BUFFERED, FILE_ANY_ACCESS) //Out BSTR
#define IOCTL_ReInline	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x803, METHOD_BUFFERED, FILE_ANY_ACCESS) //Test Call Only
#define IOCTL_Struct	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x805, METHOD_BUFFERED, FILE_ANY_ACCESS) //I+O Struct