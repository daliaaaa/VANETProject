//
// Generated file, do not edit! Created by nedtool 4.6 from inet/linklayer/ieee80211/mac/Ieee80211Frame.msg.
//

#ifndef _IEEE80211FRAME_M_H_
#define _IEEE80211FRAME_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "Ieee80211Consts.h"
#include "MACAddress.h"
#include "Ieee802Ctrl_m.h" // for ~EtherType
// }}

/**
 * Enum generated from <tt>inet/linklayer/ieee80211/mac/Ieee80211Frame.msg:35</tt> by nedtool.
 * <pre>
 * //
 * // 802.11 frame type constants (type+subtype), for the "type" field of
 * // Ieee80211FrameControl
 * //
 * enum Ieee80211FrameType
 * {
 * 
 *     // management:
 *     ST_ASSOCIATIONREQUEST = 0x00;
 *     ST_ASSOCIATIONRESPONSE = 0x01;
 *     ST_REASSOCIATIONREQUEST = 0x02;
 *     ST_REASSOCIATIONRESPONSE = 0x03;
 *     ST_PROBEREQUEST = 0x04;
 *     ST_PROBERESPONSE = 0x05;
 *     ST_BEACON = 0x08;
 *     ST_ATIM = 0x09;
 *     ST_DISASSOCIATION = 0x0a;
 *     ST_AUTHENTICATION = 0x0b;
 *     ST_DEAUTHENTICATION = 0x0c;
 *     ST_ACTION = 0x0d;
 *     ST_NOACKACTION = 0x0e;
 * 
 *     // control (CFEND/CFEND_CFACK omitted):
 *     ST_PSPOLL = 0x1a;
 *     ST_RTS = 0x1b;
 *     ST_CTS = 0x1c;
 *     ST_ACK = 0x1d;
 *     ST_BLOCKACK_REQ = 0x18;
 *     ST_BLOCKACK = 0x19;
 * 
 *     // data (CFPOLL/CFACK subtypes omitted):
 *     ST_DATA = 0x20;
 *     //Feedback frame for multicast tramsmission
 *     ST_LBMS_REQUEST = 0x30;
 *     ST_LBMS_REPORT = 0x31;
 * }
 * </pre>
 */
enum Ieee80211FrameType {
    ST_ASSOCIATIONREQUEST = 0x00,
    ST_ASSOCIATIONRESPONSE = 0x01,
    ST_REASSOCIATIONREQUEST = 0x02,
    ST_REASSOCIATIONRESPONSE = 0x03,
    ST_PROBEREQUEST = 0x04,
    ST_PROBERESPONSE = 0x05,
    ST_BEACON = 0x08,
    ST_ATIM = 0x09,
    ST_DISASSOCIATION = 0x0a,
    ST_AUTHENTICATION = 0x0b,
    ST_DEAUTHENTICATION = 0x0c,
    ST_ACTION = 0x0d,
    ST_NOACKACTION = 0x0e,
    ST_PSPOLL = 0x1a,
    ST_RTS = 0x1b,
    ST_CTS = 0x1c,
    ST_ACK = 0x1d,
    ST_BLOCKACK_REQ = 0x18,
    ST_BLOCKACK = 0x19,
    ST_DATA = 0x20,
    ST_LBMS_REQUEST = 0x30,
    ST_LBMS_REPORT = 0x31
};

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mac/Ieee80211Frame.msg:76</tt> by nedtool.
 * <pre>
 * //
 * // The common part of 802.11 frames.
 * //
 * // NOTE:
 * // FCS value is not explicitly modeled, but it is included in the length.
 * // Frame control format fields not supported by this model are omitted:
 * // MoreFlag, PowerMgmt, MoreData, WEP, Order.
 * //
 * packet Ieee80211Frame
 * {
 *     byteLength = LENGTH_ACK / 8;
 *     short type @enum(Ieee80211FrameType); // type and subtype
 *     bool toDS;
 *     bool fromDS;
 *     bool retry;
 *     bool moreFragments;
 *     simtime_t duration = -1; // "duration" in the Duration/ID field (-1=no duration)
 *     short AID = -1;          // "id" (Association ID) in the Duration/ID field (-1=no ID)
 *     MACAddress receiverAddress; // aka address1
 *     simtime_t MACArrive;    // FIXME remove it, technical data, used inside of MAC module
 * }
 * </pre>
 */
class Ieee80211Frame : public ::cPacket
{
  protected:
    short type_var;
    bool toDS_var;
    bool fromDS_var;
    bool retry_var;
    bool moreFragments_var;
    simtime_t duration_var;
    short AID_var;
    MACAddress receiverAddress_var;
    simtime_t MACArrive_var;

  private:
    void copy(const Ieee80211Frame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211Frame&);

  public:
    Ieee80211Frame(const char *name=NULL, int kind=0);
    Ieee80211Frame(const Ieee80211Frame& other);
    virtual ~Ieee80211Frame();
    Ieee80211Frame& operator=(const Ieee80211Frame& other);
    virtual Ieee80211Frame *dup() const {return new Ieee80211Frame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual short getType() const;
    virtual void setType(short type);
    virtual bool getToDS() const;
    virtual void setToDS(bool toDS);
    virtual bool getFromDS() const;
    virtual void setFromDS(bool fromDS);
    virtual bool getRetry() const;
    virtual void setRetry(bool retry);
    virtual bool getMoreFragments() const;
    virtual void setMoreFragments(bool moreFragments);
    virtual simtime_t getDuration() const;
    virtual void setDuration(simtime_t duration);
    virtual short getAID() const;
    virtual void setAID(short AID);
    virtual MACAddress& getReceiverAddress();
    virtual const MACAddress& getReceiverAddress() const {return const_cast<Ieee80211Frame*>(this)->getReceiverAddress();}
    virtual void setReceiverAddress(const MACAddress& receiverAddress);
    virtual simtime_t getMACArrive() const;
    virtual void setMACArrive(simtime_t MACArrive);
};

inline void doPacking(cCommBuffer *b, Ieee80211Frame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211Frame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mac/Ieee80211Frame.msg:93</tt> by nedtool.
 * <pre>
 * //
 * // Format of a 802.11 frame with address1 present, like ACK and CTS
 * //
 * packet Ieee80211OneAddressFrame extends Ieee80211Frame
 * {
 * }
 * </pre>
 */
class Ieee80211OneAddressFrame : public ::Ieee80211Frame
{
  protected:

  private:
    void copy(const Ieee80211OneAddressFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211OneAddressFrame&);

  public:
    Ieee80211OneAddressFrame(const char *name=NULL, int kind=0);
    Ieee80211OneAddressFrame(const Ieee80211OneAddressFrame& other);
    virtual ~Ieee80211OneAddressFrame();
    Ieee80211OneAddressFrame& operator=(const Ieee80211OneAddressFrame& other);
    virtual Ieee80211OneAddressFrame *dup() const {return new Ieee80211OneAddressFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, Ieee80211OneAddressFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211OneAddressFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mac/Ieee80211Frame.msg:100</tt> by nedtool.
 * <pre>
 * //
 * // Format of the 802.11 ACK frame
 * //
 * packet Ieee80211ACKFrame extends Ieee80211OneAddressFrame
 * {
 *     byteLength = LENGTH_ACK / 8;
 *     type = ST_ACK;
 * }
 * </pre>
 */
class Ieee80211ACKFrame : public ::Ieee80211OneAddressFrame
{
  protected:

  private:
    void copy(const Ieee80211ACKFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211ACKFrame&);

  public:
    Ieee80211ACKFrame(const char *name=NULL, int kind=0);
    Ieee80211ACKFrame(const Ieee80211ACKFrame& other);
    virtual ~Ieee80211ACKFrame();
    Ieee80211ACKFrame& operator=(const Ieee80211ACKFrame& other);
    virtual Ieee80211ACKFrame *dup() const {return new Ieee80211ACKFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, Ieee80211ACKFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211ACKFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mac/Ieee80211Frame.msg:109</tt> by nedtool.
 * <pre>
 * //
 * // Format of a 802.11 frame with address1 and address2 present
 * //
 * packet Ieee80211TwoAddressFrame extends Ieee80211OneAddressFrame
 * {
 *     byteLength = LENGTH_RTS / 8;
 *     MACAddress transmitterAddress; // aka address2
 * }
 * </pre>
 */
class Ieee80211TwoAddressFrame : public ::Ieee80211OneAddressFrame
{
  protected:
    MACAddress transmitterAddress_var;

  private:
    void copy(const Ieee80211TwoAddressFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211TwoAddressFrame&);

  public:
    Ieee80211TwoAddressFrame(const char *name=NULL, int kind=0);
    Ieee80211TwoAddressFrame(const Ieee80211TwoAddressFrame& other);
    virtual ~Ieee80211TwoAddressFrame();
    Ieee80211TwoAddressFrame& operator=(const Ieee80211TwoAddressFrame& other);
    virtual Ieee80211TwoAddressFrame *dup() const {return new Ieee80211TwoAddressFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getTransmitterAddress();
    virtual const MACAddress& getTransmitterAddress() const {return const_cast<Ieee80211TwoAddressFrame*>(this)->getTransmitterAddress();}
    virtual void setTransmitterAddress(const MACAddress& transmitterAddress);
};

inline void doPacking(cCommBuffer *b, Ieee80211TwoAddressFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211TwoAddressFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mac/Ieee80211Frame.msg:118</tt> by nedtool.
 * <pre>
 * //
 * // Format of the 802.11 RTS frame
 * //
 * packet Ieee80211RTSFrame extends Ieee80211TwoAddressFrame
 * {
 *     byteLength = LENGTH_RTS / 8;
 *     type = ST_RTS;
 * }
 * </pre>
 */
class Ieee80211RTSFrame : public ::Ieee80211TwoAddressFrame
{
  protected:

  private:
    void copy(const Ieee80211RTSFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211RTSFrame&);

  public:
    Ieee80211RTSFrame(const char *name=NULL, int kind=0);
    Ieee80211RTSFrame(const Ieee80211RTSFrame& other);
    virtual ~Ieee80211RTSFrame();
    Ieee80211RTSFrame& operator=(const Ieee80211RTSFrame& other);
    virtual Ieee80211RTSFrame *dup() const {return new Ieee80211RTSFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, Ieee80211RTSFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211RTSFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mac/Ieee80211Frame.msg:127</tt> by nedtool.
 * <pre>
 * //
 * // Format of the 802.11 CTS frame
 * //
 * packet Ieee80211CTSFrame extends Ieee80211OneAddressFrame
 * {
 *     byteLength = LENGTH_CTS / 8;
 *     type = ST_CTS;
 * }
 * </pre>
 */
class Ieee80211CTSFrame : public ::Ieee80211OneAddressFrame
{
  protected:

  private:
    void copy(const Ieee80211CTSFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211CTSFrame&);

  public:
    Ieee80211CTSFrame(const char *name=NULL, int kind=0);
    Ieee80211CTSFrame(const Ieee80211CTSFrame& other);
    virtual ~Ieee80211CTSFrame();
    Ieee80211CTSFrame& operator=(const Ieee80211CTSFrame& other);
    virtual Ieee80211CTSFrame *dup() const {return new Ieee80211CTSFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, Ieee80211CTSFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211CTSFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mac/Ieee80211Frame.msg:136</tt> by nedtool.
 * <pre>
 * //
 * // Common base class for 802.11 data and management frames
 * //
 * packet Ieee80211DataOrMgmtFrame extends Ieee80211TwoAddressFrame
 * {
 *     byteLength = LENGTH_MGMT / 8;
 *     MACAddress address3;
 *     short fragmentNumber;
 *     uint16 sequenceNumber;
 * }
 * </pre>
 */
class Ieee80211DataOrMgmtFrame : public ::Ieee80211TwoAddressFrame
{
  protected:
    MACAddress address3_var;
    short fragmentNumber_var;
    uint16 sequenceNumber_var;

  private:
    void copy(const Ieee80211DataOrMgmtFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211DataOrMgmtFrame&);

  public:
    Ieee80211DataOrMgmtFrame(const char *name=NULL, int kind=0);
    Ieee80211DataOrMgmtFrame(const Ieee80211DataOrMgmtFrame& other);
    virtual ~Ieee80211DataOrMgmtFrame();
    Ieee80211DataOrMgmtFrame& operator=(const Ieee80211DataOrMgmtFrame& other);
    virtual Ieee80211DataOrMgmtFrame *dup() const {return new Ieee80211DataOrMgmtFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getAddress3();
    virtual const MACAddress& getAddress3() const {return const_cast<Ieee80211DataOrMgmtFrame*>(this)->getAddress3();}
    virtual void setAddress3(const MACAddress& address3);
    virtual short getFragmentNumber() const;
    virtual void setFragmentNumber(short fragmentNumber);
    virtual uint16 getSequenceNumber() const;
    virtual void setSequenceNumber(uint16 sequenceNumber);
};

inline void doPacking(cCommBuffer *b, Ieee80211DataOrMgmtFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211DataOrMgmtFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mac/Ieee80211Frame.msg:147</tt> by nedtool.
 * <pre>
 * //
 * // Format of the 802.11 data frame
 * //
 * packet Ieee80211DataFrame extends Ieee80211DataOrMgmtFrame
 * {
 *     byteLength = LENGTH_DATAHDR / 8;
 *     type = ST_DATA;
 *     MACAddress address4;
 * }
 * </pre>
 */
class Ieee80211DataFrame : public ::Ieee80211DataOrMgmtFrame
{
  protected:
    MACAddress address4_var;

  private:
    void copy(const Ieee80211DataFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211DataFrame&);

  public:
    Ieee80211DataFrame(const char *name=NULL, int kind=0);
    Ieee80211DataFrame(const Ieee80211DataFrame& other);
    virtual ~Ieee80211DataFrame();
    Ieee80211DataFrame& operator=(const Ieee80211DataFrame& other);
    virtual Ieee80211DataFrame *dup() const {return new Ieee80211DataFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getAddress4();
    virtual const MACAddress& getAddress4() const {return const_cast<Ieee80211DataFrame*>(this)->getAddress4();}
    virtual void setAddress4(const MACAddress& address4);
};

inline void doPacking(cCommBuffer *b, Ieee80211DataFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211DataFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mac/Ieee80211Frame.msg:157</tt> by nedtool.
 * <pre>
 * //
 * // 802.11 data frame with the 8-byte SNAP header (AA AA 03, 00 00 00, <2-byte ~EtherType>)
 * //
 * packet Ieee80211DataFrameWithSNAP extends Ieee80211DataFrame
 * {
 *     byteLength = LENGTH_DATAHDR / 8 + SNAP_HEADER_BYTES;
 *     int etherType @enum(EtherType);
 * }
 * </pre>
 */
class Ieee80211DataFrameWithSNAP : public ::Ieee80211DataFrame
{
  protected:
    int etherType_var;

  private:
    void copy(const Ieee80211DataFrameWithSNAP& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211DataFrameWithSNAP&);

  public:
    Ieee80211DataFrameWithSNAP(const char *name=NULL, int kind=0);
    Ieee80211DataFrameWithSNAP(const Ieee80211DataFrameWithSNAP& other);
    virtual ~Ieee80211DataFrameWithSNAP();
    Ieee80211DataFrameWithSNAP& operator=(const Ieee80211DataFrameWithSNAP& other);
    virtual Ieee80211DataFrameWithSNAP *dup() const {return new Ieee80211DataFrameWithSNAP(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getEtherType() const;
    virtual void setEtherType(int etherType);
};

inline void doPacking(cCommBuffer *b, Ieee80211DataFrameWithSNAP& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211DataFrameWithSNAP& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mac/Ieee80211Frame.msg:166</tt> by nedtool.
 * <pre>
 * //
 * // Base class for 802.11 management frames (subclasses will add frame body contents)
 * //
 * packet Ieee80211ManagementFrame extends Ieee80211DataOrMgmtFrame
 * {
 *     short Category;
 *     //short action @enum(WirelessNetworkManagementAction); // action
 * }
 * </pre>
 */
class Ieee80211ManagementFrame : public ::Ieee80211DataOrMgmtFrame
{
  protected:
    short Category_var;

  private:
    void copy(const Ieee80211ManagementFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211ManagementFrame&);

  public:
    Ieee80211ManagementFrame(const char *name=NULL, int kind=0);
    Ieee80211ManagementFrame(const Ieee80211ManagementFrame& other);
    virtual ~Ieee80211ManagementFrame();
    Ieee80211ManagementFrame& operator=(const Ieee80211ManagementFrame& other);
    virtual Ieee80211ManagementFrame *dup() const {return new Ieee80211ManagementFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual short getCategory() const;
    virtual void setCategory(short Category);
};

inline void doPacking(cCommBuffer *b, Ieee80211ManagementFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211ManagementFrame& obj) {obj.parsimUnpack(b);}

/**
 * Enum generated from <tt>inet/linklayer/ieee80211/mac/Ieee80211Frame.msg:172</tt> by nedtool.
 * <pre>
 * enum MeshType
 * {
 * 
 *     UPPERMESSAGE = 0x1;
 *     ROUTING = 0x2;
 * }
 * </pre>
 */
enum MeshType {
    UPPERMESSAGE = 0x1,
    ROUTING = 0x2
};

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mac/Ieee80211Frame.msg:178</tt> by nedtool.
 * <pre>
 * packet Ieee80211MeshFrame extends Ieee80211DataFrame
 * {
 *     type = ST_DATA;
 * 
 *     byteLength = 38;
 *     short TTL = 15; // Is used by experimental 80211 mesh protocol
 *     unsigned short subType = 0;
 *     long seqNumber;
 *     MACAddress finalAddress; //virtual address used by anycast procedure
 *                              // contain the initial address and avoid the necessity of search the IP address
 *     // used for statistics
 *     unsigned int totalHops = 0;
 *     unsigned int totalStaticHops = 0;
 *     int channels[]; // used to broadcast the used channels
 *     // this fiels are used by fragmentation over ethernet, not necesasry, it's possible to use the fields un the Ieee80211 frame 
 *     bool isFragment = false;
 *     unsigned long realLength = 0;
 * 
 * }
 * </pre>
 */
class Ieee80211MeshFrame : public ::Ieee80211DataFrame
{
  protected:
    short TTL_var;
    unsigned short subType_var;
    long seqNumber_var;
    MACAddress finalAddress_var;
    unsigned int totalHops_var;
    unsigned int totalStaticHops_var;
    int *channels_var; // array ptr
    unsigned int channels_arraysize;
    bool isFragment_var;
    unsigned long realLength_var;

  private:
    void copy(const Ieee80211MeshFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211MeshFrame&);

  public:
    Ieee80211MeshFrame(const char *name=NULL, int kind=0);
    Ieee80211MeshFrame(const Ieee80211MeshFrame& other);
    virtual ~Ieee80211MeshFrame();
    Ieee80211MeshFrame& operator=(const Ieee80211MeshFrame& other);
    virtual Ieee80211MeshFrame *dup() const {return new Ieee80211MeshFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual short getTTL() const;
    virtual void setTTL(short TTL);
    virtual unsigned short getSubType() const;
    virtual void setSubType(unsigned short subType);
    virtual long getSeqNumber() const;
    virtual void setSeqNumber(long seqNumber);
    virtual MACAddress& getFinalAddress();
    virtual const MACAddress& getFinalAddress() const {return const_cast<Ieee80211MeshFrame*>(this)->getFinalAddress();}
    virtual void setFinalAddress(const MACAddress& finalAddress);
    virtual unsigned int getTotalHops() const;
    virtual void setTotalHops(unsigned int totalHops);
    virtual unsigned int getTotalStaticHops() const;
    virtual void setTotalStaticHops(unsigned int totalStaticHops);
    virtual void setChannelsArraySize(unsigned int size);
    virtual unsigned int getChannelsArraySize() const;
    virtual int getChannels(unsigned int k) const;
    virtual void setChannels(unsigned int k, int channels);
    virtual bool getIsFragment() const;
    virtual void setIsFragment(bool isFragment);
    virtual unsigned long getRealLength() const;
    virtual void setRealLength(unsigned long realLength);
};

inline void doPacking(cCommBuffer *b, Ieee80211MeshFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211MeshFrame& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mac/Ieee80211Frame.msg:198</tt> by nedtool.
 * <pre>
 * packet Ieee80211BlockAckFrameReq extends Ieee80211TwoAddressFrame
 * {
 *     @customize(true);
 *     type = ST_BLOCKACK_REQ;
 *     byteLength = 24;
 *     bool barAckPolicy;
 *     bool multiTid;
 *     bool compressed;
 *     unsigned short tidInfo; //Block Acknowledgment request
 *     unsigned short fragNumber = 0;
 *     unsigned short startingSequence;
 * }
 * </pre>
 *
 * Ieee80211BlockAckFrameReq_Base is only useful if it gets subclassed, and Ieee80211BlockAckFrameReq is derived from it.
 * The minimum code to be written for Ieee80211BlockAckFrameReq is the following:
 *
 * <pre>
 * class Ieee80211BlockAckFrameReq : public Ieee80211BlockAckFrameReq_Base
 * {
 *   private:
 *     void copy(const Ieee80211BlockAckFrameReq& other) { ... }

 *   public:
 *     Ieee80211BlockAckFrameReq(const char *name=NULL, int kind=0) : Ieee80211BlockAckFrameReq_Base(name,kind) {}
 *     Ieee80211BlockAckFrameReq(const Ieee80211BlockAckFrameReq& other) : Ieee80211BlockAckFrameReq_Base(other) {copy(other);}
 *     Ieee80211BlockAckFrameReq& operator=(const Ieee80211BlockAckFrameReq& other) {if (this==&other) return *this; Ieee80211BlockAckFrameReq_Base::operator=(other); copy(other); return *this;}
 *     virtual Ieee80211BlockAckFrameReq *dup() const {return new Ieee80211BlockAckFrameReq(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from Ieee80211BlockAckFrameReq_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(Ieee80211BlockAckFrameReq);
 * </pre>
 */
class Ieee80211BlockAckFrameReq_Base : public ::Ieee80211TwoAddressFrame
{
  protected:
    bool barAckPolicy_var;
    bool multiTid_var;
    bool compressed_var;
    unsigned short tidInfo_var;
    unsigned short fragNumber_var;
    unsigned short startingSequence_var;

  private:
    void copy(const Ieee80211BlockAckFrameReq_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211BlockAckFrameReq_Base&);
    // make constructors protected to avoid instantiation
    Ieee80211BlockAckFrameReq_Base(const char *name=NULL, int kind=0);
    Ieee80211BlockAckFrameReq_Base(const Ieee80211BlockAckFrameReq_Base& other);
    // make assignment operator protected to force the user override it
    Ieee80211BlockAckFrameReq_Base& operator=(const Ieee80211BlockAckFrameReq_Base& other);

  public:
    virtual ~Ieee80211BlockAckFrameReq_Base();
    virtual Ieee80211BlockAckFrameReq_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class Ieee80211BlockAckFrameReq");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool getBarAckPolicy() const;
    virtual void setBarAckPolicy(bool barAckPolicy);
    virtual bool getMultiTid() const;
    virtual void setMultiTid(bool multiTid);
    virtual bool getCompressed() const;
    virtual void setCompressed(bool compressed);
    virtual unsigned short getTidInfo() const;
    virtual void setTidInfo(unsigned short tidInfo);
    virtual unsigned short getFragNumber() const;
    virtual void setFragNumber(unsigned short fragNumber);
    virtual unsigned short getStartingSequence() const;
    virtual void setStartingSequence(unsigned short startingSequence);
};

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mac/Ieee80211Frame.msg:211</tt> by nedtool.
 * <pre>
 * packet Ieee80211BlockAckFrame extends Ieee80211TwoAddressFrame
 * {
 *     @customize(true);
 *     type = ST_BLOCKACK;
 *     byteLength = 152;
 *     bool baAckPolicy;
 *     bool multiTid;
 *     bool compressed;
 *     unsigned short tidInfo;
 *     unsigned short startingSequence;
 * }
 * </pre>
 *
 * Ieee80211BlockAckFrame_Base is only useful if it gets subclassed, and Ieee80211BlockAckFrame is derived from it.
 * The minimum code to be written for Ieee80211BlockAckFrame is the following:
 *
 * <pre>
 * class Ieee80211BlockAckFrame : public Ieee80211BlockAckFrame_Base
 * {
 *   private:
 *     void copy(const Ieee80211BlockAckFrame& other) { ... }

 *   public:
 *     Ieee80211BlockAckFrame(const char *name=NULL, int kind=0) : Ieee80211BlockAckFrame_Base(name,kind) {}
 *     Ieee80211BlockAckFrame(const Ieee80211BlockAckFrame& other) : Ieee80211BlockAckFrame_Base(other) {copy(other);}
 *     Ieee80211BlockAckFrame& operator=(const Ieee80211BlockAckFrame& other) {if (this==&other) return *this; Ieee80211BlockAckFrame_Base::operator=(other); copy(other); return *this;}
 *     virtual Ieee80211BlockAckFrame *dup() const {return new Ieee80211BlockAckFrame(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from Ieee80211BlockAckFrame_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(Ieee80211BlockAckFrame);
 * </pre>
 */
class Ieee80211BlockAckFrame_Base : public ::Ieee80211TwoAddressFrame
{
  protected:
    bool baAckPolicy_var;
    bool multiTid_var;
    bool compressed_var;
    unsigned short tidInfo_var;
    unsigned short startingSequence_var;

  private:
    void copy(const Ieee80211BlockAckFrame_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211BlockAckFrame_Base&);
    // make constructors protected to avoid instantiation
    Ieee80211BlockAckFrame_Base(const char *name=NULL, int kind=0);
    Ieee80211BlockAckFrame_Base(const Ieee80211BlockAckFrame_Base& other);
    // make assignment operator protected to force the user override it
    Ieee80211BlockAckFrame_Base& operator=(const Ieee80211BlockAckFrame_Base& other);

  public:
    virtual ~Ieee80211BlockAckFrame_Base();
    virtual Ieee80211BlockAckFrame_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class Ieee80211BlockAckFrame");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool getBaAckPolicy() const;
    virtual void setBaAckPolicy(bool baAckPolicy);
    virtual bool getMultiTid() const;
    virtual void setMultiTid(bool multiTid);
    virtual bool getCompressed() const;
    virtual void setCompressed(bool compressed);
    virtual unsigned short getTidInfo() const;
    virtual void setTidInfo(unsigned short tidInfo);
    virtual unsigned short getStartingSequence() const;
    virtual void setStartingSequence(unsigned short startingSequence);
};


#endif // ifndef _IEEE80211FRAME_M_H_

