//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7MusicUI29SubscriptionPurchaseViewModel : NSObject
{
    MISSING_TYPE *_state;	// 0 = 0x0
    MISSING_TYPE *buyParams;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *bag;	// 1887007839 = 0x7079745f
    MISSING_TYPE *objectGraph;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *actionDispatcher;	// 0 = 0x0
    MISSING_TYPE *account;	// 11900960 = 0xb59820
    MISSING_TYPE *metricsOverlay;	// 6088 = 0x17c8
    MISSING_TYPE *presentingViewController;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000663ac9
- (id)init;	// IMP=0x0000000000663a93
- (void)purchase:(id)arg1 handleEngagementRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000664673
- (void)purchase:(id)arg1 handleDialogRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000066428b
- (void)purchase:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000663ea2

@end

