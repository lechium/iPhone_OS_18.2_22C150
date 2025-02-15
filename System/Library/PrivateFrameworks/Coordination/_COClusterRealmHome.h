//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COClusterRealm.h"

@class NSUUID;

__attribute__((visibility("hidden")))
@interface _COClusterRealmHome : COClusterRealm
{
    NSUUID *_specificHomeUUID;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000000356d
+ (id)realmWithHomeKitHomeIdentifier:(id)arg1;	// IMP=0x0060000000002ea2
+ (id)realmForCurrent;	// IMP=0x0060000000002dcc
- (void).cxx_destruct;	// IMP=0x0000000000003610
@property(readonly, copy, nonatomic) NSUUID *specificHomeUUID; // @synthesize specificHomeUUID=_specificHomeUUID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003575
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000034d2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003437
- (void)activate:(CDUnknownBlockType)arg1;	// IMP=0x00000000000031c5
- (id)_identifierForGroupResult:(id)arg1;	// IMP=0x0000000000003148
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000307b
- (unsigned long long)hash;	// IMP=0x0000000000002fe0
- (id)description;	// IMP=0x0000000000002f31
- (id)_initWithPredicate:(id)arg1 forHome:(id)arg2;	// IMP=0x0000000000002e2a

@end

