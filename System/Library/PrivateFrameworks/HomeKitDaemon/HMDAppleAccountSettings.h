//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDAppleAccountSettings : HMFObject
{
}

+ (_Bool)supportsCloudSettings;	// IMP=0x00100000009c2b5a
+ (id)sharedSettings;	// IMP=0x00100000009c2b2a
+ (id)logCategory;	// IMP=0x001000000034976f
- (void)updateHomeEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000009c2abb
- (void)synchronize;	// IMP=0x00000000009c2ab5
@property(readonly, getter=isEphemeral) _Bool ephemeral;
@property(readonly, getter=isManaged) _Bool managed;
@property(readonly, getter=isKeychainSyncEnabled) _Bool keychainSyncEnabled;
@property(readonly, getter=isHomeEnabled) _Bool homeEnabled;
- (id)attributeDescriptions;	// IMP=0x0000000000349579
@property(readonly, getter=isEducationMode) _Bool educationMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
