//
// Generated file, do not edit! Created by nedtool 4.6 from inet/networklayer/manetrouting/base/MeshControlInfo.msg.
//

#ifndef _MESHCONTROLINFO_M_H_
#define _MESHCONTROLINFO_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "Ieee802Ctrl_m.h"
// }}

/**
 * Class generated from <tt>inet/networklayer/manetrouting/base/MeshControlInfo.msg:32</tt> by nedtool.
 * <pre>
 * //
 * // Control structure for communication between LLC and higher layers
 * //
 * class MeshControlInfo extends Ieee802Ctrl
 * {
 *     // Mesh modifications
 *     int inputId;     // used in Mesh network with several mac interfaces
 *     bool previousFix; // Used to indicate if the previous node is fix
 *     int maxHopCollaborative;
 *     bool collaborativeFeedback;
 * }
 * </pre>
 */
class MeshControlInfo : public ::Ieee802Ctrl
{
  protected:
    int inputId_var;
    bool previousFix_var;
    int maxHopCollaborative_var;
    bool collaborativeFeedback_var;

  private:
    void copy(const MeshControlInfo& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MeshControlInfo&);

  public:
    MeshControlInfo();
    MeshControlInfo(const MeshControlInfo& other);
    virtual ~MeshControlInfo();
    MeshControlInfo& operator=(const MeshControlInfo& other);
    virtual MeshControlInfo *dup() const {return new MeshControlInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getInputId() const;
    virtual void setInputId(int inputId);
    virtual bool getPreviousFix() const;
    virtual void setPreviousFix(bool previousFix);
    virtual int getMaxHopCollaborative() const;
    virtual void setMaxHopCollaborative(int maxHopCollaborative);
    virtual bool getCollaborativeFeedback() const;
    virtual void setCollaborativeFeedback(bool collaborativeFeedback);
};

inline void doPacking(cCommBuffer *b, MeshControlInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, MeshControlInfo& obj) {obj.parsimUnpack(b);}


#endif // ifndef _MESHCONTROLINFO_M_H_

