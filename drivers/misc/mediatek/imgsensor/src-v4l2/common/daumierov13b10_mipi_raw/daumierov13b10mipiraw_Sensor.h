/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 */

/*****************************************************************************
 *
 * Filename:
 * ---------
 *     DAUMIEROV13B10mipi_Sensor.h
 *
 * Project:
 * --------
 *     ALPS
 *
 * Description:
 * ------------
 *     CMOS sensor header file
 *
 ****************************************************************************/
#ifndef _DAUMIEROV13B10MIPI_SENSOR_H
#define _DAUMIEROV13B10MIPI_SENSOR_H


static kal_uint16 daumierov13b10_init_setting[] = {
	0x0103, 0x01,
	0x0303, 0x01,
	0x0305, 0x46,
	0x0321, 0x00,
	0x0323, 0x04,
	0x0324, 0x01,
	0x0325, 0x50,
	0x0326, 0x81,
	0x0327, 0x05,
	0x3011, 0x7c,
	0x3012, 0x07,
	0x3013, 0x32,
	0x3107, 0x23,
	0x3501, 0x0c,
	0x3502, 0x10,
	0x3504, 0x08,
	0x3508, 0x07,
	0x3509, 0xc0,
	0x3600, 0x16,
	0x3601, 0x54,
	0x3612, 0x4e,
	0x3620, 0x00,
	0x3621, 0x28,
	0x3622, 0xe6,
	0x3623, 0x00,
	0x3662, 0x92,
	0x3666, 0xbb,
	0x3667, 0x44,
	0x366e, 0xff,
	0x366f, 0xf3,
	0x3675, 0x44,
	0x3676, 0x00,
	0x367f, 0xe9,
	0x3681, 0x32,
	0x3682, 0x1f,
	0x3683, 0x0b,
	0x3684, 0x0b,
	0x3704, 0x0f,
	0x3706, 0x40,
	0x3708, 0x3b,
	0x3709, 0x72,
	0x370b, 0xa2,
	0x3714, 0x24,
	0x371a, 0x3e,
	0x3725, 0x42,
	0x3739, 0x12,
	0x3767, 0x00,
	0x377a, 0x0d,
	0x3789, 0x18,
	0x3790, 0x40,
	0x3791, 0xa2,
	0x37c2, 0x04,
	0x37c3, 0xf1,
	0x37d9, 0x0c,
	0x37da, 0x02,
	0x37dc, 0x02,
	0x37e1, 0x04,
	0x37e2, 0x0a,
	0x3800, 0x00,
	0x3801, 0x00,
	0x3802, 0x00,
	0x3803, 0x08,
	0x3804, 0x10,
	0x3805, 0x8f,
	0x3806, 0x0c,
	0x3807, 0x47,
	0x3808, 0x10,
	0x3809, 0x70,
	0x380a, 0x0c,
	0x380b, 0x30,
	0x380c, 0x04,
	0x380d, 0x98,
	0x380e, 0x0c,
	0x380f, 0x7c,
	0x3811, 0x0f,
	0x3813, 0x08,
	0x3814, 0x01,
	0x3815, 0x01,
	0x3816, 0x01,
	0x3817, 0x01,
	0x381f, 0x08,
	0x3820, 0x88,
	0x3821, 0x00,
	0x3822, 0x14,
	0x3823, 0x18,
	0x3827, 0x01,
	0x382e, 0xe6,
	0x3c80, 0x00,
	0x3c87, 0x01,
	0x3c8c, 0x19,
	0x3c8d, 0x1c,
	0x3ca0, 0x00,
	0x3ca1, 0x00,
	0x3ca2, 0x00,
	0x3ca3, 0x00,
	0x3ca4, 0x50,
	0x3ca5, 0x11,
	0x3ca6, 0x01,
	0x3ca7, 0x00,
	0x3ca8, 0x00,
	0x3f02, 0x2a,
	0x3f03, 0x10,
	0x4008, 0x02,
	0x4009, 0x0f,
	0x400a, 0x01,
	0x400b, 0x19,
	0x4011, 0x21,
	0x4017, 0x08,
	0x4019, 0x04,
	0x401a, 0x58,
	0x4032, 0x1e,
	0x4050, 0x02,
	0x4051, 0x09,
	0x405e, 0x00,
	0x4066, 0x02,
	0x4501, 0x00,
	0x4502, 0x10,
	0x4505, 0x00,
	0x4800, 0x64,
	0x481b, 0x3e,
	0x481f, 0x30,
	0x4821, 0x50,
	0x4825, 0x34,
	0x482b, 0x04,
	0x482e, 0x3f,
	0x4837, 0x0e,
	0x484b, 0x01,
	0x4883, 0x02,
	0x5000, 0xff,
	0x5001, 0x0d,
	0x5045, 0x20,
	0x5046, 0x20,
	0x5047, 0xa4,
	0x5048, 0x20,
	0x5049, 0xa4,
	0x5205, 0x31,
	0x5206, 0x47,
	0x3021, 0x03,
};

//4160x2360
static kal_uint16 daumierov13b10_preview_setting[] = {
	0x0305, 0x46,
	0x0325, 0x50,
	0x0327, 0x05,
	0x3501, 0x0c,
	0x3502, 0x10,
	0x3621, 0x28,
	0x3622, 0xe6,
	0x3623, 0x00,
	0x3662, 0x92,
	0x3714, 0x24,
	0x371a, 0x3e,
	0x3739, 0x12,
	0x37c2, 0x04,
	0x37d9, 0x0c,
	0x37e2, 0x0a,
	0x37e4, 0x04,
	0x3800, 0x00,
	0x3801, 0x00,
	0x3802, 0x00,
	0x3803, 0x08,
	0x3804, 0x10,
	0x3805, 0x8f,
	0x3806, 0x0c,
	0x3807, 0x47,
	0x3808, 0x10,
	0x3809, 0x40,
	0x380a, 0x0c,
	0x380b, 0x30,
	0x380c, 0x04,
	0x380d, 0x98,
	0x380e, 0x0c,
	0x380f, 0x7c,
	0x3810, 0x00,
	0x3811, 0x27,
	0x3813, 0x08,
	0x3814, 0x01,
	0x3815, 0x01,
	0x3816, 0x01,
	0x3817, 0x01,
	0x3820, 0x88,
	0x3c8c, 0x19,
	0x3f02, 0x2a,
	0x3f03, 0x10,
	0x4008, 0x02,
	0x4009, 0x0f,
	0x4050, 0x02,
	0x4051, 0x09,
	0x4501, 0x00,
	0x4505, 0x00,
	0x4837, 0x0e,
	0x5000, 0xff,
	0x5001, 0x0f,
	0x5200, 0x1b,
};

//same preview
static kal_uint16 daumierov13b10_capture_setting[] = {

};

static kal_uint16 daumierov13b10_normal_video_setting[] = {
	0x0305, 0x46,
	0x0325, 0x50,
	0x0327, 0x05,
	0x3501, 0x0c,
	0x3502, 0x10,
	0x3621, 0x28,
	0x3622, 0xe6,
	0x3623, 0x00,
	0x3662, 0x92,
	0x3714, 0x24,
	0x371a, 0x3e,
	0x3739, 0x12,
	0x37c2, 0x04,
	0x37d9, 0x0c,
	0x37e2, 0x0a,
	0x37e4, 0x04,
	0x3800, 0x00,
	0x3801, 0x00,
	0x3802, 0x01,
	0x3803, 0x88,
	0x3804, 0x10,
	0x3805, 0x8f,
	0x3806, 0x0a,
	0x3807, 0xc7,
	0x3808, 0x10,
	0x3809, 0x40,
	0x380a, 0x09,
	0x380b, 0x24,
	0x380c, 0x04,
	0x380d, 0x98,
	0x380e, 0x0c,
	0x380f, 0x7c,
	0x3810, 0x00,
	0x3811, 0x27,
	0x3813, 0x0e,
	0x3814, 0x01,
	0x3815, 0x01,
	0x3816, 0x01,
	0x3817, 0x01,
	0x3820, 0x88,
	0x3c8c, 0x19,
	0x3f02, 0x2a,
	0x3f03, 0x10,
	0x4008, 0x02,
	0x4009, 0x0f,
	0x4050, 0x02,
	0x4051, 0x09,
	0x4501, 0x00,
	0x4505, 0x00,
	0x4837, 0x0e,
	0x5000, 0xff,
	0x5001, 0x0f,
	0x5200, 0x19,
};

static kal_uint16 daumierov13b10_custom1_setting[] = {
	0x0305, 0x46,
	0x0325, 0x50,
	0x0327, 0x05,
	0x3501, 0x0c,
	0x3502, 0x10,
	0x3621, 0x28,
	0x3622, 0xe6,
	0x3623, 0x00,
	0x3662, 0x92,
	0x3714, 0x24,
	0x371a, 0x3e,
	0x3739, 0x12,
	0x37c2, 0x04,
	0x37d9, 0x0c,
	0x37e2, 0x0a,
	0x37e4, 0x04,
	0x3800, 0x02,
	0x3801, 0x00,
	0x3802, 0x01,
	0x3803, 0x70,
	0x3804, 0x0e,
	0x3805, 0x8f,
	0x3806, 0x0a,
	0x3807, 0xdf,
	0x3808, 0x0c,
	0x3809, 0x80,
	0x380a, 0x09,
	0x380b, 0x60,
	0x380c, 0x04,
	0x380d, 0x98,
	0x380e, 0x0c,
	0x380f, 0x66,
	0x3810, 0x00,
	0x3811, 0x07,
	0x3813, 0x08,
	0x3814, 0x01,
	0x3815, 0x01,
	0x3816, 0x01,
	0x3817, 0x01,
	0x3820, 0x88,
	0x3c8c, 0x19,
	0x3f02, 0x2a,
	0x3f03, 0x10,
	0x4008, 0x02,
	0x4009, 0x0f,
	0x4050, 0x02,
	0x4051, 0x09,
	0x4501, 0x00,
	0x4505, 0x00,
	0x4837, 0x0e,
	0x5000, 0xff,
	0x5001, 0x0f,
	0x5200, 0x1b,
};

static kal_uint16 daumierov13b10_custom2_setting[] = {
	0x0305, 0x46,
	0x0325, 0x50,
	0x0327, 0x05,
	0x3501, 0x0c,
	0x3502, 0x10,
	0x3621, 0x28,
	0x3622, 0xe6,
	0x3623, 0x00,
	0x3662, 0x92,
	0x3714, 0x24,
	0x371a, 0x3e,
	0x3739, 0x12,
	0x37c2, 0x04,
	0x37d9, 0x0c,
	0x37e2, 0x0a,
	0x37e4, 0x04,
	0x3800, 0x02,
	0x3801, 0x00,
	0x3802, 0x02,
	0x3803, 0x9c,
	0x3804, 0x0e,
	0x3805, 0x8f,
	0x3806, 0x09,
	0x3807, 0xb3,
	0x3808, 0x0c,
	0x3809, 0x80,
	0x380a, 0x07,
	0x380b, 0x08,
	0x380c, 0x04,
	0x380d, 0x98,
	0x380e, 0x0c,
	0x380f, 0x66,
	0x3810, 0x00,
	0x3811, 0x07,
	0x3813, 0x08,
	0x3814, 0x01,
	0x3815, 0x01,
	0x3816, 0x01,
	0x3817, 0x01,
	0x3820, 0x88,
	0x3c8c, 0x19,
	0x3f02, 0x2a,
	0x3f03, 0x10,
	0x4008, 0x02,
	0x4009, 0x0f,
	0x4050, 0x02,
	0x4051, 0x09,
	0x4501, 0x00,
	0x4505, 0x00,
	0x4837, 0x0e,
	0x5000, 0xff,
	0x5001, 0x0f,
	0x5200, 0x1b,
};

static kal_uint16 daumierov13b10_custom3_setting[] = { //1:1
	0x0305, 0x46,
	0x0325, 0x50,
	0x0327, 0x05,
	0x3501, 0x0c,
	0x3502, 0x10,
	0x3621, 0x28,
	0x3622, 0xe6,
	0x3623, 0x00,
	0x3662, 0x92,
	0x3714, 0x24,
	0x371a, 0x3e,
	0x3739, 0x12,
	0x37c2, 0x04,
	0x37d9, 0x0c,
	0x37e2, 0x0a,
	0x37e4, 0x04,
	0x3800, 0x00,
	0x3801, 0x00,
	0x3802, 0x00,
	0x3803, 0x08,
	0x3804, 0x10,
	0x3805, 0x8f,
	0x3806, 0x0c,
	0x3807, 0x47,
	0x3808, 0x0c,
	0x3809, 0x30,
	0x380a, 0x0c,
	0x380b, 0x30,
	0x380c, 0x04,
	0x380d, 0x98,
	0x380e, 0x0c,
	0x380f, 0x7c,
	0x3810, 0x02,
	0x3811, 0x27,
	0x3813, 0x08,
	0x3814, 0x01,
	0x3815, 0x01,
	0x3816, 0x01,
	0x3817, 0x01,
	0x3820, 0x88,
	0x3c8c, 0x19,
	0x3f02, 0x2a,
	0x3f03, 0x10,
	0x4008, 0x02,
	0x4009, 0x0f,
	0x4050, 0x02,
	0x4051, 0x09,
	0x4501, 0x00,
	0x4505, 0x00,
	0x4837, 0x0e,
	0x5000, 0xff,
	0x5001, 0x0f,
	0x5200, 0x1b,
};


static kal_uint16 daumierov13b10_custom4_setting[] = { //60fps
	0x0305, 0x46,
	0x0325, 0x50,
	0x0327, 0x04,
	0x3501, 0x06,
	0x3502, 0x10,
	0x3621, 0x68,
	0x3622, 0x66,
	0x3623, 0x03,
	0x3662, 0x88,
	0x3714, 0x28,
	0x371a, 0x3e,
	0x3739, 0x10,
	0x37c2, 0x14,
	0x37d9, 0x06,
	0x37e2, 0x0c,
	0x37e4, 0x00,
	0x3800, 0x00,
	0x3801, 0x00,
	0x3802, 0x01,
	0x3803, 0x80,
	0x3804, 0x10,
	0x3805, 0x8f,
	0x3806, 0x0a,
	0x3807, 0xcf,
	0x3808, 0x08,
	0x3809, 0x38,
	0x380a, 0x04,
	0x380b, 0xa0,
	0x380c, 0x04,
	0x380d, 0x98,
	0x380e, 0x06,
	0x380f, 0x32,
	0x3810, 0x00,
	0x3811, 0x07,
	0x3813, 0x04,
	0x3814, 0x03,
	0x3815, 0x01,
	0x3816, 0x03,
	0x3817, 0x01,
	0x3820, 0x8b,
	0x3c8c, 0x18,
	0x3f02, 0x0f,
	0x3f03, 0x00,
	0x4008, 0x00,
	0x4009, 0x05,
	0x4050, 0x00,
	0x4051, 0x05,
	0x4501, 0x08,
	0x4505, 0x04,
	0x4837, 0x0e,
	0x5000, 0xfd,
	0x5001, 0x0d,
	0x5200, 0x19,
};
enum IMGSENSOR_MODE {
	IMGSENSOR_MODE_PREVIEW,
	IMGSENSOR_MODE_CAPTURE,
	IMGSENSOR_MODE_VIDEO,
	IMGSENSOR_MODE_HIGH_SPEED_VIDEO,
	IMGSENSOR_MODE_SLIM_VIDEO,
	IMGSENSOR_MODE_CUSTOM1,
	IMGSENSOR_MODE_CUSTOM2,
	IMGSENSOR_MODE_CUSTOM3,
	IMGSENSOR_MODE_CUSTOM4,
	IMGSENSOR_MODE_CUSTOM5,
	IMGSENSOR_MODE_CUSTOM6,
	IMGSENSOR_MODE_CUSTOM7,
	IMGSENSOR_MODE_CUSTOM8,
	IMGSENSOR_MODE_CUSTOM9,
	IMGSENSOR_MODE_CUSTOM10,
	IMGSENSOR_MODE_CUSTOM11,
	IMGSENSOR_MODE_CUSTOM12,
	IMGSENSOR_MODE_CUSTOM13,
	IMGSENSOR_MODE_CUSTOM14,
	IMGSENSOR_MODE_CUSTOM15,
	IMGSENSOR_MODE_INIT = 0xff,
};

enum {
	OTP_QSC_NONE = 0x0,
	OTP_QSC_INTERNAL,
	OTP_QSC_CUSTOM,
};

struct imgsensor_mode_struct {
	kal_uint32 pclk; /* record different mode's pclk */
	kal_uint32 linelength; /* record different mode's linelength */
	kal_uint32 framelength; /* record different mode's framelength */

	kal_uint8 startx; /* record different mode's startx of grabwindow */
	kal_uint8 starty; /* record different mode's startx of grabwindow */

	kal_uint16 grabwindow_width;
	kal_uint16 grabwindow_height;

/* for MIPIDataLowPwr2HighSpeedSettleDelayCount by different scenario*/
	kal_uint8 mipi_data_lp2hs_settle_dc;

 /*     following for GetDefaultFramerateByScenario()    */
	kal_uint16 max_framerate;
	kal_uint32 mipi_pixel_rate;
};

/* SENSOR PRIVATE STRUCT FOR VARIABLES*/
struct imgsensor_struct {
	kal_uint8 mirror; /* mirrorflip information */

	kal_uint8 sensor_mode; /* record IMGSENSOR_MODE enum value */

	kal_uint32 shutter; /* current shutter */
	kal_uint16 gain; /* current gain */

	kal_uint32 pclk; /* current pclk */

	kal_uint32 frame_length; /* current framelength */
	kal_uint32 line_length; /* current linelength */

	kal_uint32 min_frame_length;
	kal_uint16 dummy_pixel; /* current dummypixel */
	kal_uint16 dummy_line; /* current dummline */

	kal_uint16 current_fps; /* current max fps */
	kal_bool autoflicker_en; /* record autoflicker enable or disable */
	kal_bool test_pattern; /* record test pattern mode or not */
	enum MSDK_SCENARIO_ID_ENUM current_scenario_id;
	kal_bool ihdr_en; /* ihdr enable or disable */
	kal_uint8 ihdr_mode; /* ihdr enable or disable */
	kal_uint8 pdaf_mode; /* ihdr enable or disable */
	kal_uint8 i2c_write_id; /* record current sensor's i2c write id */
};

/* SENSOR PRIVATE STRUCT FOR CONSTANT*/
struct imgsensor_info_struct {
	kal_uint32 sensor_id; /* record sensor id defined in Kd_imgsensor.h */
	kal_uint32 checksum_value; /* checksum value for Camera Auto Test */
	struct imgsensor_mode_struct pre;
	struct imgsensor_mode_struct cap;
	struct imgsensor_mode_struct cap1;
	struct imgsensor_mode_struct normal_video;
	struct imgsensor_mode_struct hs_video;
	struct imgsensor_mode_struct slim_video;
	struct imgsensor_mode_struct custom1;
	struct imgsensor_mode_struct custom2;
	struct imgsensor_mode_struct custom3;
	struct imgsensor_mode_struct custom4;
	struct imgsensor_mode_struct custom5;
	struct imgsensor_mode_struct custom6;
	struct imgsensor_mode_struct custom7;
	struct imgsensor_mode_struct custom8;
	struct imgsensor_mode_struct custom9;
	struct imgsensor_mode_struct custom10;
	struct imgsensor_mode_struct custom11;
	struct imgsensor_mode_struct custom12;
	struct imgsensor_mode_struct custom13;
	struct imgsensor_mode_struct custom14;
	struct imgsensor_mode_struct custom15;

	kal_uint8 ae_shut_delay_frame; /* shutter delay frame for AE cycle */
	kal_uint8 ae_sensor_gain_delay_frame;
	kal_uint8 ae_ispGain_delay_frame;
	kal_uint8 ihdr_support; /* 1, support; 0,not support */
	kal_uint8 ihdr_le_firstline; /* 1,le first ; 0, se first */
	kal_uint8 temperature_support;	/* 1, support; 0,not support */
	kal_uint8 sensor_mode_num; /* support sensor mode num */

	kal_uint8 cap_delay_frame; /* enter capture delay frame num */
	kal_uint8 pre_delay_frame; /* enter preview delay frame num */
	kal_uint8 video_delay_frame; /* enter video delay frame num */
	kal_uint8 hs_video_delay_frame;
	kal_uint8 slim_video_delay_frame; /* enter slim video delay frame num */
	kal_uint8 custom1_delay_frame; /* enter custom1 delay frame num */
	kal_uint8 custom2_delay_frame; /* enter custom2 delay frame num */
	kal_uint8 custom3_delay_frame; /* enter custom3 delay frame num */
	kal_uint8 custom4_delay_frame; /* enter custom4 delay frame num */
	kal_uint8 custom5_delay_frame; /* enter custom5 delay frame num */
	kal_uint8 custom6_delay_frame; /* enter custom6 delay frame num */
	kal_uint8 custom7_delay_frame; /* enter custom7 delay frame num */
	kal_uint8 custom8_delay_frame; /* enter custom8 delay frame num */
	kal_uint8 custom9_delay_frame; /* enter custom9 delay frame num */
	kal_uint8 custom10_delay_frame; /* enter custom10 delay frame num */
	kal_uint8 custom11_delay_frame; /* enter custom11 delay frame num */
	kal_uint8 custom12_delay_frame; /* enter custom12 delay frame num */
	kal_uint8 custom13_delay_frame; /* enter custom13 delay frame num */
	kal_uint8 custom14_delay_frame; /* enter custom14 delay frame num */
	kal_uint8 custom15_delay_frame; /* enter custom15 delay frame num */

	kal_uint8  frame_time_delay_frame;
	kal_uint8 margin; /* sensor framelength & shutter margin */
	kal_uint32 min_shutter; /* min shutter */
	kal_uint32 max_frame_length;
	kal_uint32 min_gain;
	kal_uint32 max_gain;
	kal_uint32 min_gain_iso;
	kal_uint32 gain_step;
	kal_uint32 exp_step;
	kal_uint32 gain_type;
	kal_uint8 isp_driving_current; /* mclk driving current */
	kal_uint8 sensor_interface_type; /* sensor_interface_type */
	kal_uint8 mipi_sensor_type;
	/* 0,MIPI_OPHY_NCSI2; 1,MIPI_OPHY_CSI2, default is NCSI2,
	 * don't modify this para
	 */
	kal_uint8 mipi_settle_delay_mode;
	/* 0, high speed signal auto detect;
	 * 1, use settle delay,unit is ns,
	 * default is auto detect, don't modify this para
	 */
	kal_uint8 sensor_output_dataformat;
	kal_uint8 mclk;	 /* mclk value, suggest 24 or 26 for 24Mhz or 26Mhz */
	kal_uint32 i2c_speed; /* i2c speed */
	kal_uint8 mipi_lane_num; /* mipi lane num */
	kal_uint8 i2c_addr_table[5];
};

/* SENSOR READ/WRITE ID */
/* #define IMGSENSOR_WRITE_ID_1 (0x6c) */
/* #define IMGSENSOR_READ_ID_1  (0x6d) */
/* #define IMGSENSOR_WRITE_ID_2 (0x20) */
/* #define IMGSENSOR_READ_ID_2  (0x21) */

extern int iReadRegI2C(u8 *a_pSendData, u16 a_sizeSendData,
	u8 *a_pRecvData, u16 a_sizeRecvData,
		       u16 i2cId);
extern int iWriteRegI2C(u8 *a_pSendData, u16 a_sizeSendData, u16 i2cId);

extern void read_imx230_eeprom(void);
int iBurstWriteReg_multi(u8 *pData, u32 bytes, u16 i2cId,
	u16 transfer_length, u16 timing);

extern int iReadReg(u16 a_u2Addr, u8 *a_puBuff, u16 i2cId);
extern int iWriteReg(u16 a_u2Addr, u32 a_u4Data, u32 a_u4Bytes, u16 i2cId);
extern void kdSetI2CSpeed(u16 i2cSpeed);
extern int iBurstWriteReg_multi(u8 *pData, u32 bytes, u16 i2cId,
				u16 transfer_length, u16 timing);
#endif
