#ifndef HEADER_ACLRTLAUNCH_ASCENDC_DUP_BY_ROWS_FP32_H
#define HEADER_ACLRTLAUNCH_ASCENDC_DUP_BY_ROWS_FP32_H
#include "acl/acl_base.h"

#ifndef ACLRT_LAUNCH_KERNEL
#define ACLRT_LAUNCH_KERNEL(kernel_func) aclrtlaunch_##kernel_func
#endif

extern "C" uint32_t aclrtlaunch_ascendc_dup_by_rows_fp32(uint32_t blockDim, aclrtStream stream, void* src_gm, void* dst_gm, void* input_ne_gm, void* input_nb_gm, void* output_ne_gm, void* output_nb_gm);
#endif
