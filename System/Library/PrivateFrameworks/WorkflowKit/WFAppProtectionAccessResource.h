//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFAccessResource.h"

@class MISSING_TYPE, NSString;
@protocol WFUserInterfaceHost;

__attribute__((visibility("hidden")))
@interface WFAppProtectionAccessResource : WFAccessResource
{
    MISSING_TYPE *associatedAppBundleIdentifier;	// 8 = 0x8
    MISSING_TYPE *apApp;	// 24 = 0x18
    MISSING_TYPE *observers;	// 32 = 0x20
    MISSING_TYPE *subjectSubscription;	// 40 = 0x28
}

+ (_Bool)isSystemResource;	// IMP=0x00100000001d8eaa
- (void).cxx_destruct;	// IMP=0x00000000001d9b96
- (id)init;	// IMP=0x00000000001d9cb1
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000001d9c5d
- (id)initWithDefinition:(id)arg1 enableDistributedNotifications:(_Bool)arg2;	// IMP=0x00000000001d9c09
- (void)dealloc;	// IMP=0x00000000001d9b79
- (void)makeAvailableWithUserInterface:(id <WFUserInterfaceHost>)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;	// IMP=0x00000000001d9684
- (id)localizedErrorRecoveryOptionsForStatus:(unsigned long long)arg1;	// IMP=0x00000000001d94ef
- (id)localizedErrorReasonForStatus:(unsigned long long)arg1;	// IMP=0x00000000001d9369
@property(nonatomic, readonly) unsigned long long status;
@property(nonatomic, readonly) NSString *associatedAppIdentifier;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;	// IMP=0x00000000001d8c38
- (void)appProtectionSubjectsChanged:(id)arg1 forSubscription:(id)arg2;	// IMP=0x00000000001d8bc3
- (id)initWithAssociatedAppBundleIdentifier:(id)arg1;	// IMP=0x00000000001d89fe

@end

