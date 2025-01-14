//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHouseholdDataEventCounterGroupSpecifier
{
    NSUUID *_homeUUID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000c09f1a
+ (id)specifierWithGroupName:(id)arg1 homeUUID:(id)arg2 date:(id)arg3;	// IMP=0x0060000000c09e8a
- (void).cxx_destruct;	// IMP=0x0000000000c09e77
@property(readonly, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
- (id)description;	// IMP=0x0000000000c09da9
- (unsigned long long)hash;	// IMP=0x0000000000c09cf3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c09b30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000c09a95
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000c099fa
- (id)initWithGroupName:(id)arg1 homeUUID:(id)arg2 date:(id)arg3;	// IMP=0x0000000000c09978

@end

