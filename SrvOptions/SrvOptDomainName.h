/*
 * Dibbler - a portable DHCPv6
 *
 * authors: Tomasz Mrugalski <thomson@klub.com.pl>
 *          Marek Senderski <msend@o2.pl>
 *
 * released under GNU GPL v2 only licence
 *
 * $Id: SrvOptDomainName.h,v 1.4 2008-08-29 00:07:36 thomson Exp $
 *
 * $Log: not supported by cvs2svn $
 * Revision 1.3  2004-10-25 20:45:54  thomson
 * Option support, parsers rewritten. ClntIfaceMgr now handles options.
 *
 */

#ifndef SRVOPTDOMAINNAME_H
#define SRVOPTDOMAINNAME_H

#include "OptDomainLst.h"

class TSrvOptDomainName : public TOptDomainLst
{
public:
    TSrvOptDomainName(List(string) domains, TMsg* parent);
    TSrvOptDomainName(char *buf, int bufsize, TMsg* parent);
    bool doDuties();
};
#endif
