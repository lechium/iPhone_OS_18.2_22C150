//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDNotificationRegistryMediaPropertiesRequest
{
    NSUUID *_mediaProfileUUID;	// 32 = 0x20
    NSMutableSet *_mediaProperties;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000077e616
@property(retain) NSMutableSet *mediaProperties; // @synthesize mediaProperties=_mediaProperties;
@property(readonly, copy) NSUUID *mediaProfileUUID; // @synthesize mediaProfileUUID=_mediaProfileUUID;
- (id)attributeDescriptions;	// IMP=0x000000000077e413
- (id)initWithEnable:(_Bool)arg1 userID:(id)arg2 mediaProfileUUID:(id)arg3;	// IMP=0x000000000077e30c

@end

