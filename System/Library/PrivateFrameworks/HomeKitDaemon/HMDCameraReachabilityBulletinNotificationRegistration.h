//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCameraReachabilityBulletinNotificationRegistration
{
    NSUUID *_accessoryUUID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000a22180
+ (id)type;	// IMP=0x0010000000a22173
- (void).cxx_destruct;	// IMP=0x0000000000a22160
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)attributeDescriptions;	// IMP=0x0000000000a2202b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a21e44
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a21da9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a21d9e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a21c9e
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x0000000000a21bd4
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000a21a87
- (id)initWithAccessoryUUID:(id)arg1 conditions:(id)arg2;	// IMP=0x0000000000a219d7

@end

