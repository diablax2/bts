Shared Libraries
================

## BTSconsensus

The purpose of this library is to make the verification functionality that is critical to BTS's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `BTSconsensus.h` located in  `src/script/BTSconsensus.h`.

#### Version

`BTSconsensus_version` returns an `unsigned int` with the API version *(currently at an experimental `0`)*.

#### Script Validation

`BTSconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `BTSconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `BTSconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `BTSconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/BTS/bips/blob/master/bip-0016.mediawiki)) subscripts
- `BTSconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/BTS/bips/blob/master/bip-0066.mediawiki)) compliance

##### Errors
- `BTSconsensus_ERR_OK` - No errors with input parameters *(see the return value of `BTSconsensus_verify_script` for the verification status)*
- `BTSconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `BTSconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `BTSconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`

### Example Implementations
- [NBTS](https://github.com/NicolasDorier/NBTS/blob/master/NBTS/Script.cs#L814) (.NET Bindings)
- [node-libBTSconsensus](https://github.com/bitpay/node-libBTSconsensus) (Node.js Bindings)
- [java-libBTSconsensus](https://github.com/dexX7/java-libBTSconsensus) (Java Bindings)
- [BTSconsensus-php](https://github.com/Bit-Wasp/BTSconsensus-php) (PHP Bindings)
