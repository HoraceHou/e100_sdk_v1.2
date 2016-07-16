/**
  * @file src/app/apps/gui/resource/connectedcam/gui_table_blend_32bit.c
  *
  *   Blending GUI objects
  *
  * History:
  *    2013/11/28 - [Martin Lai] created file
  *
  *
 * Copyright (c) 2015 Ambarella, Inc.
 *
 * This file and its contents (��Software��) are protected by intellectual property rights
 * including, without limitation, U.S. and/or foreign copyrights.  This Software is also the
 * confidential and proprietary information of Ambarella, Inc. and its licensors.  You may
 * not use, reproduce, disclose, distribute, modify, or otherwise prepare derivative
 * works of this Software or any portion thereof except pursuant to a signed license
 * agreement or nondisclosure agreement with Ambarella, Inc. or its authorized
 * affiliates.	In the absence of such an agreement, you agree to promptly notify and
 * return this Software to Ambarella, Inc.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF NON-
 * INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL AMBARELLA, INC. OR ITS AFFILIATES BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; COMPUTER FAILURE OR
 * MALFUNCTION; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  */

#include "gui_resource.h"
#include "gui_table.h"

#define BLEND_TABLE_FONT_HEIGHT   (54)

/*************************************************************************
 * Blending objects
 ************************************************************************/

APPLIB_GRAPHIC_UIOBJ_s bobj_date_stream_0_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_DATE, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_date_stream_1_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_DATE, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_date_stream_2_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_DATE, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_date_stream_3_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_DATE, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_date_stream_4_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_DATE, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_date_stream_5_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_DATE, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_time_h_m_stream_0_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_TIME_H_M, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_time_h_m_stream_1_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_TIME_H_M, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_time_h_m_stream_2_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_TIME_H_M, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_time_h_m_stream_3_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_TIME_H_M, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_time_h_m_stream_4_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_TIME_H_M, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_time_h_m_stream_5_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_TIME_H_M, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_time_s_stream_0_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_TIME_S, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_time_s_stream_1_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_TIME_S, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_time_s_stream_2_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_TIME_S, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_time_s_stream_3_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_TIME_S, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_time_s_stream_4_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_TIME_S, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_time_s_stream_5_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_OSD_BLEND_TIME_S, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 3, COLOR_ARGB32BIT_DARKGRAY}, 0x0, 0x0}}
};

#ifdef CONFIG_APP_ARD


APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_1_stream_0_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_1, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_1_stream_1_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_1, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_1_stream_2_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_1, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_1_stream_3_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_1, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_1_stream_4_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_1, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_1_stream_5_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_1, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};


APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_2_stream_0_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_2, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_2_stream_1_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_2, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_2_stream_2_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_2, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_2_stream_3_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_2, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_2_stream_4_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_2, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_2_stream_5_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_2, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};


APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_3_stream_0_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_3, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_3_stream_1_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_3, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_3_stream_2_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_3, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_3_stream_3_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_3, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_3_stream_4_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_3, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_3_stream_5_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_3, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};


APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_4_stream_0_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_4, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_4_stream_1_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_4, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_4_stream_2_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_4, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_4_stream_3_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_4, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_4_stream_4_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_4, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_4_stream_5_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_4, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};


APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_5_stream_0_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_5, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_5_stream_1_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_5, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_5_stream_2_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_5, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_5_stream_3_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_5, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_5_stream_4_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_5, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_admin_area_5_stream_5_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_ADMIN_ARER_5, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};


APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_driverid_stream_0_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_EXTRA, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_driverid_stream_1_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_EXTRA, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_driverid_stream_2_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_EXTRA, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_driverid_stream_3_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_EXTRA, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_driverid_stream_4_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_EXTRA, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

APPLIB_GRAPHIC_UIOBJ_s bobj_cardv_driverid_stream_5_32bit = {
    {0}, 0, GP_MAIN_1, 0, 0, APPLIB_GRAPHIC_UIOBJ_STRING,
    {.Str = {0, 0, 960, BLEND_TABLE_FONT_HEIGHT, BLEND_TABLE_FONT_HEIGHT, COLOR_ARGB32BIT_TEXT_BORDER, COLOR_ARGB32BIT_LIGHTGRAY,
                0x0, APPLIB_GRAPHIC_STRING_ALIGN_ML, 0, STR_POLICE_EXTRA, {1, APPLIB_GRAPHIC_STRING_SHADOW_BR, 2, COLOR_8BIT_DARKGRAY}, 0x0, 0x0}}
};

#endif


/*************************************************************************
 * Blending object table
 ************************************************************************/
APPLIB_GRAPHIC_UIOBJ_s *gui_table_blend_32bit[BOBJ_NUM] = {
    &bobj_date_stream_0_32bit,
    &bobj_date_stream_1_32bit,
    &bobj_date_stream_2_32bit,
    &bobj_date_stream_3_32bit,
    &bobj_date_stream_4_32bit,
    &bobj_date_stream_5_32bit,
    &bobj_time_h_m_stream_0_32bit,
    &bobj_time_h_m_stream_1_32bit,
    &bobj_time_h_m_stream_2_32bit,
    &bobj_time_h_m_stream_3_32bit,
    &bobj_time_h_m_stream_4_32bit,
    &bobj_time_h_m_stream_5_32bit,
    &bobj_time_s_stream_0_32bit,
    &bobj_time_s_stream_1_32bit,
    &bobj_time_s_stream_2_32bit,
    &bobj_time_s_stream_3_32bit,
    &bobj_time_s_stream_4_32bit,
    &bobj_time_s_stream_5_32bit,
#ifdef CONFIG_APP_ARD
	&bobj_cardv_admin_area_1_stream_0_32bit,
	&bobj_cardv_admin_area_1_stream_1_32bit,
	&bobj_cardv_admin_area_1_stream_2_32bit,
	&bobj_cardv_admin_area_1_stream_3_32bit,
	&bobj_cardv_admin_area_1_stream_4_32bit,
	&bobj_cardv_admin_area_1_stream_5_32bit,
	&bobj_cardv_admin_area_2_stream_0_32bit,
	&bobj_cardv_admin_area_2_stream_1_32bit,
	&bobj_cardv_admin_area_2_stream_2_32bit,
	&bobj_cardv_admin_area_2_stream_3_32bit,
	&bobj_cardv_admin_area_2_stream_4_32bit,
	&bobj_cardv_admin_area_2_stream_5_32bit,
	&bobj_cardv_admin_area_3_stream_0_32bit,
	&bobj_cardv_admin_area_3_stream_1_32bit,
	&bobj_cardv_admin_area_3_stream_2_32bit,
	&bobj_cardv_admin_area_3_stream_3_32bit,
	&bobj_cardv_admin_area_3_stream_4_32bit,
	&bobj_cardv_admin_area_3_stream_5_32bit,
	&bobj_cardv_admin_area_4_stream_0_32bit,
	&bobj_cardv_admin_area_4_stream_1_32bit,
	&bobj_cardv_admin_area_4_stream_2_32bit,
	&bobj_cardv_admin_area_4_stream_3_32bit,
	&bobj_cardv_admin_area_4_stream_4_32bit,
	&bobj_cardv_admin_area_4_stream_5_32bit,
	&bobj_cardv_admin_area_5_stream_0_32bit,
	&bobj_cardv_admin_area_5_stream_1_32bit,
	&bobj_cardv_admin_area_5_stream_2_32bit,
	&bobj_cardv_admin_area_5_stream_3_32bit,
	&bobj_cardv_admin_area_5_stream_4_32bit,
	&bobj_cardv_admin_area_5_stream_5_32bit,
	&bobj_cardv_driverid_stream_0_32bit,
	&bobj_cardv_driverid_stream_1_32bit,
	&bobj_cardv_driverid_stream_2_32bit,
	&bobj_cardv_driverid_stream_3_32bit,
	&bobj_cardv_driverid_stream_4_32bit,
	&bobj_cardv_driverid_stream_5_32bit,

#endif


    NULL    /** BOBJ_END */
};