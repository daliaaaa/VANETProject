//
// Generated file, do not edit! Created by nedtool 4.6 from routing/rbvtr/RBVTRControlPackets.msg.
//

#ifndef _RBVTRCONTROLPACKETS_M_H_
#define _RBVTRCONTROLPACKETS_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "IPv4Address.h"
#include "simtime_t.h"
#include "VanetModuleAccess.h"
#include "IVANETMobility.h"
#include "Coord.h"
// }}

/**
 * Struct generated from routing/rbvtr/RBVTRControlPackets.msg:34 by nedtool.
 */
struct UnreachableRBVTRNode
{
    UnreachableRBVTRNode();
    IPv4Address addr;
    unsigned int seqNum;
};

void doPacking(cCommBuffer *b, UnreachableRBVTRNode& a);
void doUnpacking(cCommBuffer *b, UnreachableRBVTRNode& a);

/**
 * Enum generated from <tt>routing/rbvtr/RBVTRControlPackets.msg:40</tt> by nedtool.
 * <pre>
 * enum RBVTRControlPacketType
 * {
 * 
 *     RREQ = 1;
 *     RREP = 2;
 *     RERR = 3;
 *     RREPACK = 4;
 * }
 * </pre>
 */
enum RBVTRControlPacketType {
    RREQ = 1,
    RREP = 2,
    RERR = 3,
    RREPACK = 4
};

/**
 * Class generated from <tt>routing/rbvtr/RBVTRControlPackets.msg:51</tt> by nedtool.
 * <pre>
 * //
 * // Base packet for RBVTR Control Packets
 * //
 * packet RBVTRControlPacket
 * {
 *     unsigned int packetType;
 * }
 * </pre>
 */
class RBVTRControlPacket : public ::cPacket
{
  protected:
    unsigned int packetType_var;

  private:
    void copy(const RBVTRControlPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RBVTRControlPacket&);

  public:
    RBVTRControlPacket(const char *name=NULL, int kind=0);
    RBVTRControlPacket(const RBVTRControlPacket& other);
    virtual ~RBVTRControlPacket();
    RBVTRControlPacket& operator=(const RBVTRControlPacket& other);
    virtual RBVTRControlPacket *dup() const {return new RBVTRControlPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
};

inline void doPacking(cCommBuffer *b, RBVTRControlPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RBVTRControlPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>routing/rbvtr/RBVTRControlPackets.msg:59</tt> by nedtool.
 * <pre>
 * //
 * // Represents an RBVTR Route Request
 * //
 * class RBVTRRREQ extends RBVTRControlPacket
 * {
 *     unsigned int packetType = RREQ;
 *     bool joinFlag;
 *     bool repairFlag;
 *     bool gratuitousRREPFlag;
 *     bool destOnlyFlag;
 *     bool unknownSeqNumFlag;
 *     unsigned int hopCount;
 *     unsigned int rreqId;
 *     IPv4Address destAddr;
 *     unsigned int destSeqNum;
 *     IPv4Address originatorAddr;
 *     unsigned int originatorSeqNum;
 *     Coord position;
 *     Coord speed;
 *     Coord acceleration;
 *     Coord direction;
 *     double twr;
 *     double expirationtime;
 * }
 * </pre>
 */
class RBVTRRREQ : public ::RBVTRControlPacket
{
  protected:
    unsigned int packetType_var;
    bool joinFlag_var;
    bool repairFlag_var;
    bool gratuitousRREPFlag_var;
    bool destOnlyFlag_var;
    bool unknownSeqNumFlag_var;
    unsigned int hopCount_var;
    unsigned int rreqId_var;
    IPv4Address destAddr_var;
    unsigned int destSeqNum_var;
    IPv4Address originatorAddr_var;
    unsigned int originatorSeqNum_var;
    Coord position_var;
    Coord speed_var;
    Coord acceleration_var;
    Coord direction_var;
    double twr_var;
    double expirationtime_var;

  private:
    void copy(const RBVTRRREQ& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RBVTRRREQ&);

  public:
    RBVTRRREQ(const char *name=NULL);
    RBVTRRREQ(const RBVTRRREQ& other);
    virtual ~RBVTRRREQ();
    RBVTRRREQ& operator=(const RBVTRRREQ& other);
    virtual RBVTRRREQ *dup() const {return new RBVTRRREQ(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
    virtual bool getJoinFlag() const;
    virtual void setJoinFlag(bool joinFlag);
    virtual bool getRepairFlag() const;
    virtual void setRepairFlag(bool repairFlag);
    virtual bool getGratuitousRREPFlag() const;
    virtual void setGratuitousRREPFlag(bool gratuitousRREPFlag);
    virtual bool getDestOnlyFlag() const;
    virtual void setDestOnlyFlag(bool destOnlyFlag);
    virtual bool getUnknownSeqNumFlag() const;
    virtual void setUnknownSeqNumFlag(bool unknownSeqNumFlag);
    virtual unsigned int getHopCount() const;
    virtual void setHopCount(unsigned int hopCount);
    virtual unsigned int getRreqId() const;
    virtual void setRreqId(unsigned int rreqId);
    virtual IPv4Address& getDestAddr();
    virtual const IPv4Address& getDestAddr() const {return const_cast<RBVTRRREQ*>(this)->getDestAddr();}
    virtual void setDestAddr(const IPv4Address& destAddr);
    virtual unsigned int getDestSeqNum() const;
    virtual void setDestSeqNum(unsigned int destSeqNum);
    virtual IPv4Address& getOriginatorAddr();
    virtual const IPv4Address& getOriginatorAddr() const {return const_cast<RBVTRRREQ*>(this)->getOriginatorAddr();}
    virtual void setOriginatorAddr(const IPv4Address& originatorAddr);
    virtual unsigned int getOriginatorSeqNum() const;
    virtual void setOriginatorSeqNum(unsigned int originatorSeqNum);
    virtual Coord& getPosition();
    virtual const Coord& getPosition() const {return const_cast<RBVTRRREQ*>(this)->getPosition();}
    virtual void setPosition(const Coord& position);
    virtual Coord& getSpeed();
    virtual const Coord& getSpeed() const {return const_cast<RBVTRRREQ*>(this)->getSpeed();}
    virtual void setSpeed(const Coord& speed);
    virtual Coord& getAcceleration();
    virtual const Coord& getAcceleration() const {return const_cast<RBVTRRREQ*>(this)->getAcceleration();}
    virtual void setAcceleration(const Coord& acceleration);
    virtual Coord& getDirection();
    virtual const Coord& getDirection() const {return const_cast<RBVTRRREQ*>(this)->getDirection();}
    virtual void setDirection(const Coord& direction);
    virtual double getTwr() const;
    virtual void setTwr(double twr);
    virtual double getExpirationtime() const;
    virtual void setExpirationtime(double expirationtime);
};

inline void doPacking(cCommBuffer *b, RBVTRRREQ& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RBVTRRREQ& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>routing/rbvtr/RBVTRControlPackets.msg:84</tt> by nedtool.
 * <pre>
 * //
 * // Represents an RBVTR Route Reply
 * //
 * class RBVTRRREP extends RBVTRControlPacket
 * {
 *     unsigned int packetType = RREP;
 *     bool repairFlag;
 *     bool ackRequiredFlag;
 *     unsigned int prefixSize;
 *     unsigned int hopCount;
 *     IPv4Address destAddr;
 *     unsigned int destSeqNum;
 *     IPv4Address originatorAddr;
 *     unsigned int originatorSeqNum;
 *     simtime_t lifeTime;
 *     double twr;
 *     double expirationtime;
 * }
 * </pre>
 */
class RBVTRRREP : public ::RBVTRControlPacket
{
  protected:
    unsigned int packetType_var;
    bool repairFlag_var;
    bool ackRequiredFlag_var;
    unsigned int prefixSize_var;
    unsigned int hopCount_var;
    IPv4Address destAddr_var;
    unsigned int destSeqNum_var;
    IPv4Address originatorAddr_var;
    unsigned int originatorSeqNum_var;
    simtime_t lifeTime_var;
    double twr_var;
    double expirationtime_var;

  private:
    void copy(const RBVTRRREP& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RBVTRRREP&);

  public:
    RBVTRRREP(const char *name=NULL);
    RBVTRRREP(const RBVTRRREP& other);
    virtual ~RBVTRRREP();
    RBVTRRREP& operator=(const RBVTRRREP& other);
    virtual RBVTRRREP *dup() const {return new RBVTRRREP(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
    virtual bool getRepairFlag() const;
    virtual void setRepairFlag(bool repairFlag);
    virtual bool getAckRequiredFlag() const;
    virtual void setAckRequiredFlag(bool ackRequiredFlag);
    virtual unsigned int getPrefixSize() const;
    virtual void setPrefixSize(unsigned int prefixSize);
    virtual unsigned int getHopCount() const;
    virtual void setHopCount(unsigned int hopCount);
    virtual IPv4Address& getDestAddr();
    virtual const IPv4Address& getDestAddr() const {return const_cast<RBVTRRREP*>(this)->getDestAddr();}
    virtual void setDestAddr(const IPv4Address& destAddr);
    virtual unsigned int getDestSeqNum() const;
    virtual void setDestSeqNum(unsigned int destSeqNum);
    virtual IPv4Address& getOriginatorAddr();
    virtual const IPv4Address& getOriginatorAddr() const {return const_cast<RBVTRRREP*>(this)->getOriginatorAddr();}
    virtual void setOriginatorAddr(const IPv4Address& originatorAddr);
    virtual unsigned int getOriginatorSeqNum() const;
    virtual void setOriginatorSeqNum(unsigned int originatorSeqNum);
    virtual simtime_t getLifeTime() const;
    virtual void setLifeTime(simtime_t lifeTime);
    virtual double getTwr() const;
    virtual void setTwr(double twr);
    virtual double getExpirationtime() const;
    virtual void setExpirationtime(double expirationtime);
};

inline void doPacking(cCommBuffer *b, RBVTRRREP& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RBVTRRREP& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>routing/rbvtr/RBVTRControlPackets.msg:103</tt> by nedtool.
 * <pre>
 * //
 * // Represents an RBVTR Route Error
 * //
 * class RBVTRRERR extends RBVTRControlPacket
 * {
 *     unsigned int packetType = RERR;
 *     UnreachableRBVTRNode unreachableRBVTRNodes[];
 *     bool noDeleteFlag;
 *     unsigned int destCount;
 * }
 * </pre>
 */
class RBVTRRERR : public ::RBVTRControlPacket
{
  protected:
    unsigned int packetType_var;
    UnreachableRBVTRNode *unreachableRBVTRNodes_var; // array ptr
    unsigned int unreachableRBVTRNodes_arraysize;
    bool noDeleteFlag_var;
    unsigned int destCount_var;

  private:
    void copy(const RBVTRRERR& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RBVTRRERR&);

  public:
    RBVTRRERR(const char *name=NULL);
    RBVTRRERR(const RBVTRRERR& other);
    virtual ~RBVTRRERR();
    RBVTRRERR& operator=(const RBVTRRERR& other);
    virtual RBVTRRERR *dup() const {return new RBVTRRERR(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
    virtual void setUnreachableRBVTRNodesArraySize(unsigned int size);
    virtual unsigned int getUnreachableRBVTRNodesArraySize() const;
    virtual UnreachableRBVTRNode& getUnreachableRBVTRNodes(unsigned int k);
    virtual const UnreachableRBVTRNode& getUnreachableRBVTRNodes(unsigned int k) const {return const_cast<RBVTRRERR*>(this)->getUnreachableRBVTRNodes(k);}
    virtual void setUnreachableRBVTRNodes(unsigned int k, const UnreachableRBVTRNode& unreachableRBVTRNodes);
    virtual bool getNoDeleteFlag() const;
    virtual void setNoDeleteFlag(bool noDeleteFlag);
    virtual unsigned int getDestCount() const;
    virtual void setDestCount(unsigned int destCount);
};

inline void doPacking(cCommBuffer *b, RBVTRRERR& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RBVTRRERR& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>routing/rbvtr/RBVTRControlPackets.msg:114</tt> by nedtool.
 * <pre>
 * //
 * // Represents an RBVTR Route Reply ACK
 * //
 * class RBVTRRREPACK extends RBVTRControlPacket
 * {
 *     unsigned int packetType = RREPACK;
 * }
 * </pre>
 */
class RBVTRRREPACK : public ::RBVTRControlPacket
{
  protected:
    unsigned int packetType_var;

  private:
    void copy(const RBVTRRREPACK& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RBVTRRREPACK&);

  public:
    RBVTRRREPACK(const char *name=NULL);
    RBVTRRREPACK(const RBVTRRREPACK& other);
    virtual ~RBVTRRREPACK();
    RBVTRRREPACK& operator=(const RBVTRRREPACK& other);
    virtual RBVTRRREPACK *dup() const {return new RBVTRRREPACK(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getPacketType() const;
    virtual void setPacketType(unsigned int packetType);
};

inline void doPacking(cCommBuffer *b, RBVTRRREPACK& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, RBVTRRREPACK& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>routing/rbvtr/RBVTRControlPackets.msg:122</tt> by nedtool.
 * <pre>
 * //
 * // Represents a timer for a Route Reply packet
 * //
 * message WaitForRBVTRRREP
 * {
 *     IPv4Address destAddr;
 *     unsigned int lastTTL;
 *     bool fromInvalidEntry;
 * }
 * </pre>
 */
class WaitForRBVTRRREP : public ::cMessage
{
  protected:
    IPv4Address destAddr_var;
    unsigned int lastTTL_var;
    bool fromInvalidEntry_var;

  private:
    void copy(const WaitForRBVTRRREP& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const WaitForRBVTRRREP&);

  public:
    WaitForRBVTRRREP(const char *name=NULL, int kind=0);
    WaitForRBVTRRREP(const WaitForRBVTRRREP& other);
    virtual ~WaitForRBVTRRREP();
    WaitForRBVTRRREP& operator=(const WaitForRBVTRRREP& other);
    virtual WaitForRBVTRRREP *dup() const {return new WaitForRBVTRRREP(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv4Address& getDestAddr();
    virtual const IPv4Address& getDestAddr() const {return const_cast<WaitForRBVTRRREP*>(this)->getDestAddr();}
    virtual void setDestAddr(const IPv4Address& destAddr);
    virtual unsigned int getLastTTL() const;
    virtual void setLastTTL(unsigned int lastTTL);
    virtual bool getFromInvalidEntry() const;
    virtual void setFromInvalidEntry(bool fromInvalidEntry);
};

inline void doPacking(cCommBuffer *b, WaitForRBVTRRREP& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, WaitForRBVTRRREP& obj) {obj.parsimUnpack(b);}


#endif // ifndef _RBVTRCONTROLPACKETS_M_H_
