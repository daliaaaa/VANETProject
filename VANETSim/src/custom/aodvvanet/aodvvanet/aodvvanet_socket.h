/*****************************************************************************
 *
 * Copyright (C) 2001 Uppsala University & Ericsson AB.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors: Erik Nordstr�m, <erik.nordstrom@it.uu.se>
 *
 *
 *****************************************************************************/
#ifndef _AODVVANET_SOCKET_H
#define _AODVVANET_SOCKET_H

#ifndef NS_NO_GLOBALS

#ifndef OMNETPP
#include <netinet/ip.h>
#endif

#include "defs_aodvvanet.h"
#include "aodvvanet_rerr.h"
#include "params.h"

#ifndef OMNETPP
#define IPHDR_SIZE sizeof(struct iphdr)
#endif

/* Set a maximun size for AODVVANET msgs. The RERR is the potentially
   largest message, depending on how many unreachable destinations
   that are included. Lets limit them to 100 */
#define AODVVANET_MSG_MAX_SIZE RERR_SIZE + 100 * RERR_UDEST_SIZE
#define RECV_BUF_SIZE AODVVANET_MSG_MAX_SIZE
#define SEND_BUF_SIZE RECV_BUF_SIZE
#endif              /* NS_NO_GLOBALS */

#ifndef NS_NO_DECLARATIONS

struct timeval rreq_ratel[RREQ_RATELIMIT - 1], rerr_ratel[RERR_RATELIMIT - 1];
int num_rreq;
int num_rerr;

void aodvvanet_socket_init();
void aodvvanet_socket_send(AODVVANET_msg * aodvvanet_msg, struct in_addr dst, int len,
                      u_int8_t ttl, struct dev_info *dev,double delay=-1);

void aodvvanet_socket_send_delayed(AODVVANET_msg * aodvvanet_msg, struct in_addr dst, int len,
                      u_int8_t ttl, struct dev_info *dev,double delay);
#ifndef OMNETPP
AODVVANET_msg *aodvvanet_socket_new_msg();
AODVVANET_msg *aodvvanet_socket_queue_msg(AODVVANET_msg * aodvvanet_msg, int size);
#endif
void aodvvanet_socket_cleanup(void);
void aodvvanet_socket_process_packet(AODVVANET_msg * aodvvanet_msg, int len,
                                struct in_addr src,struct in_addr dst, int ttl,
                                unsigned int ifindex);
#define CMSG_NXTHDR_FIX(mhdr, cmsg) cmsg_nxthdr_fix((mhdr), (cmsg))
struct cmsghdr *cmsg_nxthdr_fix(struct msghdr *__msg, struct cmsghdr *__cmsg);

#ifdef NS_PORT
#ifndef OMNETPP
void recvAODVVANETPacket(Packet * p);
#endif
#endif              /* NS_PORT */

#endif              /* NS_NO_DECLARATIONS */

#endif              /* AODVVANET_SOCKET_H */