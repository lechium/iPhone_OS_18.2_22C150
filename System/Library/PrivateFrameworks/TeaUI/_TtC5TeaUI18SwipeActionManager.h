//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC5TeaUI18SwipeActionManager : NSObject
{
    MISSING_TYPE *panGestureRecognizer;	// 8 = 0x8
    MISSING_TYPE *tapGestureRecognizer;	// 16 = 0x10
    MISSING_TYPE *deferGroup;	// 24 = 0x18
    MISSING_TYPE *sceneStateManager;	// 32 = 0x20
    MISSING_TYPE *collectionView;	// 72 = 0x48
    MISSING_TYPE *isSwipeActionEnabled;	// 80 = 0x50
    MISSING_TYPE *dataSource;	// 88 = 0x58
    MISSING_TYPE *delegate;	// 104 = 0x68
    MISSING_TYPE *swipeState;	// 0 = 0x0
    MISSING_TYPE *rubberbandFactor;	// 0 = 0x0
    MISSING_TYPE *maximumSwipeVelocity;	// 0 = 0x0
    MISSING_TYPE *springStiffness;	// 0 = 0x0
    MISSING_TYPE *snapOpenPercentage;	// 0 = 0x0
    MISSING_TYPE *fadeDuration;	// 0 = 0x0
    MISSING_TYPE *fadeOffset;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000002b39df
- (id)init;	// IMP=0x00000000002b39a9
- (void)handleTapGestureWithRecognizer:(id)arg1;	// IMP=0x00000000002b18e8
- (void)handlePanGestureWithRecognizer:(id)arg1;	// IMP=0x00000000002b16e6
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000002b0288

@end
