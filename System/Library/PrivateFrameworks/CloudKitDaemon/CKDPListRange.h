//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPListPosition;

@interface CKDPListRange : PBCodable
{
    CKDPListPosition *_left;	// 8 = 0x8
    CKDPListPosition *_right;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002c9e9c
@property(retain, nonatomic) CKDPListPosition *right; // @synthesize right=_right;
@property(retain, nonatomic) CKDPListPosition *left; // @synthesize left=_left;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002c9dc3
- (unsigned long long)hash;	// IMP=0x00000000002c9d76
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002c9cbe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002c9c20
- (void)copyTo:(id)arg1;	// IMP=0x00000000002c9bbd
- (void)writeTo:(id)arg1;	// IMP=0x00000000002c9b60
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002c9b53
- (id)dictionaryRepresentation;	// IMP=0x00000000002c98c9
- (id)description;	// IMP=0x00000000002c981a
@property(readonly, nonatomic) _Bool hasRight;
@property(readonly, nonatomic) _Bool hasLeft;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;	// IMP=0x00000000001f647c

@end
