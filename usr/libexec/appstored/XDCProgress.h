//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface XDCProgress : PBCodable
{
    long long _completedUnitCount;	// 8 = 0x8
    long long _totalUnitCount;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000171c08
- (unsigned long long)hash;	// IMP=0x0010000000171bba
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000171b08
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000171a72
- (void)writeTo:(id)arg1;	// IMP=0x00100000001719fb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001719ee
- (id)dictionaryRepresentation;	// IMP=0x0010000000171699
- (id)description;	// IMP=0x00100000001715ea

@end
