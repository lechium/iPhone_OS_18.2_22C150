//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class FCCKPRecord;

__attribute__((visibility("hidden")))
@interface FCCKPOplockFailure : PBCodable
{
    FCCKPRecord *_recordForOplockFailure;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001a626b
- (unsigned long long)hash;	// IMP=0x00000000001a624e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a61be
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a6146
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a6122
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a6115
- (id)dictionaryRepresentation;	// IMP=0x00000000001a5ee1
- (id)description;	// IMP=0x00000000001a5e32

@end

