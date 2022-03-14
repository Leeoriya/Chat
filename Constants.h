#ifndef CONSTANTS_HEADER
#define CONSTANTS_HEADER

#include <vector>
#include <aes.h>

typedef std::vector<unsigned char> Bytes;

static const int CLIENT_VERSION = 2;

// Selection input options of the user
static const int SEL_REG = 10;
static const int SEL_GET_ULIST = 20;
static const int SEL_GET_PUB_KEY = 30;
static const int SEL_GET_MSG = 40;
static const int SEL_SEND_MSG = 50;
static const int SEL_SEND_FILE = 53; //Bonus
static const int SEL_GET_SYM_KEY = 51;
static const int SEL_SEND_SYM_KEY = 52;
static const int SEL_EXIT_CLIENT = 0;
static const int INVALID_INPUT = -1;

// Request codes
static const unsigned char REQ_CODE_REQ = 1000;
static const unsigned char REQ_CODE_GET_ULIST = 1001;
static const unsigned char REQ_CODE_GET_PUBKEY = 1002;
static const unsigned char REQ_CODE_SEND_MSG = 1003;
static const unsigned char REQ_CODE_GET_MSG = 1004;

// Msg type codes
static const unsigned char MSG_TYPE_GET_SYM_KEY = 1;
static const unsigned char MSG_TYPE_SEND_SYM_KEY = 2;
static const unsigned char MSG_TYPE_SEND_MSG = 3;
static const unsigned char MSG_TYPE_SEND_FILE = 4;

// Response codes
static const int RES_CODE_REG_SUC = 2000;
static const int RES_CODE_ULIST_RES = 2001;
static const int RES_CODE_PUB_KEY = 2002;
static const int RES_CODE_MSG_SENT = 2003;
static const int RES_CODE_RECEIVE_MSG = 2004;
static const int RES_CODE_ERROR = 9000;

// Byte sizes of fields from the protocol
static const int REQ_HEADER_SIZE = 22;
static const int MAX_USERNAME_LEN = 255;
static const int ID_SIZE = 16;
static const int ID_HEX_SIZE = 32;		// twice the ID SIZE
static const int RESPONSE_HEADER_SIZE = 7;

// Encryption keys constants
static const int PUB_KEY_SIZE = 160;
static const int PUB_KEY_BITS = 1024;
static const int PRIV_KEY_BITS = 128;
static const int SYM_KEY_SIZE = CryptoPP::AES::DEFAULT_KEYLENGTH;

// Info file name
static const char* MY_INFO_FILE = "me.info";

// Messages required by assignment
static const char* GET_SYM_KEY_MSG = "Request for symmetric key";
static const char* SEND_SYM_KEY_MSG = "symmetric key received";
static const char* CANT_DECRYPT_MSG = "can't decrypt message";

static const int RANDOM_FILENAME_LEN = 8;
static const int LITTLE_ENDIAN = 0;
static const int BIG_ENDIAN = 1;

static const int BUFFER_SIZE = 1024;


#endif#pragma once
