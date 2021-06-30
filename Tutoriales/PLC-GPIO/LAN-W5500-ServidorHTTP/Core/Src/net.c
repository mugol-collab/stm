/*
 * net.c
 *
 *  Created on: Jun 26, 2021
 *      Author: juan_
 */

#include "net.h"

/*
 * Definition variables for receive network config
 */

uint8_t ipaddr[4] = IP_ADDR;
uint8_t ipgate[4] = IP_GATE;
uint8_t ipmask[4] = IP_MASK;
uint16_t local_port = LOCAL_PORT;
char str1[60] = {0};

//--------------------------------------------------
/*
 * @: receive network packets
 */

void packet_receive(void)
{

}

//--------------------------------------------------
/*
 * @: transmission function
 */

void net_poll(void)
{
	packet_receive();
}

//--------------------------------------------------
/*
 *
 */

void net_ini(void)
{
	w5500_ini();
}
