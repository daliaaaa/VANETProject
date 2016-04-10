//
// Generated file, do not edit! Created by nedtool 4.6 from inet/applications/netperfmeter/NetPerfMeter.msg.
//

#ifndef _NETPERFMETER_M_H_
#define _NETPERFMETER_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "SCTPMessage_m.h"
// }}

/**
 * Class generated from <tt>inet/applications/netperfmeter/NetPerfMeter.msg:37</tt> by nedtool.
 * <pre>
 * message NetPerfMeterTransmitTimer
 * {
 *     unsigned int streamID;
 * }
 * </pre>
 */
class NetPerfMeterTransmitTimer : public ::cMessage
{
  protected:
    unsigned int streamID_var;

  private:
    void copy(const NetPerfMeterTransmitTimer& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NetPerfMeterTransmitTimer&);

  public:
    NetPerfMeterTransmitTimer(const char *name=NULL, int kind=0);
    NetPerfMeterTransmitTimer(const NetPerfMeterTransmitTimer& other);
    virtual ~NetPerfMeterTransmitTimer();
    NetPerfMeterTransmitTimer& operator=(const NetPerfMeterTransmitTimer& other);
    virtual NetPerfMeterTransmitTimer *dup() const {return new NetPerfMeterTransmitTimer(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getStreamID() const;
    virtual void setStreamID(unsigned int streamID);
};

inline void doPacking(cCommBuffer *b, NetPerfMeterTransmitTimer& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, NetPerfMeterTransmitTimer& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/applications/netperfmeter/NetPerfMeter.msg:43</tt> by nedtool.
 * <pre>
 * message NetPerfMeterDataMessage extends SCTPSimpleMessage
 * {
 * }
 * </pre>
 */
class NetPerfMeterDataMessage : public ::SCTPSimpleMessage
{
  protected:

  private:
    void copy(const NetPerfMeterDataMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NetPerfMeterDataMessage&);

  public:
    NetPerfMeterDataMessage();
    NetPerfMeterDataMessage(const NetPerfMeterDataMessage& other);
    virtual ~NetPerfMeterDataMessage();
    NetPerfMeterDataMessage& operator=(const NetPerfMeterDataMessage& other);
    virtual NetPerfMeterDataMessage *dup() const {return new NetPerfMeterDataMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, NetPerfMeterDataMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, NetPerfMeterDataMessage& obj) {obj.parsimUnpack(b);}


#endif // ifndef _NETPERFMETER_M_H_

