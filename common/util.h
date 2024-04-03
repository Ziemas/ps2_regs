#ifndef UTIL_H_
#define UTIL_H_

#define BIT(x) (1ULL << (x))
#define GENMASK(msb, lsb) ((BIT((msb + 1) - (lsb)) - 1) << (lsb))
#define _FIELD_LSB(field) ((field) & ~(field - 1))
#define FIELD_PREP(field, val) (((val) * (_FIELD_LSB(field))) & (field))
#define FIELD_GET(field, val) (((val) & (field)) / _FIELD_LSB(field))

#endif // UTIL_H_
