
#ifndef HEADER_ACLRTLAUNCH_ASCENDC_DUP_BY_ROWS_FP16_HKERNEL_H_
#define HEADER_ACLRTLAUNCH_ASCENDC_DUP_BY_ROWS_FP16_HKERNEL_H_



extern "C" uint32_t aclrtlaunch_ascendc_dup_by_rows_fp16(uint32_t blockDim, void* stream, void* src_gm, void* dst_gm, void* input_ne_gm, void* input_nb_gm, void* output_ne_gm, void* output_nb_gm);

inline uint32_t ascendc_dup_by_rows_fp16(uint32_t blockDim, void* hold, void* stream, void* src_gm, void* dst_gm, void* input_ne_gm, void* input_nb_gm, void* output_ne_gm, void* output_nb_gm)
{
    (void)hold;
    return aclrtlaunch_ascendc_dup_by_rows_fp16(blockDim, stream, src_gm, dst_gm, input_ne_gm, input_nb_gm, output_ne_gm, output_nb_gm);
}

#endif

#ifndef HEADER_ACLRTLAUNCH_ASCENDC_DUP_BY_ROWS_FP16_TO_FP32_HKERNEL_H_
#define HEADER_ACLRTLAUNCH_ASCENDC_DUP_BY_ROWS_FP16_TO_FP32_HKERNEL_H_



extern "C" uint32_t aclrtlaunch_ascendc_dup_by_rows_fp16_to_fp32(uint32_t blockDim, void* stream, void* src_gm, void* dst_gm, void* input_ne_gm, void* input_nb_gm, void* output_ne_gm, void* output_nb_gm);

inline uint32_t ascendc_dup_by_rows_fp16_to_fp32(uint32_t blockDim, void* hold, void* stream, void* src_gm, void* dst_gm, void* input_ne_gm, void* input_nb_gm, void* output_ne_gm, void* output_nb_gm)
{
    (void)hold;
    return aclrtlaunch_ascendc_dup_by_rows_fp16_to_fp32(blockDim, stream, src_gm, dst_gm, input_ne_gm, input_nb_gm, output_ne_gm, output_nb_gm);
}

#endif

#ifndef HEADER_ACLRTLAUNCH_ASCENDC_DUP_BY_ROWS_FP32_HKERNEL_H_
#define HEADER_ACLRTLAUNCH_ASCENDC_DUP_BY_ROWS_FP32_HKERNEL_H_



extern "C" uint32_t aclrtlaunch_ascendc_dup_by_rows_fp32(uint32_t blockDim, void* stream, void* src_gm, void* dst_gm, void* input_ne_gm, void* input_nb_gm, void* output_ne_gm, void* output_nb_gm);

inline uint32_t ascendc_dup_by_rows_fp32(uint32_t blockDim, void* hold, void* stream, void* src_gm, void* dst_gm, void* input_ne_gm, void* input_nb_gm, void* output_ne_gm, void* output_nb_gm)
{
    (void)hold;
    return aclrtlaunch_ascendc_dup_by_rows_fp32(blockDim, stream, src_gm, dst_gm, input_ne_gm, input_nb_gm, output_ne_gm, output_nb_gm);
}

#endif

#ifndef HEADER_ACLRTLAUNCH_ASCENDC_DUP_BY_ROWS_FP32_TO_FP16_HKERNEL_H_
#define HEADER_ACLRTLAUNCH_ASCENDC_DUP_BY_ROWS_FP32_TO_FP16_HKERNEL_H_



extern "C" uint32_t aclrtlaunch_ascendc_dup_by_rows_fp32_to_fp16(uint32_t blockDim, void* stream, void* src_gm, void* dst_gm, void* input_ne_gm, void* input_nb_gm, void* output_ne_gm, void* output_nb_gm);

inline uint32_t ascendc_dup_by_rows_fp32_to_fp16(uint32_t blockDim, void* hold, void* stream, void* src_gm, void* dst_gm, void* input_ne_gm, void* input_nb_gm, void* output_ne_gm, void* output_nb_gm)
{
    (void)hold;
    return aclrtlaunch_ascendc_dup_by_rows_fp32_to_fp16(blockDim, stream, src_gm, dst_gm, input_ne_gm, input_nb_gm, output_ne_gm, output_nb_gm);
}

#endif

#ifndef HEADER_ACLRTLAUNCH_ASCENDC_GET_ROW_F16_HKERNEL_H_
#define HEADER_ACLRTLAUNCH_ASCENDC_GET_ROW_F16_HKERNEL_H_



extern "C" uint32_t aclrtlaunch_ascendc_get_row_f16(uint32_t blockDim, void* stream, void* input_gm, void* indices_gm, void* output_gm, void* input_ne_gm, void* input_nb_gm, void* indices_ne_gm, void* indices_nb_gm, void* output_ne_gm, void* output_nb_gm);

inline uint32_t ascendc_get_row_f16(uint32_t blockDim, void* hold, void* stream, void* input_gm, void* indices_gm, void* output_gm, void* input_ne_gm, void* input_nb_gm, void* indices_ne_gm, void* indices_nb_gm, void* output_ne_gm, void* output_nb_gm)
{
    (void)hold;
    return aclrtlaunch_ascendc_get_row_f16(blockDim, stream, input_gm, indices_gm, output_gm, input_ne_gm, input_nb_gm, indices_ne_gm, indices_nb_gm, output_ne_gm, output_nb_gm);
}

#endif

#ifndef HEADER_ACLRTLAUNCH_ASCENDC_GET_ROW_F32_HKERNEL_H_
#define HEADER_ACLRTLAUNCH_ASCENDC_GET_ROW_F32_HKERNEL_H_



extern "C" uint32_t aclrtlaunch_ascendc_get_row_f32(uint32_t blockDim, void* stream, void* input_gm, void* indices_gm, void* output_gm, void* input_ne_gm, void* input_nb_gm, void* indices_ne_gm, void* indices_nb_gm, void* output_ne_gm, void* output_nb_gm);

inline uint32_t ascendc_get_row_f32(uint32_t blockDim, void* hold, void* stream, void* input_gm, void* indices_gm, void* output_gm, void* input_ne_gm, void* input_nb_gm, void* indices_ne_gm, void* indices_nb_gm, void* output_ne_gm, void* output_nb_gm)
{
    (void)hold;
    return aclrtlaunch_ascendc_get_row_f32(blockDim, stream, input_gm, indices_gm, output_gm, input_ne_gm, input_nb_gm, indices_ne_gm, indices_nb_gm, output_ne_gm, output_nb_gm);
}

#endif

#ifndef HEADER_ACLRTLAUNCH_ASCENDC_GET_ROW_Q4_0_HKERNEL_H_
#define HEADER_ACLRTLAUNCH_ASCENDC_GET_ROW_Q4_0_HKERNEL_H_



extern "C" uint32_t aclrtlaunch_ascendc_get_row_q4_0(uint32_t blockDim, void* stream, void* input_gm, void* indices_gm, void* output_gm, void* input_ne_gm, void* indices_ne_gm, void* indices_nb_gm, void* output_ne_gm, void* output_nb_gm);

inline uint32_t ascendc_get_row_q4_0(uint32_t blockDim, void* hold, void* stream, void* input_gm, void* indices_gm, void* output_gm, void* input_ne_gm, void* indices_ne_gm, void* indices_nb_gm, void* output_ne_gm, void* output_nb_gm)
{
    (void)hold;
    return aclrtlaunch_ascendc_get_row_q4_0(blockDim, stream, input_gm, indices_gm, output_gm, input_ne_gm, indices_ne_gm, indices_nb_gm, output_ne_gm, output_nb_gm);
}

#endif

#ifndef HEADER_ACLRTLAUNCH_ASCENDC_GET_ROW_Q8_0_HKERNEL_H_
#define HEADER_ACLRTLAUNCH_ASCENDC_GET_ROW_Q8_0_HKERNEL_H_



extern "C" uint32_t aclrtlaunch_ascendc_get_row_q8_0(uint32_t blockDim, void* stream, void* input_gm, void* indices_gm, void* output_gm, void* input_ne_gm, void* indices_ne_gm, void* indices_nb_gm, void* output_ne_gm, void* output_nb_gm);

inline uint32_t ascendc_get_row_q8_0(uint32_t blockDim, void* hold, void* stream, void* input_gm, void* indices_gm, void* output_gm, void* input_ne_gm, void* indices_ne_gm, void* indices_nb_gm, void* output_ne_gm, void* output_nb_gm)
{
    (void)hold;
    return aclrtlaunch_ascendc_get_row_q8_0(blockDim, stream, input_gm, indices_gm, output_gm, input_ne_gm, indices_ne_gm, indices_nb_gm, output_ne_gm, output_nb_gm);
}

#endif

#ifndef HEADER_ACLRTLAUNCH_ASCENDC_QUANTIZE_F16_Q8_0_HKERNEL_H_
#define HEADER_ACLRTLAUNCH_ASCENDC_QUANTIZE_F16_Q8_0_HKERNEL_H_



extern "C" uint32_t aclrtlaunch_ascendc_quantize_f16_q8_0(uint32_t blockDim, void* stream, void* input_gm, void* output_gm, void* input_ne_gm, void* input_nb_gm, void* output_ne_gm);

inline uint32_t ascendc_quantize_f16_q8_0(uint32_t blockDim, void* hold, void* stream, void* input_gm, void* output_gm, void* input_ne_gm, void* input_nb_gm, void* output_ne_gm)
{
    (void)hold;
    return aclrtlaunch_ascendc_quantize_f16_q8_0(blockDim, stream, input_gm, output_gm, input_ne_gm, input_nb_gm, output_ne_gm);
}

#endif

#ifndef HEADER_ACLRTLAUNCH_ASCENDC_QUANTIZE_F32_Q8_0_HKERNEL_H_
#define HEADER_ACLRTLAUNCH_ASCENDC_QUANTIZE_F32_Q8_0_HKERNEL_H_



extern "C" uint32_t aclrtlaunch_ascendc_quantize_f32_q8_0(uint32_t blockDim, void* stream, void* input_gm, void* output_gm, void* input_ne_gm, void* input_nb_gm, void* output_ne_gm);

inline uint32_t ascendc_quantize_f32_q8_0(uint32_t blockDim, void* hold, void* stream, void* input_gm, void* output_gm, void* input_ne_gm, void* input_nb_gm, void* output_ne_gm)
{
    (void)hold;
    return aclrtlaunch_ascendc_quantize_f32_q8_0(blockDim, stream, input_gm, output_gm, input_ne_gm, input_nb_gm, output_ne_gm);
}

#endif
