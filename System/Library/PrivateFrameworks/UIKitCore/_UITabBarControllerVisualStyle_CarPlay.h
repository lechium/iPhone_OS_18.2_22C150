//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UITabBarControllerVisualStyle_CarPlay
{
    UITapGestureRecognizer *_nudgeLeftGestureRecognizer;	// 8 = 0x8
    UITapGestureRecognizer *_nudgeRightGestureRecognizer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000017ad828
- (id)defaultAnimatorForFromViewController:(id)arg1 toViewController:(id)arg2;	// IMP=0x00000000017ad820
- (struct CGRect)adjustedTabBarFrame:(struct CGRect)arg1;	// IMP=0x00000000017ad756
- (void)_performRightGesture:(id)arg1;	// IMP=0x00000000017ad714
- (void)_performLeftGesture:(id)arg1;	// IMP=0x00000000017ad6d2
- (_Bool)shouldSuppressPresses:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000017ad6ac
- (void)updateGestureRecognizers;	// IMP=0x00000000017ad496
- (_Bool)updatesTabBarFocusHeadingOnChange;	// IMP=0x00000000017ad48e
- (_Bool)supportsFocusGestures;	// IMP=0x00000000017ad404
- (unsigned long long)defaultMaxItems;	// IMP=0x00000000017ad3f9
- (long long)tabBarPosition;	// IMP=0x00000000017ad3ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
