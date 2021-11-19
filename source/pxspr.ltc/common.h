// This file is part of pxspr.ltc
// Copyright (C) 2021 Pixsper Ltd.
//
// pxspr.ltc is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation, either version 3 of
// the License, or (at your option) any later version.
//
// pxspr.ltc is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with pxspr.ltc.
// If not, see <http://www.gnu.org/licenses/>.

#ifndef H_PXSPR_LTC_COMMON
#define H_PXSPR_LTC_COMMON

#define FRAMERATE_DEFAULT FRAMERATE_30DF

typedef enum _OutputFormat
{
	TIMECODEFORMAT_RAW,
	TIMECODEFORMAT_REALTIME,
	TIMECODEFORMAT_FRAMES,
	TIMECODEFORMAT_MILLISECONDS
} TimecodeFormat;


typedef enum _FrameRate
{
	FRAMERATE_23_97,
	FRAMERATE_24,
	FRAMERATE_25,
	FRAMERATE_30DF,
	FRAMERATE_30ND,
	FRAMERATE_30
} FrameRate;

#endif