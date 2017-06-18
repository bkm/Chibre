#ifndef DEFS_H
#define DEFS_H

#define CARREAU 0x0
#define PIQUE   0x1
#define COEUR   0x2
#define TREFLE  0x3

typedef unsigned char Card;

typedef unsigned char Color;
typedef unsigned char Value;

static inline Card createCard(Color c, Value v)
{
        return c << 4| v;
}

static inline Color getColor(Card c)
{
        return c >> 4;
}

static inline Value getValue(Card c)
{
    return c & 0xf;
}

#endif
