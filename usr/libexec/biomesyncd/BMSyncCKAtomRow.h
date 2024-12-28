//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncCRDTLocationRow, CKAtomReference, CKDistributedTimestamp, NSData, NSString;

@interface BMSyncCKAtomRow : NSObject
{
    BMSyncCRDTLocationRow *_location;	// 8 = 0x8
    CKDistributedTimestamp *_timestamp;	// 16 = 0x10
    BMSyncCRDTLocationRow *_referenceLocation;	// 24 = 0x18
    CKAtomReference *_causalReference;	// 32 = 0x20
    NSString *_segmentName;	// 40 = 0x28
    unsigned long long _segmentOffset;	// 48 = 0x30
    unsigned long long _type;	// 56 = 0x38
    long long _valueVersion;	// 64 = 0x40
    NSData *_valueData;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000002181d
@property(readonly, nonatomic) NSData *valueData; // @synthesize valueData=_valueData;
@property(readonly, nonatomic) long long valueVersion; // @synthesize valueVersion=_valueVersion;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long segmentOffset; // @synthesize segmentOffset=_segmentOffset;
@property(readonly, nonatomic) NSString *segmentName; // @synthesize segmentName=_segmentName;
@property(readonly, nonatomic) CKAtomReference *causalReference; // @synthesize causalReference=_causalReference;
@property(readonly, nonatomic) BMSyncCRDTLocationRow *referenceLocation; // @synthesize referenceLocation=_referenceLocation;
@property(readonly, nonatomic) CKDistributedTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) BMSyncCRDTLocationRow *location; // @synthesize location=_location;
- (id)description;	// IMP=0x0010000000021699
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002168e
- (unsigned long long)hash;	// IMP=0x001000000002164f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000215ba
- (id)initWithLocation:(id)arg1 timestamp:(id)arg2 referenceLocation:(id)arg3 causalReference:(id)arg4 type:(unsigned long long)arg5 valueVersion:(long long)arg6 valueData:(id)arg7;	// IMP=0x00100000000213b2
- (id)initWithLocation:(id)arg1 timestamp:(id)arg2 referenceLocation:(id)arg3 causalReference:(id)arg4 type:(unsigned long long)arg5 segmentName:(id)arg6 segmentOffset:(unsigned long long)arg7;	// IMP=0x00100000000211aa
- (id)initWithFMResultSet:(id)arg1;	// IMP=0x0010000000021871

@end
