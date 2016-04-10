//
// Generated file, do not edit! Created by nedtool 4.6 from inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg.
//

#ifndef _IEEE80211PRIMITIVES_M_H_
#define _IEEE80211PRIMITIVES_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "Ieee80211MgmtFrames_m.h"
// }}

/**
 * Enum generated from <tt>inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg:38</tt> by nedtool.
 * <pre>
 * //
 * // IEEE 802.11 command codes, sent by the agent to the management entity.
 * // These constants should be set as message kind on the messages.
 * //
 * // @see ~Ieee80211PrimConfirmCode, ~Ieee80211MgmtSTA, ~Ieee80211AgentSTA
 * //
 * enum Ieee80211PrimRequestCode
 * {
 * 
 *     PR_SCAN_REQUEST = 1;
 *     PR_AUTHENTICATE_REQUEST = 2;
 *     PR_DEAUTHENTICATE_REQUEST = 3;
 *     PR_ASSOCIATE_REQUEST = 4;
 *     PR_REASSOCIATE_REQUEST = 5;
 *     PR_DISASSOCIATE_REQUEST = 6;
 * }
 * </pre>
 */
enum Ieee80211PrimRequestCode {
    PR_SCAN_REQUEST = 1,
    PR_AUTHENTICATE_REQUEST = 2,
    PR_DEAUTHENTICATE_REQUEST = 3,
    PR_ASSOCIATE_REQUEST = 4,
    PR_REASSOCIATE_REQUEST = 5,
    PR_DISASSOCIATE_REQUEST = 6
};

/**
 * Enum generated from <tt>inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg:56</tt> by nedtool.
 * <pre>
 * //
 * // IEEE 802.11 confirm codes, sent by the management entity to the agent,
 * // in response to the agents's requests.
 * // These constants should be set as message kind on the messages.
 * //
 * // @see ~Ieee80211PrimRequestCode, ~Ieee80211MgmtSTA, ~Ieee80211AgentSTA
 * //
 * enum Ieee80211PrimConfirmCode
 * {
 * 
 *     PR_SCAN_CONFIRM = 1;
 *     PR_AUTHENTICATE_CONFIRM = 2;
 *     PR_DEAUTHENTICATE_CONFIRM = 3;
 *     PR_ASSOCIATE_CONFIRM = 4;
 *     PR_REASSOCIATE_CONFIRM = 5;
 *     PR_DISASSOCIATE_CONFIRM = 6;
 * }
 * </pre>
 */
enum Ieee80211PrimConfirmCode {
    PR_SCAN_CONFIRM = 1,
    PR_AUTHENTICATE_CONFIRM = 2,
    PR_DEAUTHENTICATE_CONFIRM = 3,
    PR_ASSOCIATE_CONFIRM = 4,
    PR_REASSOCIATE_CONFIRM = 5,
    PR_DISASSOCIATE_CONFIRM = 6
};

/**
 * Enum generated from <tt>inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg:67</tt> by nedtool.
 * <pre>
 * enum Ieee80211BSSType
 * {
 * 
 *     BSSTYPE_ANY = 0;
 *     BSSTYPE_INFRASTRUCTURE = 1;
 *     BSSTYPE_INDEPENDENT = 2;
 * }
 * </pre>
 */
enum Ieee80211BSSType {
    BSSTYPE_ANY = 0,
    BSSTYPE_INFRASTRUCTURE = 1,
    BSSTYPE_INDEPENDENT = 2
};

/**
 * Enum generated from <tt>inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg:81</tt> by nedtool.
 * <pre>
 * //
 * // Values for the resultCode field in confirm primitives, sent from
 * // the management entity to the agent.
 * //
 * // @see ~Ieee80211PrimConfirmCode, ~Ieee80211MgmtSTA, ~Ieee80211AgentSTA
 * //
 * enum Ieee80211PrimResultCode
 * {
 * 
 *     PRC_SUCCESS = 0;
 *     PRC_INVALID_PARAMETERS = 1;
 *     PRC_TIMEOUT = 2;
 *     PRC_TOO_MANY_SIMULTANEOUS_REQUESTS = 3;
 *     PRC_REFUSED = 4;
 * }
 * </pre>
 */
enum Ieee80211PrimResultCode {
    PRC_SUCCESS = 0,
    PRC_INVALID_PARAMETERS = 1,
    PRC_TIMEOUT = 2,
    PRC_TOO_MANY_SIMULTANEOUS_REQUESTS = 3,
    PRC_REFUSED = 4
};

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg:94</tt> by nedtool.
 * <pre>
 * //
 * // Base class for request primitives
 * //
 * class Ieee80211PrimRequest
 * {
 * }
 * </pre>
 */
class Ieee80211PrimRequest : public ::cObject
{
  protected:

  private:
    void copy(const Ieee80211PrimRequest& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211PrimRequest&);

  public:
    Ieee80211PrimRequest();
    Ieee80211PrimRequest(const Ieee80211PrimRequest& other);
    virtual ~Ieee80211PrimRequest();
    Ieee80211PrimRequest& operator=(const Ieee80211PrimRequest& other);
    virtual Ieee80211PrimRequest *dup() const {return new Ieee80211PrimRequest(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, Ieee80211PrimRequest& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211PrimRequest& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg:101</tt> by nedtool.
 * <pre>
 * //
 * // Base class for confirm primitives
 * //
 * class Ieee80211PrimConfirm
 * {
 *     int resultCode @enum(Ieee80211PrimResultCode);
 * }
 * </pre>
 */
class Ieee80211PrimConfirm : public ::cObject
{
  protected:
    int resultCode_var;

  private:
    void copy(const Ieee80211PrimConfirm& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211PrimConfirm&);

  public:
    Ieee80211PrimConfirm();
    Ieee80211PrimConfirm(const Ieee80211PrimConfirm& other);
    virtual ~Ieee80211PrimConfirm();
    Ieee80211PrimConfirm& operator=(const Ieee80211PrimConfirm& other);
    virtual Ieee80211PrimConfirm *dup() const {return new Ieee80211PrimConfirm(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getResultCode() const;
    virtual void setResultCode(int resultCode);
};

inline void doPacking(cCommBuffer *b, Ieee80211PrimConfirm& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211PrimConfirm& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg:109</tt> by nedtool.
 * <pre>
 * //
 * // Losely based on MLME-SCAN.request.
 * //
 * class Ieee80211Prim_ScanRequest extends Ieee80211PrimRequest
 * {
 *     int BSSType @enum(Ieee80211BSSType); // determines type of BSS's to include in the scan
 *     MACAddress BSSID; // specific BSSID to scan for (default: any)
 *     string SSID;      // SSID to scan for SSID (default: any)
 *     bool activeScan;  // whether to perform active or passive scanning
 *     simtime_t probeDelay; // delay (in �s) to be used prior to transmitting a Probe frame during active scanning
 *     int channelList[]; // list of channels to scan (default: all channels)
 *     simtime_t minChannelTime; // minimum time to spend on each channel when scanning
 *     simtime_t maxChannelTime; // maximum time to spend on each channel when scanning
 * }
 * </pre>
 */
class Ieee80211Prim_ScanRequest : public ::Ieee80211PrimRequest
{
  protected:
    int BSSType_var;
    MACAddress BSSID_var;
    opp_string SSID_var;
    bool activeScan_var;
    simtime_t probeDelay_var;
    int *channelList_var; // array ptr
    unsigned int channelList_arraysize;
    simtime_t minChannelTime_var;
    simtime_t maxChannelTime_var;

  private:
    void copy(const Ieee80211Prim_ScanRequest& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211Prim_ScanRequest&);

  public:
    Ieee80211Prim_ScanRequest();
    Ieee80211Prim_ScanRequest(const Ieee80211Prim_ScanRequest& other);
    virtual ~Ieee80211Prim_ScanRequest();
    Ieee80211Prim_ScanRequest& operator=(const Ieee80211Prim_ScanRequest& other);
    virtual Ieee80211Prim_ScanRequest *dup() const {return new Ieee80211Prim_ScanRequest(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getBSSType() const;
    virtual void setBSSType(int BSSType);
    virtual MACAddress& getBSSID();
    virtual const MACAddress& getBSSID() const {return const_cast<Ieee80211Prim_ScanRequest*>(this)->getBSSID();}
    virtual void setBSSID(const MACAddress& BSSID);
    virtual const char * getSSID() const;
    virtual void setSSID(const char * SSID);
    virtual bool getActiveScan() const;
    virtual void setActiveScan(bool activeScan);
    virtual simtime_t getProbeDelay() const;
    virtual void setProbeDelay(simtime_t probeDelay);
    virtual void setChannelListArraySize(unsigned int size);
    virtual unsigned int getChannelListArraySize() const;
    virtual int getChannelList(unsigned int k) const;
    virtual void setChannelList(unsigned int k, int channelList);
    virtual simtime_t getMinChannelTime() const;
    virtual void setMinChannelTime(simtime_t minChannelTime);
    virtual simtime_t getMaxChannelTime() const;
    virtual void setMaxChannelTime(simtime_t maxChannelTime);
};

inline void doPacking(cCommBuffer *b, Ieee80211Prim_ScanRequest& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211Prim_ScanRequest& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg:121</tt> by nedtool.
 * <pre>
 * class Ieee80211Prim_BSSDescription
 * {
 *     int channelNumber;
 *     MACAddress BSSID;
 *     string SSID;
 *     Ieee80211SupportedRatesElement supportedRates;
 *     simtime_t beaconInterval;
 * 
 *     double rxPower; // received power from AP; not part of the standard
 * }
 * </pre>
 */
class Ieee80211Prim_BSSDescription : public ::cObject
{
  protected:
    int channelNumber_var;
    MACAddress BSSID_var;
    opp_string SSID_var;
    Ieee80211SupportedRatesElement supportedRates_var;
    simtime_t beaconInterval_var;
    double rxPower_var;

  private:
    void copy(const Ieee80211Prim_BSSDescription& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211Prim_BSSDescription&);

  public:
    Ieee80211Prim_BSSDescription();
    Ieee80211Prim_BSSDescription(const Ieee80211Prim_BSSDescription& other);
    virtual ~Ieee80211Prim_BSSDescription();
    Ieee80211Prim_BSSDescription& operator=(const Ieee80211Prim_BSSDescription& other);
    virtual Ieee80211Prim_BSSDescription *dup() const {return new Ieee80211Prim_BSSDescription(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getChannelNumber() const;
    virtual void setChannelNumber(int channelNumber);
    virtual MACAddress& getBSSID();
    virtual const MACAddress& getBSSID() const {return const_cast<Ieee80211Prim_BSSDescription*>(this)->getBSSID();}
    virtual void setBSSID(const MACAddress& BSSID);
    virtual const char * getSSID() const;
    virtual void setSSID(const char * SSID);
    virtual Ieee80211SupportedRatesElement& getSupportedRates();
    virtual const Ieee80211SupportedRatesElement& getSupportedRates() const {return const_cast<Ieee80211Prim_BSSDescription*>(this)->getSupportedRates();}
    virtual void setSupportedRates(const Ieee80211SupportedRatesElement& supportedRates);
    virtual simtime_t getBeaconInterval() const;
    virtual void setBeaconInterval(simtime_t beaconInterval);
    virtual double getRxPower() const;
    virtual void setRxPower(double rxPower);
};

inline void doPacking(cCommBuffer *b, Ieee80211Prim_BSSDescription& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211Prim_BSSDescription& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg:136</tt> by nedtool.
 * <pre>
 * //
 * // Losely based on MLME-SCAN.confirm
 * // Possible result codes: SUCCESS, INVALID_PARAMETERS
 * //
 * class Ieee80211Prim_ScanConfirm extends Ieee80211PrimConfirm
 * {
 *     Ieee80211Prim_BSSDescription bssList[];
 * }
 * </pre>
 */
class Ieee80211Prim_ScanConfirm : public ::Ieee80211PrimConfirm
{
  protected:
    Ieee80211Prim_BSSDescription *bssList_var; // array ptr
    unsigned int bssList_arraysize;

  private:
    void copy(const Ieee80211Prim_ScanConfirm& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211Prim_ScanConfirm&);

  public:
    Ieee80211Prim_ScanConfirm();
    Ieee80211Prim_ScanConfirm(const Ieee80211Prim_ScanConfirm& other);
    virtual ~Ieee80211Prim_ScanConfirm();
    Ieee80211Prim_ScanConfirm& operator=(const Ieee80211Prim_ScanConfirm& other);
    virtual Ieee80211Prim_ScanConfirm *dup() const {return new Ieee80211Prim_ScanConfirm(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual void setBssListArraySize(unsigned int size);
    virtual unsigned int getBssListArraySize() const;
    virtual Ieee80211Prim_BSSDescription& getBssList(unsigned int k);
    virtual const Ieee80211Prim_BSSDescription& getBssList(unsigned int k) const {return const_cast<Ieee80211Prim_ScanConfirm*>(this)->getBssList(k);}
    virtual void setBssList(unsigned int k, const Ieee80211Prim_BSSDescription& bssList);
};

inline void doPacking(cCommBuffer *b, Ieee80211Prim_ScanConfirm& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211Prim_ScanConfirm& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg:149</tt> by nedtool.
 * <pre>
 * //
 * // Losely based on MLME-AUTHENTICATE.request.
 * //
 * // Note: the "authType" parameter (Open System, Shared Key, etc) is omitted.
 * // The authentication procedure is simulated by this model by exchanging
 * // a number of "dummy" authentication frames without real contents,
 * // and it is configured in the AP how many authentication steps it requires.
 * //
 * class Ieee80211Prim_AuthenticateRequest extends Ieee80211PrimRequest
 * {
 *     MACAddress address;
 *     simtime_t timeout;
 * }
 * </pre>
 */
class Ieee80211Prim_AuthenticateRequest : public ::Ieee80211PrimRequest
{
  protected:
    MACAddress address_var;
    simtime_t timeout_var;

  private:
    void copy(const Ieee80211Prim_AuthenticateRequest& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211Prim_AuthenticateRequest&);

  public:
    Ieee80211Prim_AuthenticateRequest();
    Ieee80211Prim_AuthenticateRequest(const Ieee80211Prim_AuthenticateRequest& other);
    virtual ~Ieee80211Prim_AuthenticateRequest();
    Ieee80211Prim_AuthenticateRequest& operator=(const Ieee80211Prim_AuthenticateRequest& other);
    virtual Ieee80211Prim_AuthenticateRequest *dup() const {return new Ieee80211Prim_AuthenticateRequest(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getAddress();
    virtual const MACAddress& getAddress() const {return const_cast<Ieee80211Prim_AuthenticateRequest*>(this)->getAddress();}
    virtual void setAddress(const MACAddress& address);
    virtual simtime_t getTimeout() const;
    virtual void setTimeout(simtime_t timeout);
};

inline void doPacking(cCommBuffer *b, Ieee80211Prim_AuthenticateRequest& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211Prim_AuthenticateRequest& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg:159</tt> by nedtool.
 * <pre>
 * //
 * // Losely based on MLME-AUTHENTICATE.confirm.
 * // Possible result codes: SUCCESS, INVALID_PARAMETERS, TIMEOUT, TOO_MANY_SIMULTANEOUS_REQUESTS, REFUSED
 * //
 * class Ieee80211Prim_AuthenticateConfirm extends Ieee80211PrimConfirm
 * {
 *     MACAddress address;
 * }
 * </pre>
 */
class Ieee80211Prim_AuthenticateConfirm : public ::Ieee80211PrimConfirm
{
  protected:
    MACAddress address_var;

  private:
    void copy(const Ieee80211Prim_AuthenticateConfirm& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211Prim_AuthenticateConfirm&);

  public:
    Ieee80211Prim_AuthenticateConfirm();
    Ieee80211Prim_AuthenticateConfirm(const Ieee80211Prim_AuthenticateConfirm& other);
    virtual ~Ieee80211Prim_AuthenticateConfirm();
    Ieee80211Prim_AuthenticateConfirm& operator=(const Ieee80211Prim_AuthenticateConfirm& other);
    virtual Ieee80211Prim_AuthenticateConfirm *dup() const {return new Ieee80211Prim_AuthenticateConfirm(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getAddress();
    virtual const MACAddress& getAddress() const {return const_cast<Ieee80211Prim_AuthenticateConfirm*>(this)->getAddress();}
    virtual void setAddress(const MACAddress& address);
};

inline void doPacking(cCommBuffer *b, Ieee80211Prim_AuthenticateConfirm& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211Prim_AuthenticateConfirm& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg:171</tt> by nedtool.
 * <pre>
 * //
 * // Losely based on MLME-DEAUTHENTICATE.request
 * //
 * // NOTE: there is no Deauthenticate Confirm, because Deauthenticate Request
 * // takes place immediately, and nothing can go wrong (there is no reply
 * // from the AP to wait for)
 * //
 * class Ieee80211Prim_DeauthenticateRequest extends Ieee80211PrimRequest
 * {
 *     MACAddress address;
 *     int reasonCode @enum(Ieee80211ReasonCode);
 * }
 * </pre>
 */
class Ieee80211Prim_DeauthenticateRequest : public ::Ieee80211PrimRequest
{
  protected:
    MACAddress address_var;
    int reasonCode_var;

  private:
    void copy(const Ieee80211Prim_DeauthenticateRequest& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211Prim_DeauthenticateRequest&);

  public:
    Ieee80211Prim_DeauthenticateRequest();
    Ieee80211Prim_DeauthenticateRequest(const Ieee80211Prim_DeauthenticateRequest& other);
    virtual ~Ieee80211Prim_DeauthenticateRequest();
    Ieee80211Prim_DeauthenticateRequest& operator=(const Ieee80211Prim_DeauthenticateRequest& other);
    virtual Ieee80211Prim_DeauthenticateRequest *dup() const {return new Ieee80211Prim_DeauthenticateRequest(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getAddress();
    virtual const MACAddress& getAddress() const {return const_cast<Ieee80211Prim_DeauthenticateRequest*>(this)->getAddress();}
    virtual void setAddress(const MACAddress& address);
    virtual int getReasonCode() const;
    virtual void setReasonCode(int reasonCode);
};

inline void doPacking(cCommBuffer *b, Ieee80211Prim_DeauthenticateRequest& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211Prim_DeauthenticateRequest& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg:180</tt> by nedtool.
 * <pre>
 * //
 * // Losely based on MLME-ASSOCIATE.request
 * //
 * class Ieee80211Prim_AssociateRequest extends Ieee80211PrimRequest
 * {
 *     MACAddress address;
 *     simtime_t timeout;
 * }
 * </pre>
 */
class Ieee80211Prim_AssociateRequest : public ::Ieee80211PrimRequest
{
  protected:
    MACAddress address_var;
    simtime_t timeout_var;

  private:
    void copy(const Ieee80211Prim_AssociateRequest& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211Prim_AssociateRequest&);

  public:
    Ieee80211Prim_AssociateRequest();
    Ieee80211Prim_AssociateRequest(const Ieee80211Prim_AssociateRequest& other);
    virtual ~Ieee80211Prim_AssociateRequest();
    Ieee80211Prim_AssociateRequest& operator=(const Ieee80211Prim_AssociateRequest& other);
    virtual Ieee80211Prim_AssociateRequest *dup() const {return new Ieee80211Prim_AssociateRequest(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getAddress();
    virtual const MACAddress& getAddress() const {return const_cast<Ieee80211Prim_AssociateRequest*>(this)->getAddress();}
    virtual void setAddress(const MACAddress& address);
    virtual simtime_t getTimeout() const;
    virtual void setTimeout(simtime_t timeout);
};

inline void doPacking(cCommBuffer *b, Ieee80211Prim_AssociateRequest& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211Prim_AssociateRequest& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg:190</tt> by nedtool.
 * <pre>
 * //
 * // Losely based on MLME-ASSOCIATE.confirm
 * // Possible result codes: SUCCESS, INVALID_PARAMETERS, TIMEOUT, REFUSED
 * //
 * class Ieee80211Prim_AssociateConfirm extends Ieee80211PrimConfirm
 * {
 *     MACAddress address;
 * }
 * </pre>
 */
class Ieee80211Prim_AssociateConfirm : public ::Ieee80211PrimConfirm
{
  protected:
    MACAddress address_var;

  private:
    void copy(const Ieee80211Prim_AssociateConfirm& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211Prim_AssociateConfirm&);

  public:
    Ieee80211Prim_AssociateConfirm();
    Ieee80211Prim_AssociateConfirm(const Ieee80211Prim_AssociateConfirm& other);
    virtual ~Ieee80211Prim_AssociateConfirm();
    Ieee80211Prim_AssociateConfirm& operator=(const Ieee80211Prim_AssociateConfirm& other);
    virtual Ieee80211Prim_AssociateConfirm *dup() const {return new Ieee80211Prim_AssociateConfirm(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getAddress();
    virtual const MACAddress& getAddress() const {return const_cast<Ieee80211Prim_AssociateConfirm*>(this)->getAddress();}
    virtual void setAddress(const MACAddress& address);
};

inline void doPacking(cCommBuffer *b, Ieee80211Prim_AssociateConfirm& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211Prim_AssociateConfirm& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg:198</tt> by nedtool.
 * <pre>
 * //
 * // MLME-REASSOCIATE.request is very similar to MLME-ASSOCIATE.request
 * //
 * class Ieee80211Prim_ReassociateRequest extends Ieee80211Prim_AssociateRequest
 * {
 * }
 * </pre>
 */
class Ieee80211Prim_ReassociateRequest : public ::Ieee80211Prim_AssociateRequest
{
  protected:

  private:
    void copy(const Ieee80211Prim_ReassociateRequest& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211Prim_ReassociateRequest&);

  public:
    Ieee80211Prim_ReassociateRequest();
    Ieee80211Prim_ReassociateRequest(const Ieee80211Prim_ReassociateRequest& other);
    virtual ~Ieee80211Prim_ReassociateRequest();
    Ieee80211Prim_ReassociateRequest& operator=(const Ieee80211Prim_ReassociateRequest& other);
    virtual Ieee80211Prim_ReassociateRequest *dup() const {return new Ieee80211Prim_ReassociateRequest(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, Ieee80211Prim_ReassociateRequest& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211Prim_ReassociateRequest& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg:205</tt> by nedtool.
 * <pre>
 * //
 * // MLME-REASSOCIATE.confirm is very similar to MLME-ASSOCIATE.confirm
 * //
 * class Ieee80211Prim_ReassociateConfirm extends Ieee80211Prim_AssociateConfirm
 * {
 * }
 * </pre>
 */
class Ieee80211Prim_ReassociateConfirm : public ::Ieee80211Prim_AssociateConfirm
{
  protected:

  private:
    void copy(const Ieee80211Prim_ReassociateConfirm& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211Prim_ReassociateConfirm&);

  public:
    Ieee80211Prim_ReassociateConfirm();
    Ieee80211Prim_ReassociateConfirm(const Ieee80211Prim_ReassociateConfirm& other);
    virtual ~Ieee80211Prim_ReassociateConfirm();
    Ieee80211Prim_ReassociateConfirm& operator=(const Ieee80211Prim_ReassociateConfirm& other);
    virtual Ieee80211Prim_ReassociateConfirm *dup() const {return new Ieee80211Prim_ReassociateConfirm(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, Ieee80211Prim_ReassociateConfirm& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211Prim_ReassociateConfirm& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg:216</tt> by nedtool.
 * <pre>
 * //
 * // Losely based on MLME-DISASSOCIATE.request.
 * //
 * // NOTE: there is no Disassociate Confirm, because Disassociate Request
 * // takes place immediately, and nothing can go wrong (there is no reply
 * // from the AP to wait for)
 * //
 * class Ieee80211Prim_DisassociateRequest extends Ieee80211PrimRequest
 * {
 *     MACAddress address;
 *     int reasonCode @enum(Ieee80211ReasonCode);
 * }
 * </pre>
 */
class Ieee80211Prim_DisassociateRequest : public ::Ieee80211PrimRequest
{
  protected:
    MACAddress address_var;
    int reasonCode_var;

  private:
    void copy(const Ieee80211Prim_DisassociateRequest& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211Prim_DisassociateRequest&);

  public:
    Ieee80211Prim_DisassociateRequest();
    Ieee80211Prim_DisassociateRequest(const Ieee80211Prim_DisassociateRequest& other);
    virtual ~Ieee80211Prim_DisassociateRequest();
    Ieee80211Prim_DisassociateRequest& operator=(const Ieee80211Prim_DisassociateRequest& other);
    virtual Ieee80211Prim_DisassociateRequest *dup() const {return new Ieee80211Prim_DisassociateRequest(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getAddress();
    virtual const MACAddress& getAddress() const {return const_cast<Ieee80211Prim_DisassociateRequest*>(this)->getAddress();}
    virtual void setAddress(const MACAddress& address);
    virtual int getReasonCode() const;
    virtual void setReasonCode(int reasonCode);
};

inline void doPacking(cCommBuffer *b, Ieee80211Prim_DisassociateRequest& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee80211Prim_DisassociateRequest& obj) {obj.parsimUnpack(b);}


#endif // ifndef _IEEE80211PRIMITIVES_M_H_

