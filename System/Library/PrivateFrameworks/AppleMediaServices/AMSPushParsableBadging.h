//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSPushParsableBadging : NSObject
{
}

+ (void)_performLegacyCallbackWithRequest:(id)arg1 payload:(id)arg2 config:(id)arg3 bag:(id)arg4 error:(id *)arg5;	// IMP=0x00100000004c0e34
+ (_Bool)shouldSkipAccountCheck;	// IMP=0x00100000004c0e2c
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;	// IMP=0x00100000004c0923

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
