
#ifndef _AVSERVER_THR_H_
#define _AVSERVER_THR_H_

#include <osa.h>

#define VIDEO_CAPTURE_THR_PRI       (OSA_THR_PRI_MAX-1)
#define VIDEO_LDC_THR_PRI           (OSA_THR_PRI_MAX-1)
#define VIDEO_VNF_THR_PRI           (OSA_THR_PRI_MAX-1)
#define VIDEO_RESIZE_THR_PRI        (OSA_THR_PRI_MAX-1)
#define VIDEO_ENCODE_THR_PRI        (OSA_THR_PRI_MAX)
#define VIDEO_ENCRYPT_THR_PRI       (OSA_THR_PRI_MAX-10)
#define VIDEO_STREAM_THR_PRI        (OSA_THR_PRI_MAX-1)
#define VIDEO_2A_THR_PRI            (OSA_THR_PRI_MAX-1)
#define VIDEO_VS_THR_PRI            (OSA_THR_PRI_MAX-1)
#define VIDEO_SWOSD_THR_PRI         (OSA_THR_PRI_MAX-4)
#define VIDEO_FD_THR_PRI            (OSA_THR_PRI_MAX-4)
#define VIDEO_DISPLAY_THR_PRI       (OSA_THR_PRI_MAX-2)
#define VIDEO_MOTION_THR_PRI		(OSA_THR_PRI_MAX-4)

#define AUDIO_CAPTURE_THR_PRI		(OSA_THR_PRI_MAX-1)

#define AVSERVER_MAIN_THR_PRI       (OSA_THR_PRI_MAX-1)

#define VIDEO_STACK_SIZE_DEFAULT    (0*KB)					//(20*KB)

#define VIDEO_CAPTURE_STACK_SIZE       (VIDEO_STACK_SIZE_DEFAULT)
#define VIDEO_LDC_STACK_SIZE           (VIDEO_STACK_SIZE_DEFAULT)
#define VIDEO_VNF_STACK_SIZE           (VIDEO_STACK_SIZE_DEFAULT)
#define VIDEO_RESIZE_STACK_SIZE        (VIDEO_STACK_SIZE_DEFAULT)
#define VIDEO_ENCODE_STACK_SIZE        (VIDEO_STACK_SIZE_DEFAULT)
#define VIDEO_ENCRYPT_STACK_SIZE       (VIDEO_STACK_SIZE_DEFAULT)
#define VIDEO_STREAM_STACK_SIZE        (VIDEO_STACK_SIZE_DEFAULT)
#define VIDEO_2A_STACK_SIZE            (VIDEO_STACK_SIZE_DEFAULT)
#define VIDEO_VS_STACK_SIZE            (VIDEO_STACK_SIZE_DEFAULT)
#define VIDEO_SWOSD_STACK_SIZE         (VIDEO_STACK_SIZE_DEFAULT)
#define VIDEO_FD_STACK_SIZE            (VIDEO_STACK_SIZE_DEFAULT)
#define VIDEO_DISPLAY_STACK_SIZE       (VIDEO_STACK_SIZE_DEFAULT)
#define VIDEO_MOTION_STACK_SIZE		   (VIDEO_STACK_SIZE_DEFAULT)

#define AUDIO_CAPTURE_STACK_SIZE		   (VIDEO_STACK_SIZE_DEFAULT)

#define AVSERVER_MAIN_STACK_SIZE       (VIDEO_STACK_SIZE_DEFAULT)

#endif  /*  _AVSERVER_THR_H_ */
