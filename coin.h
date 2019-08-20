// Copyright (c) 2018 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.

#ifndef __INCLUDED_COIN_H__
#define __INCLUDED_COIN_H__

#include <string>

static const std::string mainnet_seeds[] = {"dnsseed.meroexplorer.com", "45.220.58.41"};

static const std::string testnet_seeds[] = {""};

static const int mainnet_port = 14550;
static const int testnet_port = 15550;

static unsigned char pchMessageStart[4] = { 0x5e, 0xa2, 0x8f, 0x5f };
static unsigned char pchMessageStart_testnet[4] = { 0x4a, 0xcd, 0x5e, 0x78 };

#endif // __INCLUDED_COIN_H__
