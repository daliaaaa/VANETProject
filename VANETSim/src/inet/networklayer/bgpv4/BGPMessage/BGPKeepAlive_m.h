//
// Generated file, do not edit! Created by nedtool 4.6 from inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive.msg.
//

#ifndef _BGPKEEPALIVE_M_H_
#define _BGPKEEPALIVE_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "BGPHeader_m.h"
// }}

/**
 * Class generated from <tt>inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive.msg:31</tt> by nedtool.
 * <pre>
 * //
 * // Represents a BGPv4 KEEPALIVE message.
 * //
 * // KEEPALIVE messages are exchanged as often as necessary between systems
 * // to avoid exceeding the BGP Hold Timer (constant defined in BGPOpen).
 * //
 * packet BGPKeepAliveMessage extends BGPHeader
 * {
 *     type = BGP_KEEPALIVE;
 * }
 * </pre>
 */
class BGPKeepAliveMessage : public ::BGPHeader
{
  protected:

  private:
    void copy(const BGPKeepAliveMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const BGPKeepAliveMessage&);

  public:
    BGPKeepAliveMessage(const char *name=NULL, int kind=0);
    BGPKeepAliveMessage(const BGPKeepAliveMessage& other);
    virtual ~BGPKeepAliveMessage();
    BGPKeepAliveMessage& operator=(const BGPKeepAliveMessage& other);
    virtual BGPKeepAliveMessage *dup() const {return new BGPKeepAliveMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, BGPKeepAliveMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, BGPKeepAliveMessage& obj) {obj.parsimUnpack(b);}


#endif // ifndef _BGPKEEPALIVE_M_H_

