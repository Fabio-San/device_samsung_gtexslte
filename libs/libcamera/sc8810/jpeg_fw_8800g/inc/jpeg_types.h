#ifndef _JPEG_TYPES_H_
#define _JPEG_TYPES_H_

#include "sci_types.h"

#if defined(WIN32)
//do not open any of the following micros on simulator or assert maybe occur
#undef JPEG_DEBUG	
#undef JPEG_DEBUG_LOW
#else
#define JPEG_DEBUG	
#undef JPEG_DEBUG_LOW
#endif
#define JPEG_DEBUG

#ifdef JPEG_DEBUG
//#define JPEG_PRINT(_x_)   					SCI_TraceLow _x_
#define JPEG_PRINT   					LOGV
#else
#define JPEG_PRINT( _format_string )
#endif

#ifdef JPEG_DEBUG_LOW
//#define JPEG_PRINT_LOW(_x_)               	SCI_TraceLow _x_
#define JPEG_PRINT_LOW              	JPEG_PRINT
#else
#define JPEG_PRINT_LOW( _format_string ) 
#endif

typedef enum
{
	JPEG_QUALITY_LOW = 0,				//bad
	JPEG_QUALITY_MIDDLE_LOW,			//poor
	JPEG_QUALITY_MIDDLE,				//good
	JPEG_QUALITY_MIDDLE_HIGH,			//excellent
	JPEG_QUALITY_HIGH,					//oustanding
	JPEG_QUALITY_MAX
}JPEG_QUALITY_E;

typedef enum
{
	JPEG_SCALING_DOWN_ZERO = 0,			//no scaling
	JPEG_SCALING_DOWN_HALF = 1,			//half scaling(1/2)
	JPEG_SCALING_DOWN_QUATER = 2,			//quater scaling(1/4)
	JPEG_SCALING_DOWN_MAX 

} JPEG_SCALING_FACTOR_E;

typedef enum
{
	JPEGE_RESTART_INTERVAL = -13,
	JPEGE_FRAME_READY = -12,
	JPEGE_INSTANCE_ERROR = -11,
	JPEGE_HW_TIMEOUT = -10,
	JPEGE_HW_ERROR = -9,
	JPEGE_EWL_MEMORY_ERROR = -8,
	JPEGE_EWL_ERROR = -7,
	JPEGE_OUTPUT_BUFFER_OVERFLOW = -6,
	JPEGE_INVALID_STATUS = -5,
	JPEGE_MEMORY_ERROR = -4,
	JPEGE_INVALID_ARGUMENT = -3,
	JPEGE_FORMAT_UNSUPPORTED = -2,
	JPEG_SUCCESS = 0,
	JPEG_STATUS_BUSY,
	JPEG_MEMORY_NOT_ENOUGH,
	JPEG_MEMORY_MALLOC_FAILED,
	JPEG_MEMORY_FREE_FAILED,
	JPEG_OUTPUT_BUFFER_OVERFLOW,
	JPEG_READ_FILE_ERROR,
	JPEG_WRITE_FILE_ERROR,
	JPEGD_INVALID_ARGUMENT,
	JPEGD_INVALID_STATUS,
	JPEGD_PARSE_EXIF_ERROR,
	JPEGD_SOI_ERROR,
	JPEGD_EOI_ERROR,
	JPEGD_SOF0_PRECISION_ERROR,
	JPEGD_SOF0_HnW_UNSUPPORTED,
	JPEGD_SOF0_COMPONENT_ERROR,
	JPEGD_SOF2_PRECISION_ERROR,
	JPEGD_SOF2_HnW_UNSUPPORTED,
	JPEGD_SOF2_COMPONENT_ERROR,
	JPEGD_SOS_COMPONENT_ERROR,
	JPEGD_MCULINE_BUF_NOT_ENOUGH,
	JPEGD_DWL_ERROR,
	JPEGD_DWL_MEMORY_ERROR,
	JPEGD_HW_ERROR,
	JPEGD_HW_TIMEOUT,
	JPEGD_INSTANCE_ERROR,
	JPEGD_FORMAT_UNSUPPORTED,	 
	JPEGD_VPD_FRAME_READY,
	JPEGD_RESTART_ERROR,
	JPEGD_PROGRESSIVE_FOUND,
	JPEG_SOFTWARE_SCALING_DOWN_FAILED,
	JPEG_FAILED = 0xff
}JPEG_RET_E;

#endif
