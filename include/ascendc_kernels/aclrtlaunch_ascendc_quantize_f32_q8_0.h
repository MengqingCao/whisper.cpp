#ifndef HEADER_ACLRTLAUNCH_ASCENDC_QUANTIZE_F32_Q8_0_H
#define HEADER_ACLRTLAUNCH_ASCENDC_QUANTIZE_F32_Q8_0_H
#include "acl/acl_base.h"

#ifndef ACLRT_LAUNCH_KERNEL
#define ACLRT_LAUNCH_KERNEL(kernel_func) aclrtlaunch_##kernel_func
#endif

extern "C" uint32_t aclrtlaunch_ascendc_quantize_f32_q8_0(uint32_t blockDim, aclrtStream stream, void* input_gm, void* output_gm, void* input_ne_gm, void* input_nb_gm, void* output_ne_gm);
#endif
