//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface HMDMatterBulletinNotificationRegistration
{
    NSArray *_matterPaths;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000769fd7
+ (id)type;	// IMP=0x0010000000769fca
- (void).cxx_destruct;	// IMP=0x0000000000769b01
@property(readonly, copy) NSArray *matterPaths; // @synthesize matterPaths=_matterPaths;
- (id)attributeDescriptions;	// IMP=0x00000000007699cc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007697e5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000076974a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000076973f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000076963f
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x000000000076956e
- (id)initWithDictionary:(id)arg1 withHome:(id)arg2;	// IMP=0x00000000007693af
- (id)initWithMatterPaths:(id)arg1 conditions:(id)arg2;	// IMP=0x000000000076930b

@end
