#ifndef PKCS11_CRYPTOLIB_H
#define PKCS11_CRYPTOLIB_H


#include <stdint.h>
#include <string.h>

#define CK_PTR *
#define CK_DEFINE_FUNCTION(returnType, name) returnType name
#define CK_DECLARE_FUNCTION(returnType, name) returnType name
#define CK_DECLARE_FUNCTION_POINTER(returnType, name) returnType (* name)
#define CK_CALLBACK_FUNCTION(returnType, name) returnType (* name)

#ifndef NULL_PTR
#define NULL_PTR 0
#endif

#define IGNORE(P) (void)(P)

#define PKCS11_CRYPTOLIB_CK_INFO_MANUFACTURER_ID "InterGalaxy"
#define PKCS11_CRYPTOLIB_CK_INFO_LIBRARY_DESCRIPTION "PKCS#11 interface"
#define PKCS11_CRYPTOLIB_CK_INFO_LIBRARY_VERSION_MAJOR 0x02
#define PKCS11_CRYPTOLIB_CK_INFO_LIBRARY_VERSION_MINOR 0x28

#define PKCS11_CRYPTOLIB_CK_SLOT_ID 1
#define PKCS11_CRYPTOLIB_CK_SLOT_INFO_SLOT_DESCRIPTION "CryptoKey slot"
#define PKCS11_CRYPTOLIB_CK_SLOT_INFO_MANUFACTURER_ID "InterGalaxy"
#define PKCS11_CRYPTOLIB_CK_SESSION_ID 1

#define CKF_SO_PUK_INITIALIZED    0x00000010UL  /* normal user's PIN is set */


#define PKCS11_MOCK_CK_SESSION_ID 1

#define PKCS11_MOCK_CK_OBJECT_CKA_LABEL "Pkcs11Interop"
#define PKCS11_MOCK_CK_OBJECT_CKA_VALUE "Hello world!"
#define PKCS11_MOCK_CK_OBJECT_SIZE 256
#define PKCS11_MOCK_CK_OBJECT_HANDLE_DATA 1
#define PKCS11_MOCK_CK_OBJECT_HANDLE_SECRET_KEY 2
#define PKCS11_MOCK_CK_OBJECT_HANDLE_PUBLIC_KEY 3
#define PKCS11_MOCK_CK_OBJECT_HANDLE_PRIVATE_KEY 4

#define PKCS11_MOCK_CK_TOKEN_INFO_LABEL "Pkcs11Interop"
#define PKCS11_MOCK_CK_TOKEN_INFO_MANUFACTURER_ID "Pkcs11Interop Project"
#define PKCS11_MOCK_CK_TOKEN_INFO_MODEL "Mock token"
#define PKCS11_MOCK_CK_TOKEN_INFO_SERIAL_NUMBER "0123456789A"
#define PKCS11_MOCK_CK_TOKEN_INFO_MAX_PIN_LEN 256
#define PKCS11_MOCK_CK_TOKEN_INFO_MIN_PIN_LEN 4


typedef enum
{
	PKCS11_CRYPTOLIB_CK_OPERATION_NONE,
	PKCS11_CRYPTOLIB_CK_OPERATION_FIND,
	PKCS11_CRYPTOLIB_CK_OPERATION_ENCRYPT,
	PKCS11_CRYPTOLIB_CK_OPERATION_DECRYPT,
	PKCS11_CRYPTOLIB_CK_OPERATION_DIGEST,
	PKCS11_CRYPTOLIB_CK_OPERATION_SIGN,
	PKCS11_CRYPTOLIB_CK_OPERATION_SIGN_RECOVER,
	PKCS11_CRYPTOLIB_CK_OPERATION_VERIFY,
	PKCS11_CRYPTOLIB_CK_OPERATION_VERIFY_RECOVER,
	PKCS11_CRYPTOLIB_CK_OPERATION_DIGEST_ENCRYPT,
	PKCS11_CRYPTOLIB_CK_OPERATION_DECRYPT_DIGEST,
	PKCS11_CRYPTOLIB_CK_OPERATION_SIGN_ENCRYPT,
	PKCS11_CRYPTOLIB_CK_OPERATION_DECRYPT_VERIFY
}
PKCS11_CRYPTOLIB_CK_OPERATION;

#include "pkcs11.h"

#endif /* PKCS11_CRYPTOLIB_H */