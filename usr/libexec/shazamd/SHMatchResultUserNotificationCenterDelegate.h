//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHMediaItemPresenter;

@interface SHMatchResultUserNotificationCenterDelegate : NSObject
{
    SHMediaItemPresenter *_mediaItemPresenter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000003b15
@property(retain, nonatomic) SHMediaItemPresenter *mediaItemPresenter; // @synthesize mediaItemPresenter=_mediaItemPresenter;
- (void)sendAnalyticsEvent:(id)arg1 forBundleIdentifier:(id)arg2 actionName:(id)arg3;	// IMP=0x00100000000039ff
- (void)handleAppleMusicActionWithPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003753
- (void)handleDefaultActionWithPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003399
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002f22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
