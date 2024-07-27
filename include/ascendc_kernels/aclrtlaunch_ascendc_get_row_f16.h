#ifndef HEADER_ACLRTLAUNCH_ASCENDC_GET_ROW_F16_H
#define HEADER_ACLRTLAUNCH_ASCENDC_GET_ROW_F16_H
#include "acl/acl_base.h"

#ifndef ACLRT_LAUNCH_KERNEL
#define ACLRT_LAUNCH_KERNEL(kernel_func) aclrtlaunch_##kernel_func
#endif

extern "C" uint32_t aclrtlaunch_ascendc_get_row_f16(uint32_t blockDim, aclrtStream stream, void* input_gm, void* indices_gm, void* output_gm, void* input_ne_gm, void* input_nb_gm, void* indices_ne_gm, void* indices_nb_gm, void* output_ne_gm, void* output_nb_gm);
#endif
