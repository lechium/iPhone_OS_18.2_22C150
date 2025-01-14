//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFSiriUserNotificationSummary, NSString, UNNotification;

@interface AFSiriUserNotificationRequest : NSObject
{
    UNNotification *_notification;	// 8 = 0x8
    NSString *_sourceAppId;	// 16 = 0x10
    long long _platform;	// 24 = 0x18
    long long _summaryDecision;	// 32 = 0x20
    AFSiriUserNotificationSummary *_summary;	// 40 = 0x28
}

+ (_Bool)supportedForApplicationWithBundleId:(id)arg1;	// IMP=0x002000000024e9a4
+ (_Bool)supportedOnPlatform;	// IMP=0x001000000024e959
+ (_Bool)canBeHandled;	// IMP=0x001000000024e90e
- (void).cxx_destruct;	// IMP=0x002000000024e783
- (void)deliverSummary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000024e1f4
- (void)withdrawalRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000024dddf
- (void)deactivateRequestForReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000024d838
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000024d214
- (id)initWithUserNotification:(id)arg1 sourceAppId:(id)arg2 platform:(long long)arg3 summaryDecision:(long long)arg4 summary:(id)arg5;	// IMP=0x001000000024d142
- (id)initWithUserNotification:(id)arg1 sourceAppId:(id)arg2 platform:(long long)arg3 summaryDecision:(long long)arg4;	// IMP=0x001000000024d11f
- (id)initWithUserNotification:(id)arg1 sourceAppId:(id)arg2 platform:(long long)arg3;	// IMP=0x001000000024d0f9
- (id)initWithUserNotification:(id)arg1 sourceAppId:(id)arg2;	// IMP=0x001000000024d0e1

@end

