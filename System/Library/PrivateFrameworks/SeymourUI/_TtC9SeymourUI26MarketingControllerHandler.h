//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI26MarketingControllerHandler : NSObject
{
    MISSING_TYPE *actionHandler;	// 8 = 0x8
    MISSING_TYPE *eventHub;	// 24 = 0x18
    MISSING_TYPE *impressionConsumer;	// 40 = 0x28
    MISSING_TYPE *marketingHostedContentCoordinator;	// 80 = 0x50
    MISSING_TYPE *metricPage;	// 0 = 0x0
    MISSING_TYPE *subscriptionToken;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000006f4230
- (id)init;	// IMP=0x00000000006f41d0
- (void)messageViewController:(id)arg1 enqueueEventWithFields:(id)arg2 inTopic:(id)arg3;	// IMP=0x00000000006f4ac0
- (void)messageViewControllerDidDismiss:(id)arg1;	// IMP=0x00000000006f4ab0
- (void)messageViewController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000006f4aa0
- (void)messageViewController:(id)arg1 didUpdateSize:(struct CGSize)arg2;	// IMP=0x00000000006f4a90
- (void)messageViewController:(id)arg1 didSelectActionWithDialogResult:(id)arg2;	// IMP=0x00000000006f4a20
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;	// IMP=0x00000000006f4b80

@end
