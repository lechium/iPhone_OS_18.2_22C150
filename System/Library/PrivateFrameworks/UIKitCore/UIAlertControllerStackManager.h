//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIScene;

__attribute__((visibility("hidden")))
@interface UIAlertControllerStackManager : NSObject
{
    NSMutableArray *_alertControllerStack;	// 8 = 0x8
    NSMutableArray *_hiddenAlertControllers;	// 16 = 0x10
    UIScene *_scene;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000337080
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (long long)_alertControllerStackCount;	// IMP=0x0000000000337059
- (_Bool)_alertControllerShouldBeTrackedInStack:(id)arg1;	// IMP=0x0000000000336f75
- (void)_didHideAlertController:(id)arg1;	// IMP=0x0000000000336eaf
- (void)_willHideAlertController:(id)arg1;	// IMP=0x0000000000336ea9
- (void)_willShowAlertController:(id)arg1;	// IMP=0x0000000000336de3
- (id)_topAlertControllerInStack;	// IMP=0x0000000000336dcd
- (void)_removeAlertControllerFromStack:(id)arg1;	// IMP=0x0000000000336d08
- (void)_addAlertControllerToStack:(id)arg1;	// IMP=0x0000000000336c43
- (void)_showHiddenStackedAlertControllers;	// IMP=0x0000000000336998
- (void)_hideStackedAlertControllers;	// IMP=0x000000000033672d
- (void)_alertControllerDidDisappear:(id)arg1;	// IMP=0x00000000003366ca
- (void)_alertControllerWillDisappear:(id)arg1;	// IMP=0x00000000003365d7
- (void)_alertControllerDidAppear:(id)arg1;	// IMP=0x00000000003365d1
- (void)_alertControllerWillAppear:(id)arg1;	// IMP=0x00000000003364c6
- (id)initWithScene:(id)arg1;	// IMP=0x0000000000336429

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

