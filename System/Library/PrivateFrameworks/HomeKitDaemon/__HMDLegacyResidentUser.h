//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDResidentUser;

__attribute__((visibility("hidden")))
@interface __HMDLegacyResidentUser
{
    HMDResidentUser *_residentUser;	// 408 = 0x198
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000d48820
+ (void)initialize;	// IMP=0x0060000000d487c4
- (void).cxx_destruct;	// IMP=0x0000000000d487b1
@property(readonly, nonatomic) HMDResidentUser *residentUser; // @synthesize residentUser=_residentUser;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000d48737
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000d48729
- (_Bool)isRemoteGateway;	// IMP=0x0000000000d48721
- (id)initWithResidentUser:(id)arg1;	// IMP=0x0000000000d485e6

@end

