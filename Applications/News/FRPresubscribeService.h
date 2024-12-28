//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCPurchaseController, FCSubscriptionController, FCTagController, FRNotificationManager, NSString;
@protocol FCNewsAppConfigurationManager;

@interface FRPresubscribeService : NSObject
{
    id <FCNewsAppConfigurationManager> _appConfigurationManager;	// 8 = 0x8
    FCTagController *_tagController;	// 16 = 0x10
    FCSubscriptionController *_subscriptionController;	// 24 = 0x18
    FCPurchaseController *_purchaseController;	// 32 = 0x20
    FRNotificationManager *_notificationManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000005ab44
@property(readonly, nonatomic) FRNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) FCPurchaseController *purchaseController; // @synthesize purchaseController=_purchaseController;
@property(readonly, nonatomic) FCSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(readonly, nonatomic) FCTagController *tagController; // @synthesize tagController=_tagController;
@property(readonly, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
- (void)_setHasUserBeenPresubscribed:(_Bool)arg1;	// IMP=0x001000000005aaba
- (_Bool)_hasUserBeenPresubscribed;	// IMP=0x001000000005aa68
- (void)_subscribeToFeedIDs:(id)arg1 preSubscribedNotificationsChannelIDs:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005a58c
- (void)subscriptionControllerDidResetToEmpty:(id)arg1;	// IMP=0x001000000005a522
- (void)presubscribeToChannelsIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000059fdd
- (id)initWithAppConfigurationManager:(id)arg1 tagController:(id)arg2 subscriptionController:(id)arg3 purchaseController:(id)arg4 notificationManager:(id)arg5;	// IMP=0x0010000000059ebb
- (id)init;	// IMP=0x0010000000059d68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
