/***********************************************************************************************************************
 * Copyright [2015] Renesas Electronics Corporation and/or its licensors. All Rights Reserved.
 * 
 * This file is part of Renesas SynergyTM Software Package (SSP)
 *
 * The contents of this file (the "contents") are proprietary and confidential to Renesas Electronics Corporation
 * and/or its licensors ("Renesas") and subject to statutory and contractual protections.
 *
 * This file is subject to a Renesas SSP license agreement. Unless otherwise agreed in an SSP license agreement with
 * Renesas: 1) you may not use, copy, modify, distribute, display, or perform the contents; 2) you may not use any name
 * or mark of Renesas for advertising or publicity purposes or in connection with your use of the contents; 3) RENESAS
 * MAKES NO WARRANTY OR REPRESENTATIONS ABOUT THE SUITABILITY OF THE CONTENTS FOR ANY PURPOSE; THE CONTENTS ARE PROVIDED
 * "AS IS" WITHOUT ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE, AND NON-INFRINGEMENT; AND 4) RENESAS SHALL NOT BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, OR
 * CONSEQUENTIAL DAMAGES, INCLUDING DAMAGES RESULTING FROM LOSS OF USE, DATA, OR PROJECTS, WHETHER IN AN ACTION OF
 * CONTRACT OR TORT, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THE CONTENTS. Third-party contents
 * included in this file may be subject to different terms.
 **********************************************************************************************************************/
/**********************************************************************************************************************
* File Name    : sf_audio_playback.h
* Description  : Console AMS framework driver header file
***********************************************************************************************************************/

#ifndef SF_AUDIO_PLAYBACK_H
#define SF_AUDIO_PLAYBACK_H

/*******************************************************************************************************************//**
 * @ingroup SF_Library
 * @defgroup SF_AUDIO_PLAYBACK Audio Framework
 * @brief RTOS-integrated Audio Framework.
 *
 * @section SF_AUDIO_PLAYBACK_SUMMARY Summary
 * This module is a ThreadX-aware Audio Framework. The module implements @ref SF_AUDIO_PLAYBACK_API.
 *
 * @{
 **********************************************************************************************************************/

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "bsp_api.h"

/* Includes driver interfaces. */
#include "sf_audio_playback_api.h"

/* Include configuration */
#include "sf_audio_playback_cfg.h"

/**********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/
/** Version of code that implements the API defined in this file */
#define SF_AUDIO_PLAYBACK_CODE_VERSION_MAJOR  (1)
#define SF_AUDIO_PLAYBACK_CODE_VERSION_MINOR  (1)

/**********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/**********************************************************************************************************************
 * Exported global variables
 **********************************************************************************************************************/
/** @cond INC_HEADER_DEFS_SEC */
/** Filled in Interface API structure for this Instance. */
extern const sf_audio_playback_api_t      g_sf_audio_playback_on_sf_audio_playback;
/** @endcond */

/*******************************************************************************************************************//**
 * @} (end defgroup SF_AUDIO_PLAYBACK)
 **********************************************************************************************************************/

#endif /* SF_AUDIO_PLAYBACK_H */
