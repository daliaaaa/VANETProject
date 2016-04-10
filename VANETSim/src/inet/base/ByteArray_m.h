//
// Generated file, do not edit! Created by nedtool 4.6 from inet/base/ByteArray.msg.
//

#ifndef _BYTEARRAY_M_H_
#define _BYTEARRAY_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
#include "INETDefs.h"
// }}

/**
 * Class generated from <tt>inet/base/ByteArray.msg:26</tt> by nedtool.
 * <pre>
 * //
 * // Class that carries raw bytes.
 * // For example, used by ~ByteArrayMessage and some TCP queues.
 * //
 * class ByteArray
 * {
 *     @customize(true);
 *     char data[];
 * }
 * </pre>
 *
 * ByteArray_Base is only useful if it gets subclassed, and ByteArray is derived from it.
 * The minimum code to be written for ByteArray is the following:
 *
 * <pre>
 * class ByteArray : public ByteArray_Base
 * {
 *   private:
 *     void copy(const ByteArray& other) { ... }

 *   public:
 *     ByteArray() : ByteArray_Base() {}
 *     ByteArray(const ByteArray& other) : ByteArray_Base(other) {copy(other);}
 *     ByteArray& operator=(const ByteArray& other) {if (this==&other) return *this; ByteArray_Base::operator=(other); copy(other); return *this;}
 *     virtual ByteArray *dup() const {return new ByteArray(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from ByteArray_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(ByteArray);
 * </pre>
 */
class ByteArray_Base : public ::cObject
{
  protected:
    char *data_var; // array ptr
    unsigned int data_arraysize;

  private:
    void copy(const ByteArray_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ByteArray_Base&);
    // make constructors protected to avoid instantiation
    ByteArray_Base();
    ByteArray_Base(const ByteArray_Base& other);
    // make assignment operator protected to force the user override it
    ByteArray_Base& operator=(const ByteArray_Base& other);

  public:
    virtual ~ByteArray_Base();
    virtual ByteArray_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class ByteArray");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual void setDataArraySize(unsigned int size);
    virtual unsigned int getDataArraySize() const;
    virtual char getData(unsigned int k) const;
    virtual void setData(unsigned int k, char data);
};


#endif // ifndef _BYTEARRAY_M_H_

