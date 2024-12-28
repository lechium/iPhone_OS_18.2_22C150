//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIToolbar.h>

@class NSArray, NSMutableSet, NSString, PUToolbarViewModel, UIView;

__attribute__((visibility("hidden")))
@interface PUExtendedToolbar : UIToolbar
{
    _Bool __isUpdating;	// 8 = 0x8
    _Bool __needsUpdateToolbarItems;	// 9 = 0x9
    _Bool __needsUpdateAccessoryView;	// 10 = 0xa
    _Bool __needsUpdateAccessoryViewTopOutset;	// 11 = 0xb
    _Bool __needsUpdateContainedToolbar;	// 12 = 0xc
    _Bool __needsUpdateAccessoryViewContainer;	// 13 = 0xd
    PUToolbarViewModel *_toolbarViewModel;	// 16 = 0x10
    long long __numberOfNestedChanges;	// 24 = 0x18
    NSArray *__toolbarItems;	// 32 = 0x20
    UIView *__accessoryView;	// 40 = 0x28
    double __containedToolbarHeight;	// 48 = 0x30
    double __accessoryViewTopOutset;	// 56 = 0x38
    UIToolbar *__containedToolbar;	// 64 = 0x40
    UIView *__accessoryViewContainer;	// 72 = 0x48
    NSMutableSet *__accessoryViewContainers;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000002abfb8
@property(readonly, nonatomic) NSMutableSet *_accessoryViewContainers; // @synthesize _accessoryViewContainers=__accessoryViewContainers;
@property(retain, nonatomic, setter=_setAccessoryViewContainer:) UIView *_accessoryViewContainer; // @synthesize _accessoryViewContainer=__accessoryViewContainer;
@property(retain, nonatomic, setter=_setContainedToolbar:) UIToolbar *_containedToolbar; // @synthesize _containedToolbar=__containedToolbar;
@property(nonatomic, setter=_setAccessoryViewTopOutset:) double _accessoryViewTopOutset; // @synthesize _accessoryViewTopOutset=__accessoryViewTopOutset;
@property(nonatomic, setter=_setContainedToolbarHeight:) double _containedToolbarHeight; // @synthesize _containedToolbarHeight=__containedToolbarHeight;
@property(retain, nonatomic, setter=_setAccessoryView:) UIView *_accessoryView; // @synthesize _accessoryView=__accessoryView;
@property(copy, nonatomic, setter=_setToolbarItems:) NSArray *_toolbarItems; // @synthesize _toolbarItems=__toolbarItems;
@property(nonatomic, setter=_setNeedsUpdateAccessoryViewContainer:) _Bool _needsUpdateAccessoryViewContainer; // @synthesize _needsUpdateAccessoryViewContainer=__needsUpdateAccessoryViewContainer;
@property(nonatomic, setter=_setNeedsUpdateContainedToolbar:) _Bool _needsUpdateContainedToolbar; // @synthesize _needsUpdateContainedToolbar=__needsUpdateContainedToolbar;
@property(nonatomic, setter=_setNeedsUpdateAccessoryViewTopOutset:) _Bool _needsUpdateAccessoryViewTopOutset; // @synthesize _needsUpdateAccessoryViewTopOutset=__needsUpdateAccessoryViewTopOutset;
@property(nonatomic, setter=_setNeedsUpdateAccessoryView:) _Bool _needsUpdateAccessoryView; // @synthesize _needsUpdateAccessoryView=__needsUpdateAccessoryView;
@property(nonatomic, setter=_setNeedsUpdateToolbarItems:) _Bool _needsUpdateToolbarItems; // @synthesize _needsUpdateToolbarItems=__needsUpdateToolbarItems;
@property(nonatomic, setter=_setUpdating:) _Bool _isUpdating; // @synthesize _isUpdating=__isUpdating;
@property(nonatomic, setter=_setNumberOfNestedChanges:) long long _numberOfNestedChanges; // @synthesize _numberOfNestedChanges=__numberOfNestedChanges;
@property(retain, nonatomic) PUToolbarViewModel *toolbarViewModel; // @synthesize toolbarViewModel=_toolbarViewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000002abdba
- (void)_updateViewsIfNeededWithAnimatorBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ab517
- (void)_invalidateAccessoryViewContainer;	// IMP=0x00000000002ab4e4
- (void)_invalidateContainedToolbar;	// IMP=0x00000000002ab4b1
- (void)_updateAccessoryTopOutsetViewIfNeeded;	// IMP=0x00000000002ab3cb
- (void)_invalidateAccessoryViewTopOutset;	// IMP=0x00000000002ab398
- (void)_updateAccessoryViewIfNeeded;	// IMP=0x00000000002ab287
- (void)_invalidateAccessoryView;	// IMP=0x00000000002ab254
- (void)_updateToolbarItemsIfNeeded;	// IMP=0x00000000002ab11c
- (void)_invalidateToolbarItems;	// IMP=0x00000000002ab0e9
- (void)_setNeedsUpdate;	// IMP=0x00000000002ab03c
- (_Bool)_needsUpdate;	// IMP=0x00000000002aafc7
- (void)_updateIfNeededWithAnimatorBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002aaea2
- (void)_assertInsideUpdate;	// IMP=0x00000000002aae0a
- (void)_assertInsideChangeBlock;	// IMP=0x00000000002aad71
- (void)_performChanges:(CDUnknownBlockType)arg1 withAnimatorBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002aabf9
- (void)_performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000002aabe5
- (void)_invalidateSize;	// IMP=0x00000000002aaba3
- (void)_getContainedToolbarFrame:(struct CGRect *)arg1 accessoryViewContainerFrame:(struct CGRect *)arg2 forBounds:(struct CGRect)arg3;	// IMP=0x00000000002aaa01
- (void)layoutSubviews;	// IMP=0x00000000002aa879
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000002aa542
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002aa39d
- (void)tintColorDidChange;	// IMP=0x00000000002aa30a
- (void)setBarStyle:(long long)arg1;	// IMP=0x00000000002aa293
- (void)setToolbarViewModel:(id)arg1 withAnimatorBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002aa1b0
- (_Bool)_shouldStretchDuringCrossfadeTransition;	// IMP=0x00000000002aa0d5
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002aa011

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
