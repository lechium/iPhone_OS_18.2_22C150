//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CPApplicationMonitor : NSObject
{
    MISSING_TYPE *appPolicyManager;	// 8 = 0x8
    MISSING_TYPE *applicationController;	// 16 = 0x10
    MISSING_TYPE *queue;	// 56 = 0x38
    MISSING_TYPE *appVisibilityMonitor;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000015e9a0
- (id)init;	// IMP=0x000000000015ed20
- (void)conversationManager:(id)arg1 activityAuthorizationChangedForBundleIdentifier:(id)arg2;	// IMP=0x000000000015ec40
- (void)conversationManager:(id)arg1 conversationChanged:(id)arg2;	// IMP=0x000000000015ebd0
- (void)dealloc;	// IMP=0x000000000015e8f0
- (id)initWithApplicationController:(id)arg1 queue:(id)arg2;	// IMP=0x000000000015e670

@end

