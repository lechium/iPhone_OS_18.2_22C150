//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
} CDStruct_6238c8e0;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    long long _field1;
    id _field2;
    id _field3;
} CDStruct_1b4a36b4;

typedef struct CDStruct_183601bc;

typedef struct {
    unsigned short _field1;
    unsigned int _field2;
    double _field3;
    union {
        struct {
            id _field1;
            CDStruct_183601bc *_field2;
            unsigned long long _field3;
        } _field1;
        struct {
            unsigned long long _field1;
        } _field2;
        unsigned char _field3[48];
    } _field4;
} CDStruct_2fbfc061;

