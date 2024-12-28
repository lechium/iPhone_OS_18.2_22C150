//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIScrollView, UIView, _UIFindNavigatorViewController;

__attribute__((visibility("hidden")))
@interface _UIFindNavigatorHarness : NSObject
{
    _Bool _isHoistingFindNavigator;	// 8 = 0x8
    _Bool _interactionViewIsWebView;	// 9 = 0x9
    UIView *_interactionView;	// 16 = 0x10
    UIView *_hostView;	// 24 = 0x18
    UIScrollView *_hostScrollView;	// 32 = 0x20
    _UIFindNavigatorViewController *_findNavigatorViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000011c275e
@property(retain, nonatomic) _UIFindNavigatorViewController *findNavigatorViewController; // @synthesize findNavigatorViewController=_findNavigatorViewController;
@property(nonatomic) __weak UIScrollView *hostScrollView; // @synthesize hostScrollView=_hostScrollView;
@property(nonatomic) __weak UIView *hostView; // @synthesize hostView=_hostView;
@property(nonatomic) __weak UIView *interactionView; // @synthesize interactionView=_interactionView;
- (void)findNavigatorViewControllerViewDidChangeIntrinsicContentSize:(id)arg1;	// IMP=0x00000000011c26b1
- (void)findNavigatorViewControllerDidRequestDismissal:(id)arg1;	// IMP=0x00000000011c269a
- (_Bool)findNavigatorShouldDismissOnResponderChange:(id)arg1;	// IMP=0x00000000011c2692
- (void)dismissFindNavigatorEndingActiveSession:(_Bool)arg1;	// IMP=0x00000000011c2679
- (void)presentFindNavigatorWithFindSession:(id)arg1 showingReplace:(_Bool)arg2 idiom:(long long)arg3;	// IMP=0x00000000011c2582
@property(readonly, nonatomic, getter=isFindNavigatorVisible) _Bool findNavigatorVisible;
- (void)_sendPlacementUpdate;	// IMP=0x00000000011c245f
- (void)_layoutFindNavigator;	// IMP=0x00000000011c21a8
- (void)_geometryChanged:(const CDStruct_6f49ea1d *)arg1 forAncestor:(id)arg2;	// IMP=0x00000000011c2196
- (void)endHoistingFindNavigator:(_Bool)arg1 endingActiveSession:(_Bool)arg2;	// IMP=0x00000000011c1c71
- (void)endHoistingFindNavigator:(_Bool)arg1;	// IMP=0x00000000011c1c5a
- (void)beginHoistingFindNavigator:(_Bool)arg1;	// IMP=0x00000000011c18e2
- (void)_adjustHostViewScrollOffsetToTopIfSupported;	// IMP=0x00000000011c1842
- (_Bool)_shouldAdjustHostViewContentOffsets;	// IMP=0x00000000011c178a
- (id)_findNavigatorView;	// IMP=0x00000000011c1774
- (void)dealloc;	// IMP=0x00000000011c16d6
- (id)init;	// IMP=0x00000000011c1653

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
