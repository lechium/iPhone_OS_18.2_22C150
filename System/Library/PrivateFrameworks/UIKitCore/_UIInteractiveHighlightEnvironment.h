//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID, UIScreen, UIView, UIViewFloatAnimatableProperty, UIViewPropertyAnimator, UIVisualEffectView, _UIInteractiveHighlightEffectWindow;

__attribute__((visibility("hidden")))
@interface _UIInteractiveHighlightEnvironment : NSObject
{
    UIScreen *_containerScreen;	// 8 = 0x8
    _UIInteractiveHighlightEffectWindow *_containerWindow;	// 16 = 0x10
    UIView *_containerView;	// 24 = 0x18
    UIVisualEffectView *_backgroundEffectView;	// 32 = 0x20
    UIView *_contentView;	// 40 = 0x28
    UIView *_contentClipView;	// 48 = 0x30
    UIView *_contentOverlayView;	// 56 = 0x38
    UIViewPropertyAnimator *_backgroundEffectAnimator;	// 64 = 0x40
    UIViewFloatAnimatableProperty *_backgroundEffectProgress;	// 72 = 0x48
    NSArray *_viewRecords;	// 80 = 0x50
    _UIInteractiveHighlightEnvironment *_parentEnvironment;	// 88 = 0x58
    _UIInteractiveHighlightEnvironment *_childEnvironment;	// 96 = 0x60
    NSUUID *_backgroundAnimationIdentifier;	// 104 = 0x68
    UIView *_customBackgroundEffectView;	// 112 = 0x70
    CDUnknownBlockType _backgroundEffectApplyBlock;	// 120 = 0x78
}

+ (id)interactiveHighlightEnvironmentForContainerView:(id)arg1;	// IMP=0x006000000124147c
+ (id)requestInteractiveHighlightEnvironmentForView:(id)arg1;	// IMP=0x006000000124125e
- (void).cxx_destruct;	// IMP=0x00000000012411ad
@property(copy, nonatomic) CDUnknownBlockType backgroundEffectApplyBlock; // @synthesize backgroundEffectApplyBlock=_backgroundEffectApplyBlock;
@property(retain, nonatomic) UIView *customBackgroundEffectView; // @synthesize customBackgroundEffectView=_customBackgroundEffectView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)finalizeContainerWindowIfNeeded;	// IMP=0x00000000012410a3
- (void)finalizeContentViewIfNeeded;	// IMP=0x0000000001240fe4
- (void)finalizeBackgroundEffect;	// IMP=0x0000000001240ee5
- (id)backgroundVisualEffectForProgress:(double)arg1;	// IMP=0x0000000001240ca4
- (id)newBackgroundEffectAnimator;	// IMP=0x0000000001240b20
- (void)initContentViewIfNeeded;	// IMP=0x0000000001240938
- (void)initBackgroundEffectViewIfNeeded;	// IMP=0x000000000124083d
- (void)initContainerWindowIfNeeded;	// IMP=0x00000000012406e7
- (void)finalizeViewRecord:(id)arg1;	// IMP=0x000000000124046d
- (void)removeAllViewRecords;	// IMP=0x00000000012403b6
- (void)removeViewRecordsIfNeeded;	// IMP=0x0000000001240205
- (long long)indexOfViewRecordForView:(id)arg1;	// IMP=0x0000000001240117
- (id)newViewRecordForView:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000123fc48
- (void)applyContentInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000000123fb7d
- (void)reset;	// IMP=0x000000000123fb31
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000123f91d
@property(nonatomic, getter=isHidden) _Bool hidden;
- (void)disableClippingForView:(id)arg1 ancestorView:(id)arg2;	// IMP=0x000000000123f845
- (void)setUserInteractionOnContainerEnabled:(_Bool)arg1;	// IMP=0x000000000123f7bd
- (void)removeInteractiveHighlightEffect:(id)arg1;	// IMP=0x000000000123f60f
- (void)applyBackgroundEffectWithMagnitude:(double)arg1 interactive:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000123f043
- (id)interactiveHighlightEffectForView:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000123edc9
@property(readonly, nonatomic) UIView *contentClipView;
@property(readonly, nonatomic) UIView *contentView; // @dynamic contentView;
- (void)dealloc;	// IMP=0x000000000123ed41
- (id)initWithParentEnvironment:(id)arg1;	// IMP=0x000000000123ebae
- (id)initWithContainerScreen:(id)arg1;	// IMP=0x000000000123eb10
- (id)initWithContainerView:(id)arg1;	// IMP=0x000000000123ea6b

@end
