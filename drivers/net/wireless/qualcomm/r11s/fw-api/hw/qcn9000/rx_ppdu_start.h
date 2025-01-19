/*
 * Copyright (c) 2019, The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _RX_PPDU_START_H_
#define _RX_PPDU_START_H_
#if !defined(__ASSEMBLER__)
#endif


// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	phy_ppdu_id[15:0], reserved_15[31:16]
//	1	sw_phy_meta_data[31:0]
//	2	ppdu_start_timestamp[31:0]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_RX_PPDU_START 3

struct rx_ppdu_start {
             uint32_t phy_ppdu_id                     : 16, //[15:0]
                      reserved_15                     : 16; //[31:16]
             uint32_t sw_phy_meta_data                : 32; //[31:0]
             uint32_t ppdu_start_timestamp            : 32; //[31:0]
};

/*

phy_ppdu_id
			
			A ppdu counter value that PHY increments for every PPDU
			received. The counter value wraps around  
			
			<legal all>

reserved_15
			
			Reserved
			
			<legal 0>

sw_phy_meta_data
			
			SW programmed Meta data provided by the PHY.
			
			
			
			Can be used for SW to indicate the channel the device is
			on.

ppdu_start_timestamp
			
			Timestamp that indicates when the PPDU that contained
			this MPDU started on the medium.
			
			
			
			The timestamp is captured by the PHY and given to the
			MAC in PHYRX_RSSI_LEGACY.ppdu_start_timestamp
			
			<legal all>
*/


/* Description		RX_PPDU_START_0_PHY_PPDU_ID
			
			A ppdu counter value that PHY increments for every PPDU
			received. The counter value wraps around  
			
			<legal all>
*/
#define RX_PPDU_START_0_PHY_PPDU_ID_OFFSET                           0x00000000
#define RX_PPDU_START_0_PHY_PPDU_ID_LSB                              0
#define RX_PPDU_START_0_PHY_PPDU_ID_MASK                             0x0000ffff

/* Description		RX_PPDU_START_0_RESERVED_15
			
			Reserved
			
			<legal 0>
*/
#define RX_PPDU_START_0_RESERVED_15_OFFSET                           0x00000000
#define RX_PPDU_START_0_RESERVED_15_LSB                              16
#define RX_PPDU_START_0_RESERVED_15_MASK                             0xffff0000

/* Description		RX_PPDU_START_1_SW_PHY_META_DATA
			
			SW programmed Meta data provided by the PHY.
			
			
			
			Can be used for SW to indicate the channel the device is
			on.
*/
#define RX_PPDU_START_1_SW_PHY_META_DATA_OFFSET                      0x00000004
#define RX_PPDU_START_1_SW_PHY_META_DATA_LSB                         0
#define RX_PPDU_START_1_SW_PHY_META_DATA_MASK                        0xffffffff

/* Description		RX_PPDU_START_2_PPDU_START_TIMESTAMP
			
			Timestamp that indicates when the PPDU that contained
			this MPDU started on the medium.
			
			
			
			The timestamp is captured by the PHY and given to the
			MAC in PHYRX_RSSI_LEGACY.ppdu_start_timestamp
			
			<legal all>
*/
#define RX_PPDU_START_2_PPDU_START_TIMESTAMP_OFFSET                  0x00000008
#define RX_PPDU_START_2_PPDU_START_TIMESTAMP_LSB                     0
#define RX_PPDU_START_2_PPDU_START_TIMESTAMP_MASK                    0xffffffff


#endif // _RX_PPDU_START_H_
