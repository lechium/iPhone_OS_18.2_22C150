//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE;

@interface PSSubscriptionUpdate : PBCodable
{
    int _subscriptionsStatus;	// 8 = 0x8
    struct {
        unsigned int subscriptionsStatus:1;
    } _has;	// 12 = 0xc
}

- (MISSING_TYPE *)mergeFrom: /* Error: Ran out of types for this method. */;	// IMP=0x0020000000084631
- (unsigned long long)hash;	// IMP=0x0010000000084606
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000084574
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000084512
- (void)copyTo:(id)arg1;	// IMP=0x00100000000844ee
- (void)writeTo:(id)arg1;	// IMP=0x00100000000844c3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000844b6
- (id)dictionaryRepresentation;	// IMP=0x001000000008425c
- (id)description;	// IMP=0x00100000000841ad
- (int)StringAsSubscriptionsStatus:(id)arg1;	// IMP=0x001000000008418e
- (id)subscriptionsStatusAsString:(int)arg1;	// IMP=0x001000000008414a
@property(nonatomic) _Bool hasSubscriptionsStatus;
@property(nonatomic) int subscriptionsStatus; // @synthesize subscriptionsStatus=_subscriptionsStatus;

@end
