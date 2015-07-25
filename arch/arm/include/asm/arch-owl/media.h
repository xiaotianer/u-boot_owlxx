/*
 * (C) Copyright 2012
 * Actions Semi .Inc
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#ifndef __ASM_MEDIA_H
#define __ASM_MEDIA_H

/*DE*/
#define DE_BASE			0xB02E0000
#define DE_INTEN		(DE_BASE+0x0000)
#define DE_STAT			(DE_BASE+0x0004)
#define DE_CRITICAL_NUM		(DE_BASE+0x0008)
#define PATH0_DITHER		(DE_BASE+0x0150)
#define OUTPUT_CTL		(DE_BASE+0x1000)
#define WB_CFG			(DE_BASE+0x1004)
#define WB_ADDR			(DE_BASE+0x1008)
#define FIFO_ERROR		(DE_BASE+0x100c)

/* PATH0 */
#define PATH0_BASE		0xB02E0100
#define PATH0_CTL		(PATH0_BASE+0x0000)
#define PATH0_BK		(PATH0_BASE+0x0020)
#define PATH0_SIZE		(PATH0_BASE+0x0024)
#define PATH0_E_COOR		(PATH0_BASE+0x0028)
#define PATH0_GAMMA_IDX		(PATH0_BASE+0x002c)
#define PATH0_GAMMA_RAM		(PATH0_BASE+0x0030)
#define PATH0_CURSOR_FB		(PATH0_BASE+0x0034)
#define PATH0_CURSOR_STR	(PATH0_BASE+0x0038)

/* PATH1 */
#define PATH1_BASE		0xB02E0200
#define PATH1_CTL		(PATH1_BASE+0x0000)
#define PATH1_BK		(PATH1_BASE+0x0020)
#define PATH1_SIZE		(PATH1_BASE+0x0024)
#define PATH1_E_COOR		(PATH1_BASE+0x0028)
#define PATH1_GAMMA_IDX		(PATH1_BASE+0x002c)
#define PATH1_GAMMA_RAM		(PATH1_BASE+0x0030)
#define PATH1_CURSOR_FB		(PATH1_BASE+0x0034)
#define PATH1_CURSOR_STR	(PATH1_BASE+0x0038)

/* VIDEO0 */
#define VIDEO0_BASE		0xB02E0400
#define VIDEO0_CFG		(VIDEO0_BASE+0x0000)
#define VIDEO0_ISIZE		(VIDEO0_BASE+0x0004)
#define VIDEO0_OSIZE		(VIDEO0_BASE+0x0008)
#define VIDEO0_SR		(VIDEO0_BASE+0x000c)
#define VIDEO0_SCOEF0		(VIDEO0_BASE+0x0010)
#define VIDEO0_SCOEF1		(VIDEO0_BASE+0x0014)
#define VIDEO0_SCOEF2		(VIDEO0_BASE+0x0018)
#define VIDEO0_SCOEF3		(VIDEO0_BASE+0x001c)
#define VIDEO0_SCOEF4		(VIDEO0_BASE+0x0020)
#define VIDEO0_SCOEF5		(VIDEO0_BASE+0x0024)
#define VIDEO0_SCOEF6		(VIDEO0_BASE+0x0028)
#define VIDEO0_SCOEF7		(VIDEO0_BASE+0x002c)
#define VIDEO0_FB_0		(VIDEO0_BASE+0x0030)
#define VIDEO0_FB_1		(VIDEO0_BASE+0x0034)
#define VIDEO0_FB_2		(VIDEO0_BASE+0x0038)
#define VIDEO0_FB_RIGHT_0	(VIDEO0_BASE+0x003c)
#define VIDEO0_FB_RIGHT_1	(VIDEO0_BASE+0x0040)
#define VIDEO0_FB_RIGHT_2	(VIDEO0_BASE+0x0044)
#define VIDEO0_STR		(VIDEO0_BASE+0x0048)
#define VIDEO0_CRITICAL_CFG	(VIDEO0_BASE+0x004c)
#define VIDEO0_REMAPPING	(VIDEO0_BASE+0x0050)
#define VIDEO0_COOR		(VIDEO0_BASE+0x0054)
#define VIDEO0_ALPHA_CFG	(VIDEO0_BASE+0x0058)
#define VIDEO0_CKMAX		(VIDEO0_BASE+0x005c)
#define VIDEO0_CKMIN		(VIDEO0_BASE+0x0060)
#define VIDEO0_BLEND		(VIDEO0_BASE+0x0064)

/* VIDEO1 */
#define VIDEO1_BASE		0xB02E0500
#define VIDEO1_CFG		(VIDEO1_BASE+0x0000)
#define VIDEO1_ISIZE		(VIDEO1_BASE+0x0004)
#define VIDEO1_OSIZE		(VIDEO1_BASE+0x0008)
#define VIDEO1_SR		(VIDEO1_BASE+0x000c)
#define VIDEO1_SCOEF0		(VIDEO1_BASE+0x0010)
#define VIDEO1_SCOEF1		(VIDEO1_BASE+0x0014)
#define VIDEO1_SCOEF2		(VIDEO1_BASE+0x0018)
#define VIDEO1_SCOEF3		(VIDEO1_BASE+0x001c)
#define VIDEO1_SCOEF4		(VIDEO1_BASE+0x0020)
#define VIDEO1_SCOEF5		(VIDEO1_BASE+0x0024)
#define VIDEO1_SCOEF6		(VIDEO1_BASE+0x0028)
#define VIDEO1_SCOEF7		(VIDEO1_BASE+0x002c)
#define VIDEO1_FB_0		(VIDEO1_BASE+0x0030)
#define VIDEO1_FB_1		(VIDEO1_BASE+0x0034)
#define VIDEO1_FB_2		(VIDEO1_BASE+0x0038)
#define VIDEO1_FB_RIGHT_0	(VIDEO1_BASE+0x003c)
#define VIDEO1_FB_RIGHT_1	(VIDEO1_BASE+0x0040)
#define VIDEO1_FB_RIGHT_2	(VIDEO1_BASE+0x0044)
#define VIDEO1_STR		(VIDEO1_BASE+0x0048)
#define VIDEO1_CRITICAL_CFG	(VIDEO1_BASE+0x004c)
#define VIDEO1_REMAPPING	(VIDEO1_BASE+0x0050)
#define VIDEO1_COOR		(VIDEO1_BASE+0x0054)
#define VIDEO1_ALPHA_CFG	(VIDEO1_BASE+0x0058)
#define VIDEO1_CKMAX		(VIDEO1_BASE+0x005c)
#define VIDEO1_CKMIN		(VIDEO1_BASE+0x0060)
#define VIDEO1_BLEND		(VIDEO1_BASE+0x0064)

/* VIDEO2 */
#define VIDEO2_BASE			0xB02E0600
#define VIDEO2_CFG			(VIDEO2_BASE+0x0000)
#define VIDEO2_ISIZE			(VIDEO2_BASE+0x0004)
#define VIDEO2_OSIZE			(VIDEO2_BASE+0x0008)
#define VIDEO2_SR			(VIDEO2_BASE+0x000c)
#define VIDEO2_SCOEF0			(VIDEO2_BASE+0x0010)
#define VIDEO2_SCOEF1			(VIDEO2_BASE+0x0014)
#define VIDEO2_SCOEF2			(VIDEO2_BASE+0x0018)
#define VIDEO2_SCOEF3			(VIDEO2_BASE+0x001c)
#define VIDEO2_SCOEF4			(VIDEO2_BASE+0x0020)
#define VIDEO2_SCOEF5			(VIDEO2_BASE+0x0024)
#define VIDEO2_SCOEF6			(VIDEO2_BASE+0x0028)
#define VIDEO2_SCOEF7			(VIDEO2_BASE+0x002c)
#define VIDEO2_FB_0			(VIDEO2_BASE+0x0030)
#define VIDEO2_FB_1			(VIDEO2_BASE+0x0034)
#define VIDEO2_FB_2			(VIDEO2_BASE+0x0038)
#define VIDEO2_FB_RIGHT_0			(VIDEO2_BASE+0x003c)
#define VIDEO2_FB_RIGHT_1			(VIDEO2_BASE+0x0040)
#define VIDEO2_FB_RIGHT_2			(VIDEO2_BASE+0x0044)
#define VIDEO2_STR			(VIDEO2_BASE+0x0048)
#define VIDEO2_CRITICAL_CFG			(VIDEO2_BASE+0x004c)
#define VIDEO2_REMAPPING			(VIDEO2_BASE+0x0050)
#define VIDEO2_COOR			(VIDEO2_BASE+0x0054)
#define VIDEO2_ALPHA_CFG			(VIDEO2_BASE+0x0058)
#define VIDEO2_CKMAX			(VIDEO2_BASE+0x005c)
#define VIDEO2_CKMIN			(VIDEO2_BASE+0x0060)
#define VIDEO2_BLEND			(VIDEO2_BASE+0x0064)

/* VIDEO3 */
#define VIDEO3_BASE			0xB02E0700
#define VIDEO3_CFG			(VIDEO3_BASE+0x0000)
#define VIDEO3_ISIZE			(VIDEO3_BASE+0x0004)
#define VIDEO3_OSIZE			(VIDEO3_BASE+0x0008)
#define VIDEO3_SR			(VIDEO3_BASE+0x000c)
#define VIDEO3_SCOEF0			(VIDEO3_BASE+0x0010)
#define VIDEO3_SCOEF1			(VIDEO3_BASE+0x0014)
#define VIDEO3_SCOEF2			(VIDEO3_BASE+0x0018)
#define VIDEO3_SCOEF3			(VIDEO3_BASE+0x001c)
#define VIDEO3_SCOEF4			(VIDEO3_BASE+0x0020)
#define VIDEO3_SCOEF5			(VIDEO3_BASE+0x0024)
#define VIDEO3_SCOEF6			(VIDEO3_BASE+0x0028)
#define VIDEO3_SCOEF7			(VIDEO3_BASE+0x002c)
#define VIDEO3_FB_0			(VIDEO3_BASE+0x0030)
#define VIDEO3_FB_1			(VIDEO3_BASE+0x0034)
#define VIDEO3_FB_2			(VIDEO3_BASE+0x0038)
#define VIDEO3_FB_RIGHT_0			(VIDEO3_BASE+0x003c)
#define VIDEO3_FB_RIGHT_1			(VIDEO3_BASE+0x0040)
#define VIDEO3_FB_RIGHT_2			(VIDEO3_BASE+0x0044)
#define VIDEO3_STR			(VIDEO3_BASE+0x0048)
#define VIDEO3_CRITICAL_CFG			(VIDEO3_BASE+0x004c)
#define VIDEO3_REMAPPING			(VIDEO3_BASE+0x0050)
#define VIDEO3_COOR			(VIDEO3_BASE+0x0054)
#define VIDEO3_ALPHA_CFG			(VIDEO3_BASE+0x0058)
#define VIDEO3_CKMAX			(VIDEO3_BASE+0x005c)
#define VIDEO3_CKMIN			(VIDEO3_BASE+0x0060)
#define VIDEO3_BLEND			(VIDEO3_BASE+0x0064);

#endif
