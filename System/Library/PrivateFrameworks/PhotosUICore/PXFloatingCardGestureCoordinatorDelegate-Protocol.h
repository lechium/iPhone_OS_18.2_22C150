//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXFloatingCardGestureCoordinator, PXFloatingCardViewController;

@protocol PXFloatingCardGestureCoordinatorDelegate <NSObject>
- (double)availableHeightForCardViewController:(PXFloatingCardViewController *)arg1;

@optional
- (void)cardViewController:(PXFloatingCardViewController *)arg1 didUpdateHeight:(double)arg2;
- (void)cardViewController:(PXFloatingCardViewController *)arg1 didUpdatePosition:(unsigned long long)arg2;
- (void)gestureCoordinatorDidBeginInteraction:(PXFloatingCardGestureCoordinator *)arg1;
@end
