// Register NVDLA_CDP_S_STATUS_0
#define NVDLA_CDP_S_STATUS_0			_MK_ADDR_CONST(0xd000)
#define NVDLA_CDP_S_STATUS_0_STATUS_0_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_STATUS_0_STATUS_0_FIELD			_MK_FIELD_CONST(0x3, NVDLA_CDP_S_STATUS_0_STATUS_0_SHIFT)
#define NVDLA_CDP_S_STATUS_0_STATUS_0_IDLE			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_S_STATUS_0_STATUS_0_RUNNING			_MK_ENUM_CONST(0x1)
#define NVDLA_CDP_S_STATUS_0_STATUS_0_PENDING			_MK_ENUM_CONST(0x2)
#define NVDLA_CDP_S_STATUS_0_STATUS_1_SHIFT			_MK_SHIFT_CONST(16)
#define NVDLA_CDP_S_STATUS_0_STATUS_1_FIELD			_MK_FIELD_CONST(0x3, NVDLA_CDP_S_STATUS_0_STATUS_1_SHIFT)
#define NVDLA_CDP_S_STATUS_0_STATUS_1_IDLE			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_S_STATUS_0_STATUS_1_RUNNING			_MK_ENUM_CONST(0x1)
#define NVDLA_CDP_S_STATUS_0_STATUS_1_PENDING			_MK_ENUM_CONST(0x2)


// Register NVDLA_CDP_S_POINTER_0
#define NVDLA_CDP_S_POINTER_0			_MK_ADDR_CONST(0xd004)
#define NVDLA_CDP_S_POINTER_0_PRODUCER_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_POINTER_0_PRODUCER_FIELD			_MK_FIELD_CONST(0x1, NVDLA_CDP_S_POINTER_0_PRODUCER_SHIFT)
#define NVDLA_CDP_S_POINTER_0_PRODUCER_GROUP_0			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_S_POINTER_0_PRODUCER_GROUP_1			_MK_ENUM_CONST(0x1)
#define NVDLA_CDP_S_POINTER_0_CONSUMER_SHIFT			_MK_SHIFT_CONST(16)
#define NVDLA_CDP_S_POINTER_0_CONSUMER_FIELD			_MK_FIELD_CONST(0x1, NVDLA_CDP_S_POINTER_0_CONSUMER_SHIFT)
#define NVDLA_CDP_S_POINTER_0_CONSUMER_GROUP_0			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_S_POINTER_0_CONSUMER_GROUP_1			_MK_ENUM_CONST(0x1)


// Register NVDLA_CDP_S_LUT_ACCESS_CFG_0
#define NVDLA_CDP_S_LUT_ACCESS_CFG_0			_MK_ADDR_CONST(0xd008)
#define NVDLA_CDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_FIELD			_MK_FIELD_CONST(0x3ff, NVDLA_CDP_S_LUT_ACCESS_CFG_0_LUT_ADDR_SHIFT)
#define NVDLA_CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_SHIFT			_MK_SHIFT_CONST(16)
#define NVDLA_CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_FIELD			_MK_FIELD_CONST(0x1, NVDLA_CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_SHIFT)
#define NVDLA_CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_LE			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_S_LUT_ACCESS_CFG_0_LUT_TABLE_ID_LO			_MK_ENUM_CONST(0x1)
#define NVDLA_CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_SHIFT			_MK_SHIFT_CONST(17)
#define NVDLA_CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_FIELD			_MK_FIELD_CONST(0x1, NVDLA_CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_SHIFT)
#define NVDLA_CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_READ			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_S_LUT_ACCESS_CFG_0_LUT_ACCESS_TYPE_WRITE			_MK_ENUM_CONST(0x1)


// Register NVDLA_CDP_S_LUT_ACCESS_DATA_0
#define NVDLA_CDP_S_LUT_ACCESS_DATA_0			_MK_ADDR_CONST(0xd00c)
#define NVDLA_CDP_S_LUT_ACCESS_DATA_0_LUT_DATA_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_LUT_ACCESS_DATA_0_LUT_DATA_FIELD			_MK_FIELD_CONST(0xffff, NVDLA_CDP_S_LUT_ACCESS_DATA_0_LUT_DATA_SHIFT)


// Register NVDLA_CDP_S_LUT_CFG_0
#define NVDLA_CDP_S_LUT_CFG_0			_MK_ADDR_CONST(0xd010)
#define NVDLA_CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_FIELD			_MK_FIELD_CONST(0x1, NVDLA_CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_SHIFT)
#define NVDLA_CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_EXPONENT			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_S_LUT_CFG_0_LUT_LE_FUNCTION_LINEAR			_MK_ENUM_CONST(0x1)
#define NVDLA_CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_SHIFT			_MK_SHIFT_CONST(4)
#define NVDLA_CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_FIELD			_MK_FIELD_CONST(0x1, NVDLA_CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_SHIFT)
#define NVDLA_CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_LE			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_S_LUT_CFG_0_LUT_UFLOW_PRIORITY_LO			_MK_ENUM_CONST(0x1)
#define NVDLA_CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_SHIFT			_MK_SHIFT_CONST(5)
#define NVDLA_CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_FIELD			_MK_FIELD_CONST(0x1, NVDLA_CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_SHIFT)
#define NVDLA_CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_LE			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_S_LUT_CFG_0_LUT_OFLOW_PRIORITY_LO			_MK_ENUM_CONST(0x1)
#define NVDLA_CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_SHIFT			_MK_SHIFT_CONST(6)
#define NVDLA_CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_FIELD			_MK_FIELD_CONST(0x1, NVDLA_CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_SHIFT)
#define NVDLA_CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_LE			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_S_LUT_CFG_0_LUT_HYBRID_PRIORITY_LO			_MK_ENUM_CONST(0x1)


// Register NVDLA_CDP_S_LUT_INFO_0
#define NVDLA_CDP_S_LUT_INFO_0			_MK_ADDR_CONST(0xd014)
#define NVDLA_CDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_FIELD			_MK_FIELD_CONST(0xff, NVDLA_CDP_S_LUT_INFO_0_LUT_LE_INDEX_OFFSET_SHIFT)
#define NVDLA_CDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_SHIFT			_MK_SHIFT_CONST(8)
#define NVDLA_CDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_FIELD			_MK_FIELD_CONST(0xff, NVDLA_CDP_S_LUT_INFO_0_LUT_LE_INDEX_SELECT_SHIFT)
#define NVDLA_CDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_SHIFT			_MK_SHIFT_CONST(16)
#define NVDLA_CDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_FIELD			_MK_FIELD_CONST(0xff, NVDLA_CDP_S_LUT_INFO_0_LUT_LO_INDEX_SELECT_SHIFT)


// Register NVDLA_CDP_S_LUT_LE_START_LOW_0
#define NVDLA_CDP_S_LUT_LE_START_LOW_0			_MK_ADDR_CONST(0xd018)
#define NVDLA_CDP_S_LUT_LE_START_LOW_0_LUT_LE_START_LOW_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_LUT_LE_START_LOW_0_LUT_LE_START_LOW_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_S_LUT_LE_START_LOW_0_LUT_LE_START_LOW_SHIFT)


// Register NVDLA_CDP_S_LUT_LE_START_HIGH_0
#define NVDLA_CDP_S_LUT_LE_START_HIGH_0			_MK_ADDR_CONST(0xd01c)
#define NVDLA_CDP_S_LUT_LE_START_HIGH_0_LUT_LE_START_HIGH_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_LUT_LE_START_HIGH_0_LUT_LE_START_HIGH_FIELD			_MK_FIELD_CONST(0x3f, NVDLA_CDP_S_LUT_LE_START_HIGH_0_LUT_LE_START_HIGH_SHIFT)


// Register NVDLA_CDP_S_LUT_LE_END_LOW_0
#define NVDLA_CDP_S_LUT_LE_END_LOW_0			_MK_ADDR_CONST(0xd020)
#define NVDLA_CDP_S_LUT_LE_END_LOW_0_LUT_LE_END_LOW_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_LUT_LE_END_LOW_0_LUT_LE_END_LOW_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_S_LUT_LE_END_LOW_0_LUT_LE_END_LOW_SHIFT)


// Register NVDLA_CDP_S_LUT_LE_END_HIGH_0
#define NVDLA_CDP_S_LUT_LE_END_HIGH_0			_MK_ADDR_CONST(0xd024)
#define NVDLA_CDP_S_LUT_LE_END_HIGH_0_LUT_LE_END_HIGH_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_LUT_LE_END_HIGH_0_LUT_LE_END_HIGH_FIELD			_MK_FIELD_CONST(0x3f, NVDLA_CDP_S_LUT_LE_END_HIGH_0_LUT_LE_END_HIGH_SHIFT)


// Register NVDLA_CDP_S_LUT_LO_START_LOW_0
#define NVDLA_CDP_S_LUT_LO_START_LOW_0			_MK_ADDR_CONST(0xd028)
#define NVDLA_CDP_S_LUT_LO_START_LOW_0_LUT_LO_START_LOW_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_LUT_LO_START_LOW_0_LUT_LO_START_LOW_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_S_LUT_LO_START_LOW_0_LUT_LO_START_LOW_SHIFT)


// Register NVDLA_CDP_S_LUT_LO_START_HIGH_0
#define NVDLA_CDP_S_LUT_LO_START_HIGH_0			_MK_ADDR_CONST(0xd02c)
#define NVDLA_CDP_S_LUT_LO_START_HIGH_0_LUT_LO_START_HIGH_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_LUT_LO_START_HIGH_0_LUT_LO_START_HIGH_FIELD			_MK_FIELD_CONST(0x3f, NVDLA_CDP_S_LUT_LO_START_HIGH_0_LUT_LO_START_HIGH_SHIFT)


// Register NVDLA_CDP_S_LUT_LO_END_LOW_0
#define NVDLA_CDP_S_LUT_LO_END_LOW_0			_MK_ADDR_CONST(0xd030)
#define NVDLA_CDP_S_LUT_LO_END_LOW_0_LUT_LO_END_LOW_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_LUT_LO_END_LOW_0_LUT_LO_END_LOW_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_S_LUT_LO_END_LOW_0_LUT_LO_END_LOW_SHIFT)


// Register NVDLA_CDP_S_LUT_LO_END_HIGH_0
#define NVDLA_CDP_S_LUT_LO_END_HIGH_0			_MK_ADDR_CONST(0xd034)
#define NVDLA_CDP_S_LUT_LO_END_HIGH_0_LUT_LO_END_HIGH_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_LUT_LO_END_HIGH_0_LUT_LO_END_HIGH_FIELD			_MK_FIELD_CONST(0x3f, NVDLA_CDP_S_LUT_LO_END_HIGH_0_LUT_LO_END_HIGH_SHIFT)


// Register NVDLA_CDP_S_LUT_LE_SLOPE_SCALE_0
#define NVDLA_CDP_S_LUT_LE_SLOPE_SCALE_0			_MK_ADDR_CONST(0xd038)
#define NVDLA_CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_FIELD			_MK_FIELD_CONST(0xffff, NVDLA_CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_UFLOW_SCALE_SHIFT)
#define NVDLA_CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_SHIFT			_MK_SHIFT_CONST(16)
#define NVDLA_CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_FIELD			_MK_FIELD_CONST(0xffff, NVDLA_CDP_S_LUT_LE_SLOPE_SCALE_0_LUT_LE_SLOPE_OFLOW_SCALE_SHIFT)


// Register NVDLA_CDP_S_LUT_LE_SLOPE_SHIFT_0
#define NVDLA_CDP_S_LUT_LE_SLOPE_SHIFT_0			_MK_ADDR_CONST(0xd03c)
#define NVDLA_CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_FIELD			_MK_FIELD_CONST(0x1f, NVDLA_CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_UFLOW_SHIFT_SHIFT)
#define NVDLA_CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_SHIFT			_MK_SHIFT_CONST(5)
#define NVDLA_CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_FIELD			_MK_FIELD_CONST(0x1f, NVDLA_CDP_S_LUT_LE_SLOPE_SHIFT_0_LUT_LE_SLOPE_OFLOW_SHIFT_SHIFT)


// Register NVDLA_CDP_S_LUT_LO_SLOPE_SCALE_0
#define NVDLA_CDP_S_LUT_LO_SLOPE_SCALE_0			_MK_ADDR_CONST(0xd040)
#define NVDLA_CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_FIELD			_MK_FIELD_CONST(0xffff, NVDLA_CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_UFLOW_SCALE_SHIFT)
#define NVDLA_CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_SHIFT			_MK_SHIFT_CONST(16)
#define NVDLA_CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_FIELD			_MK_FIELD_CONST(0xffff, NVDLA_CDP_S_LUT_LO_SLOPE_SCALE_0_LUT_LO_SLOPE_OFLOW_SCALE_SHIFT)


// Register NVDLA_CDP_S_LUT_LO_SLOPE_SHIFT_0
#define NVDLA_CDP_S_LUT_LO_SLOPE_SHIFT_0			_MK_ADDR_CONST(0xd044)
#define NVDLA_CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_FIELD			_MK_FIELD_CONST(0x1f, NVDLA_CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_UFLOW_SHIFT_SHIFT)
#define NVDLA_CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_SHIFT			_MK_SHIFT_CONST(5)
#define NVDLA_CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_FIELD			_MK_FIELD_CONST(0x1f, NVDLA_CDP_S_LUT_LO_SLOPE_SHIFT_0_LUT_LO_SLOPE_OFLOW_SHIFT_SHIFT)


// Register NVDLA_CDP_D_OP_ENABLE_0
#define NVDLA_CDP_D_OP_ENABLE_0			_MK_ADDR_CONST(0xd048)
#define NVDLA_CDP_D_OP_ENABLE_0_OP_EN_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_OP_ENABLE_0_OP_EN_FIELD			_MK_FIELD_CONST(0x1, NVDLA_CDP_D_OP_ENABLE_0_OP_EN_SHIFT)
#define NVDLA_CDP_D_OP_ENABLE_0_OP_EN_DISABLE			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_D_OP_ENABLE_0_OP_EN_ENABLE			_MK_ENUM_CONST(0x1)


// Register NVDLA_CDP_D_FUNC_BYPASS_0
#define NVDLA_CDP_D_FUNC_BYPASS_0			_MK_ADDR_CONST(0xd04c)
#define NVDLA_CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_FIELD			_MK_FIELD_CONST(0x1, NVDLA_CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_SHIFT)
#define NVDLA_CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_DISABLE			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_D_FUNC_BYPASS_0_SQSUM_BYPASS_ENABLE			_MK_ENUM_CONST(0x1)
#define NVDLA_CDP_D_FUNC_BYPASS_0_MUL_BYPASS_SHIFT			_MK_SHIFT_CONST(1)
#define NVDLA_CDP_D_FUNC_BYPASS_0_MUL_BYPASS_FIELD			_MK_FIELD_CONST(0x1, NVDLA_CDP_D_FUNC_BYPASS_0_MUL_BYPASS_SHIFT)
#define NVDLA_CDP_D_FUNC_BYPASS_0_MUL_BYPASS_DISABLE			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_D_FUNC_BYPASS_0_MUL_BYPASS_ENABLE			_MK_ENUM_CONST(0x1)


// Register NVDLA_CDP_D_DST_BASE_ADDR_LOW_0
#define NVDLA_CDP_D_DST_BASE_ADDR_LOW_0			_MK_ADDR_CONST(0xd050)
#define NVDLA_CDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_D_DST_BASE_ADDR_LOW_0_DST_BASE_ADDR_LOW_SHIFT)


// Register NVDLA_CDP_D_DST_BASE_ADDR_HIGH_0
#define NVDLA_CDP_D_DST_BASE_ADDR_HIGH_0			_MK_ADDR_CONST(0xd054)
#define NVDLA_CDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_D_DST_BASE_ADDR_HIGH_0_DST_BASE_ADDR_HIGH_SHIFT)


// Register NVDLA_CDP_D_DST_LINE_STRIDE_0
#define NVDLA_CDP_D_DST_LINE_STRIDE_0			_MK_ADDR_CONST(0xd058)
#define NVDLA_CDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_D_DST_LINE_STRIDE_0_DST_LINE_STRIDE_SHIFT)


// Register NVDLA_CDP_D_DST_SURFACE_STRIDE_0
#define NVDLA_CDP_D_DST_SURFACE_STRIDE_0			_MK_ADDR_CONST(0xd05c)
#define NVDLA_CDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_D_DST_SURFACE_STRIDE_0_DST_SURFACE_STRIDE_SHIFT)


// Register NVDLA_CDP_D_DST_DMA_CFG_0
#define NVDLA_CDP_D_DST_DMA_CFG_0			_MK_ADDR_CONST(0xd060)
#define NVDLA_CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_FIELD			_MK_FIELD_CONST(0x1, NVDLA_CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_SHIFT)
#define NVDLA_CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_CV			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_D_DST_DMA_CFG_0_DST_RAM_TYPE_MC			_MK_ENUM_CONST(0x1)


// Register NVDLA_CDP_D_DST_COMPRESSION_EN_0
#define NVDLA_CDP_D_DST_COMPRESSION_EN_0			_MK_ADDR_CONST(0xd064)
#define NVDLA_CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_FIELD			_MK_FIELD_CONST(0x1, NVDLA_CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_SHIFT)
#define NVDLA_CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_DISABLE			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_D_DST_COMPRESSION_EN_0_DST_COMPRESSION_EN_ENABLE			_MK_ENUM_CONST(0x1)


// Register NVDLA_CDP_D_DATA_FORMAT_0
#define NVDLA_CDP_D_DATA_FORMAT_0			_MK_ADDR_CONST(0xd068)
#define NVDLA_CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_FIELD			_MK_FIELD_CONST(0x3, NVDLA_CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_SHIFT)
#define NVDLA_CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_INT8			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_INT16			_MK_ENUM_CONST(0x1)
#define NVDLA_CDP_D_DATA_FORMAT_0_INPUT_DATA_TYPE_FP16			_MK_ENUM_CONST(0x2)


// Register NVDLA_CDP_D_NAN_FLUSH_TO_ZERO_0
#define NVDLA_CDP_D_NAN_FLUSH_TO_ZERO_0			_MK_ADDR_CONST(0xd06c)
#define NVDLA_CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_FIELD			_MK_FIELD_CONST(0x1, NVDLA_CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_SHIFT)
#define NVDLA_CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_DISABLE			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_D_NAN_FLUSH_TO_ZERO_0_NAN_TO_ZERO_ENABLE			_MK_ENUM_CONST(0x1)


// Register NVDLA_CDP_D_LRN_CFG_0
#define NVDLA_CDP_D_LRN_CFG_0			_MK_ADDR_CONST(0xd070)
#define NVDLA_CDP_D_LRN_CFG_0_NORMALZ_LEN_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_LRN_CFG_0_NORMALZ_LEN_FIELD			_MK_FIELD_CONST(0x3, NVDLA_CDP_D_LRN_CFG_0_NORMALZ_LEN_SHIFT)
#define NVDLA_CDP_D_LRN_CFG_0_NORMALZ_LEN_LEN3			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_D_LRN_CFG_0_NORMALZ_LEN_LEN5			_MK_ENUM_CONST(0x1)
#define NVDLA_CDP_D_LRN_CFG_0_NORMALZ_LEN_LEN7			_MK_ENUM_CONST(0x2)
#define NVDLA_CDP_D_LRN_CFG_0_NORMALZ_LEN_LEN9			_MK_ENUM_CONST(0x3)


// Register NVDLA_CDP_D_DATIN_OFFSET_0
#define NVDLA_CDP_D_DATIN_OFFSET_0			_MK_ADDR_CONST(0xd074)
#define NVDLA_CDP_D_DATIN_OFFSET_0_DATIN_OFFSET_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_DATIN_OFFSET_0_DATIN_OFFSET_FIELD			_MK_FIELD_CONST(0xffff, NVDLA_CDP_D_DATIN_OFFSET_0_DATIN_OFFSET_SHIFT)


// Register NVDLA_CDP_D_DATIN_SCALE_0
#define NVDLA_CDP_D_DATIN_SCALE_0			_MK_ADDR_CONST(0xd078)
#define NVDLA_CDP_D_DATIN_SCALE_0_DATIN_SCALE_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_DATIN_SCALE_0_DATIN_SCALE_FIELD			_MK_FIELD_CONST(0xffff, NVDLA_CDP_D_DATIN_SCALE_0_DATIN_SCALE_SHIFT)


// Register NVDLA_CDP_D_DATIN_SHIFTER_0
#define NVDLA_CDP_D_DATIN_SHIFTER_0			_MK_ADDR_CONST(0xd07c)
#define NVDLA_CDP_D_DATIN_SHIFTER_0_DATIN_SHIFTER_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_DATIN_SHIFTER_0_DATIN_SHIFTER_FIELD			_MK_FIELD_CONST(0x1f, NVDLA_CDP_D_DATIN_SHIFTER_0_DATIN_SHIFTER_SHIFT)


// Register NVDLA_CDP_D_DATOUT_OFFSET_0
#define NVDLA_CDP_D_DATOUT_OFFSET_0			_MK_ADDR_CONST(0xd080)
#define NVDLA_CDP_D_DATOUT_OFFSET_0_DATOUT_OFFSET_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_DATOUT_OFFSET_0_DATOUT_OFFSET_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_D_DATOUT_OFFSET_0_DATOUT_OFFSET_SHIFT)


// Register NVDLA_CDP_D_DATOUT_SCALE_0
#define NVDLA_CDP_D_DATOUT_SCALE_0			_MK_ADDR_CONST(0xd084)
#define NVDLA_CDP_D_DATOUT_SCALE_0_DATOUT_SCALE_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_DATOUT_SCALE_0_DATOUT_SCALE_FIELD			_MK_FIELD_CONST(0xffff, NVDLA_CDP_D_DATOUT_SCALE_0_DATOUT_SCALE_SHIFT)


// Register NVDLA_CDP_D_DATOUT_SHIFTER_0
#define NVDLA_CDP_D_DATOUT_SHIFTER_0			_MK_ADDR_CONST(0xd088)
#define NVDLA_CDP_D_DATOUT_SHIFTER_0_DATOUT_SHIFTER_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_DATOUT_SHIFTER_0_DATOUT_SHIFTER_FIELD			_MK_FIELD_CONST(0x3f, NVDLA_CDP_D_DATOUT_SHIFTER_0_DATOUT_SHIFTER_SHIFT)


// Register NVDLA_CDP_D_NAN_INPUT_NUM_0
#define NVDLA_CDP_D_NAN_INPUT_NUM_0			_MK_ADDR_CONST(0xd08c)
#define NVDLA_CDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_D_NAN_INPUT_NUM_0_NAN_INPUT_NUM_SHIFT)


// Register NVDLA_CDP_D_INF_INPUT_NUM_0
#define NVDLA_CDP_D_INF_INPUT_NUM_0			_MK_ADDR_CONST(0xd090)
#define NVDLA_CDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_D_INF_INPUT_NUM_0_INF_INPUT_NUM_SHIFT)


// Register NVDLA_CDP_D_NAN_OUTPUT_NUM_0
#define NVDLA_CDP_D_NAN_OUTPUT_NUM_0			_MK_ADDR_CONST(0xd094)
#define NVDLA_CDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_D_NAN_OUTPUT_NUM_0_NAN_OUTPUT_NUM_SHIFT)


// Register NVDLA_CDP_D_OUT_SATURATION_0
#define NVDLA_CDP_D_OUT_SATURATION_0			_MK_ADDR_CONST(0xd098)
#define NVDLA_CDP_D_OUT_SATURATION_0_OUT_SATURATION_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_OUT_SATURATION_0_OUT_SATURATION_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_D_OUT_SATURATION_0_OUT_SATURATION_SHIFT)


// Register NVDLA_CDP_D_PERF_ENABLE_0
#define NVDLA_CDP_D_PERF_ENABLE_0			_MK_ADDR_CONST(0xd09c)
#define NVDLA_CDP_D_PERF_ENABLE_0_DMA_EN_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_PERF_ENABLE_0_DMA_EN_FIELD			_MK_FIELD_CONST(0x1, NVDLA_CDP_D_PERF_ENABLE_0_DMA_EN_SHIFT)
#define NVDLA_CDP_D_PERF_ENABLE_0_DMA_EN_DISABLE			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_D_PERF_ENABLE_0_DMA_EN_ENABLE			_MK_ENUM_CONST(0x1)
#define NVDLA_CDP_D_PERF_ENABLE_0_LUT_EN_SHIFT			_MK_SHIFT_CONST(1)
#define NVDLA_CDP_D_PERF_ENABLE_0_LUT_EN_FIELD			_MK_FIELD_CONST(0x1, NVDLA_CDP_D_PERF_ENABLE_0_LUT_EN_SHIFT)
#define NVDLA_CDP_D_PERF_ENABLE_0_LUT_EN_DISABLE			_MK_ENUM_CONST(0x0)
#define NVDLA_CDP_D_PERF_ENABLE_0_LUT_EN_ENABLE			_MK_ENUM_CONST(0x1)


// Register NVDLA_CDP_D_PERF_WRITE_STALL_0
#define NVDLA_CDP_D_PERF_WRITE_STALL_0			_MK_ADDR_CONST(0xd0a0)
#define NVDLA_CDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_D_PERF_WRITE_STALL_0_PERF_WRITE_STALL_SHIFT)


// Register NVDLA_CDP_D_PERF_LUT_UFLOW_0
#define NVDLA_CDP_D_PERF_LUT_UFLOW_0			_MK_ADDR_CONST(0xd0a4)
#define NVDLA_CDP_D_PERF_LUT_UFLOW_0_PERF_LUT_UFLOW_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_PERF_LUT_UFLOW_0_PERF_LUT_UFLOW_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_D_PERF_LUT_UFLOW_0_PERF_LUT_UFLOW_SHIFT)


// Register NVDLA_CDP_D_PERF_LUT_OFLOW_0
#define NVDLA_CDP_D_PERF_LUT_OFLOW_0			_MK_ADDR_CONST(0xd0a8)
#define NVDLA_CDP_D_PERF_LUT_OFLOW_0_PERF_LUT_OFLOW_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_PERF_LUT_OFLOW_0_PERF_LUT_OFLOW_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_D_PERF_LUT_OFLOW_0_PERF_LUT_OFLOW_SHIFT)


// Register NVDLA_CDP_D_PERF_LUT_HYBRID_0
#define NVDLA_CDP_D_PERF_LUT_HYBRID_0			_MK_ADDR_CONST(0xd0ac)
#define NVDLA_CDP_D_PERF_LUT_HYBRID_0_PERF_LUT_HYBRID_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_PERF_LUT_HYBRID_0_PERF_LUT_HYBRID_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_D_PERF_LUT_HYBRID_0_PERF_LUT_HYBRID_SHIFT)


// Register NVDLA_CDP_D_PERF_LUT_LE_HIT_0
#define NVDLA_CDP_D_PERF_LUT_LE_HIT_0			_MK_ADDR_CONST(0xd0b0)
#define NVDLA_CDP_D_PERF_LUT_LE_HIT_0_PERF_LUT_LE_HIT_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_PERF_LUT_LE_HIT_0_PERF_LUT_LE_HIT_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_D_PERF_LUT_LE_HIT_0_PERF_LUT_LE_HIT_SHIFT)


// Register NVDLA_CDP_D_PERF_LUT_LO_HIT_0
#define NVDLA_CDP_D_PERF_LUT_LO_HIT_0			_MK_ADDR_CONST(0xd0b4)
#define NVDLA_CDP_D_PERF_LUT_LO_HIT_0_PERF_LUT_LO_HIT_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_PERF_LUT_LO_HIT_0_PERF_LUT_LO_HIT_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_D_PERF_LUT_LO_HIT_0_PERF_LUT_LO_HIT_SHIFT)


// Register NVDLA_CDP_D_CYA_0
#define NVDLA_CDP_D_CYA_0			_MK_ADDR_CONST(0xd0b8)
#define NVDLA_CDP_D_CYA_0_CYA_SHIFT			_MK_SHIFT_CONST(0)
#define NVDLA_CDP_D_CYA_0_CYA_FIELD			_MK_FIELD_CONST(0xffffffff, NVDLA_CDP_D_CYA_0_CYA_SHIFT)



// To satisfy various compilers and platforms,
// we let users control the types and syntax of certain constants, using macros.
#ifndef _MK_SHIFT_CONST
  #define _MK_SHIFT_CONST(_constant_) _constant_
#endif
#ifndef _MK_MASK_CONST
  #define _MK_MASK_CONST(_constant_) _constant_
#endif
#ifndef _MK_ENUM_CONST
  #define _MK_ENUM_CONST(_constant_) (_constant_ ## UL)
#endif
#ifndef _MK_ADDR_CONST
  #define _MK_ADDR_CONST(_constant_) _constant_
#endif
#ifndef _MK_FIELD_CONST
  #define _MK_FIELD_CONST(_mask_, _shift_) (_MK_MASK_CONST(_mask_) << _MK_SHIFT_CONST(_shift_))
#endif



//
// ADDRESS SPACES
//

#define BASE_ADDRESS_NVDLA_CDP	0xd000