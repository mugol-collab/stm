/*
 * net.h
 *
 *  Created on: Jun 26, 2021
 *      Author: juan_
 */

#ifndef INC_NET_H_
#define INC_NET_H_

#include "stm32f0xx_hal.h"
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "w5500.h"

//--------------------------------------------------
/*
 * Define Network configurations
 */

#define IP_ADDR {192,168,0,18}
#define IP_GATE {192,168,0,1}
#define IP_MASK {255,255,255,0}
#define LOCAL_PORT 80

//--------------------------------------------------

/*
 *
 */

#define be16toword(a) ((((a)>>8)&0xff)|(((a)<<8)&0xff00))

void packet_receive(void);
void net_poll(void);
void net_ini(void);

#endif /* INC_NET_H_ */
