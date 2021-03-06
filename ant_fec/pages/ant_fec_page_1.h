/* Copyright (c) 2015 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */

#ifndef ANT_FEC_PAGE_1_H__
#define ANT_FEC_PAGE_1_H__

/** @file
 *
 * @defgroup ant_sdk_profiles_fec_page1 Bicycle Power profile page 1
 * @{
 * @ingroup ant_sdk_profiles_fec_pages
 */

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif



/**@brief Data structure for Bicycle Power data page 1.
 */
typedef struct
{
    uint8_t calibration_req_rep;
	uint8_t temperature;
	uint16_t zero_offset;
	uint16_t spin_down_time;
} ant_fec_page1_data_t;

/**@brief Function for encoding page 1.
 *
 * @param[in]  p_page_data      Pointer to the page data.
 * @param[out] p_page_buffer    Pointer to the data buffer.
 */
void ant_fec_page_1_encode(uint8_t                     * p_page_buffer,
                            ant_fec_page1_data_t const * p_page_data);

/**@brief Function for decoding page 1.
 *
 * @param[in]  p_page_buffer    Pointer to the data buffer.
 * @param[out] p_page_data      Pointer to the page data.
 */
void ant_fec_page_1_decode(uint8_t const         * p_page_buffer,
                            ant_fec_page1_data_t * p_page_data);



#ifdef __cplusplus
}
#endif

#endif // ANT_FEC_PAGE_1_H__
/** @} */
