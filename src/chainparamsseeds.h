#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the bitcoin network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a BIP155 serialized (networkID, addr, port) tuple.
 */
static const uint8_t chainparams_seed_main[] = {
    0x01,0x04,0x4d,0x48,0x17,0x7b,0x13,0xf7,
    0x01,0x04,0x4d,0x48,0x17,0x7c,0x13,0xf7,
    0x01,0x04,0x4d,0x48,0x17,0x7d,0x13,0xf7,
    0x01,0x04,0x5b,0x86,0xf7,0xca,0x13,0xf7,
    0x01,0x04,0x2e,0x04,0x72,0x6f,0x13,0xf7,
};

static const uint8_t chainparams_seed_test[] = {
    0x01,0x04,0x4d,0x48,0x17,0x7b,0x14,0x66,
    0x01,0x04,0x4d,0x48,0x17,0x7c,0x14,0x66,
    0x01,0x04,0x4d,0x48,0x17,0x7d,0x14,0x66,
    0x01,0x04,0x5b,0x86,0xf7,0xca,0x14,0x66,
    0x01,0x04,0x2e,0x04,0x72,0x6f,0x14,0x66,
};
#endif // BITCOIN_CHAINPARAMSSEEDS_H
