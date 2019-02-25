// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BTS_QT_BTSADDRESSVALIDATOR_H
#define BTS_QT_BTSADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BTSAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BTSAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** BTS address widget validator, checks for a valid BTS address.
 */
class BTSAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BTSAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BTS_QT_BTSADDRESSVALIDATOR_H
