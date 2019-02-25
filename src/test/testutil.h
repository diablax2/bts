// Copyright (c) 2009-2016 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

/**
 * Utility functions shared by unit tests
 */
#ifndef BTS_TEST_TESTUTIL_H
#define BTS_TEST_TESTUTIL_H

#include <boost/filesystem/path.hpp>

boost::filesystem::path GetTempPath();

#endif // BTS_TEST_TESTUTIL_H