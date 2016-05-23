//
// Generated file, do not edit! Created by nedtool 4.6 from inet/transportlayer/rtp/RTPSenderControlMessage.msg.
//

#ifndef _INET__RTP_RTPSENDERCONTROLMESSAGE_M_H_
#define _INET__RTP_RTPSENDERCONTROLMESSAGE_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "inet/common/INETDefs.h"
// }}


namespace inet {
namespace rtp {

/**
 * Enum generated from <tt>inet/transportlayer/rtp/RTPSenderControlMessage.msg:43</tt> by nedtool.
 * <pre>
 * //
 * // A message of the type ~RTPSenderControlMessage is created by an application to control
 * // the behavior of an rtp sender module. With this class the application can send a command
 * // string to the sender module like "PLAY" or "STOP". A message can have up to two float
 * // parameters.
 * //
 * // Following commands are evaluated in ~RTPPayloadSender (although correct behavior must
 * // be implemented in modules for certain payload types):
 * //    - PLAY : start playing from current position
 * //    - PAUSE : pause playing, stay at current position
 * //    - STOP : stop playing, go to beginning
 * //    - PLAY_UNTIL_TIME : start playing from current position and play until given temporal position (relative to
 * //      start of file is reached)
 * //    - PLAY_UNTIL_BYTE : start playing from current position and play until this data byte is reached
 * //    - SEEK_TIME : go to temporal position within the file (not allowed while playing)
 * //    - SEEK_BYTE : go to data byte (not allowed while playing)
 * //
 * enum RTPSenderControlMessageCommands
 * {
 * 
 *     RTP_CONTROL_PLAY = 1;
 *     RTP_CONTROL_PLAY_UNTIL_TIME = 2;
 *     RTP_CONTROL_PLAY_UNTIL_BYTE = 3;
 *     RTP_CONTROL_PAUSE = 4;
 *     RTP_CONTROL_STOP = 5;
 *     RTP_CONTROL_SEEK_TIME = 6;
 *     RTP_CONTROL_SEEK_BYTE = 7;
 * }
 * </pre>
 */
enum RTPSenderControlMessageCommands {
    RTP_CONTROL_PLAY = 1,
    RTP_CONTROL_PLAY_UNTIL_TIME = 2,
    RTP_CONTROL_PLAY_UNTIL_BYTE = 3,
    RTP_CONTROL_PAUSE = 4,
    RTP_CONTROL_STOP = 5,
    RTP_CONTROL_SEEK_TIME = 6,
    RTP_CONTROL_SEEK_BYTE = 7
};

/**
 * Class generated from <tt>inet/transportlayer/rtp/RTPSenderControlMessage.msg:54</tt> by nedtool.
 * <pre>
 * packet RTPSenderControlMessage
 * {
 *     short command @enum(RTPSenderControlMessageCommands);
 *     float commandParameter1;
 *     float commandParameter2;
 * }
 * </pre>
 */
class RTPSenderControlMessage : public ::cPacket
{
  protected:
    short command_var;
    float commandParameter1_var;
    float commandParameter2_var;

  private:
    void copy(const RTPSenderControlMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPSenderControlMessage&);

  public:
    RTPSenderControlMessage(const char *name=NULL, int kind=0);
    RTPSenderControlMessage(const RTPSenderControlMessage& other);
    virtual ~RTPSenderControlMessage();
    RTPSenderControlMessage& operator=(const RTPSenderControlMessage& other);
    virtual RTPSenderControlMessage *dup() const {return new RTPSenderControlMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual short getCommand() const;
    virtual void setCommand(short command);
    virtual float getCommandParameter1() const;
    virtual void setCommandParameter1(float commandParameter1);
    virtual float getCommandParameter2() const;
    virtual void setCommandParameter2(float commandParameter2);
};

inline void doPacking(cCommBuffer *b, RTPSenderControlMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RTPSenderControlMessage& obj) {obj.parsimUnpack(b);}

} // namespace rtp
} // namespace inet

#endif // ifndef _INET__RTP_RTPSENDERCONTROLMESSAGE_M_H_
