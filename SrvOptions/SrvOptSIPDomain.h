/*
 * Dibbler - a portable DHCPv6
 *
 * authors: Tomasz Mrugalski <thomson@klub.com.pl>
 *          Marek Senderski <msend@o2.pl>
 *
 * released under GNU GPL v2 only licence
 *
 * $Id: SrvOptSIPDomain.h,v 1.2 2008-08-29 00:07:37 thomson Exp $
 *
 * $Log: not supported by cvs2svn $
 * Revision 1.1  2004-11-02 01:30:54  thomson
 * Initial version.
 *
 *
 */

#ifndef SRVOPTSIPDOMAIN_H
#define SRVOPTSIPDOMAIN_H

#include <iostream>
#include "OptDomainLst.h"
#include "DUID.h"
#include "SmartPtr.h"

class TSrvOptSIPDomain : public TOptDomainLst
{
 public:
    TSrvOptSIPDomain(List(string) domains, TMsg* parent);
    TSrvOptSIPDomain(char *buf, int bufsize, TMsg* parent);
    bool doDuties();
    void setSrvDuid(SPtr<TDUID> duid);
private:
    SPtr<TDUID> SrvDUID;
};
#endif
