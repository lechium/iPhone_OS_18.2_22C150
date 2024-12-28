//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileStoreUI/NSObject-Protocol.h>

@class SUUIDynamicBarAnimator;

@protocol SUUIDynamicBarAnimatorDelegate <NSObject>
- (_Bool)dynamicBarAnimator:(SUUIDynamicBarAnimator *)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (void)dynamicBarAnimatorDidUpdate:(SUUIDynamicBarAnimator *)arg1;

@optional
- (void)dynamicBarAnimatorWillLeaveSteadyState:(SUUIDynamicBarAnimator *)arg1;
- (void)dynamicBarAnimatorWillEnterSteadyState:(SUUIDynamicBarAnimator *)arg1;
@end
