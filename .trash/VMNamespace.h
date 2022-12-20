#ifndef _VM_NAMESPACE_H_
#define _VM_NAMESPACE_H_

#include <libcpp/libcpp.h>

namespace foxintango {

typedef enum _VM_NAMESPACE_NAME {
VM_NAMESPACE_UTC,
VM_NAMESPACE_IPC,
VM_NAMESPACE_PID,
VM_NAMESPACE_NET,
VM_NAMESPACE_FS,
VM_NAMESPACE_USER
}VM_NAMESPACE_NAME;
class foxintangoAPI VMNamespace {
};
}
#endif
