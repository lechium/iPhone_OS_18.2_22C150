//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct UnitCount {
    int unitID;
    int exponent;
};

struct UnitCounts {
    struct UnitCount types[16];
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool letters[26];
    int count;
} CDStruct_e8805669;

typedef struct {
    unsigned long long w[2];
} CDStruct_bc361aee;

typedef struct {
    unsigned int :24;
    unsigned int :8;
    unsigned int _field1;
    unsigned int _field2;
} CDStruct_ef06dbdc;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
} CDStruct_a734b2e2;
