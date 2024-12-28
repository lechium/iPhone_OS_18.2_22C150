//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _UISheetPresentationControllerAppearance;

__attribute__((visibility("hidden")))
@interface _UISheetPresentationControllerConfiguration : NSObject
{
    _Bool __shouldScaleDownBehindDescendantSheets;	// 8 = 0x8
    _Bool __peeksWhenFloating;	// 9 = 0x9
    _Bool __wantsFullScreen;	// 10 = 0xa
    _Bool __wantsBottomAttached;	// 11 = 0xb
    _Bool __wantsEdgeAttachedInCompactHeight;	// 12 = 0xc
    _Bool __widthFollowsPreferredContentSizeWhenEdgeAttached;	// 13 = 0xd
    _Bool __prefersGrabberVisible;	// 14 = 0xe
    _Bool __insetsPresentedViewForGrabber;	// 15 = 0xf
    _Bool __prefersScrollingResizesWhenDetentDirectionIsDown;	// 16 = 0x10
    _Bool __prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;	// 17 = 0x11
    double __grabberTopSpacing;	// 24 = 0x18
    double __additionalMinimumTopInset;	// 32 = 0x20
    long long __mode;	// 40 = 0x28
    double __cornerRadiusForPresentationAndDismissal;	// 48 = 0x30
    double __preferredCornerRadius;	// 56 = 0x38
    double __preferredShadowOpacity;	// 64 = 0x40
    double __shadowRadius;	// 72 = 0x48
    NSArray *__detents;	// 80 = 0x50
    NSString *__selectedDetentIdentifier;	// 88 = 0x58
    _UISheetPresentationControllerAppearance *__standardAppearance;	// 96 = 0x60
    _UISheetPresentationControllerAppearance *__edgeAttachedCompactHeightAppearance;	// 104 = 0x68
    _UISheetPresentationControllerAppearance *__floatingAppearance;	// 112 = 0x70
    long long __detentDirectionWhenFloating;	// 120 = 0x78
    double __hostParentDepthLevel;	// 128 = 0x80
    struct CGRect __hostParentStackAlignmentFrame;	// 136 = 0x88
    struct CGRect __hostParentFullHeightUntransformedFrameForDepthLevel;	// 168 = 0xa8
}

+ (_Bool)supportsBSXPCSecureCoding;	// IMP=0x00100000016cc974
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000016cc96c
+ (id)_fullScreenConfiguration;	// IMP=0x00100000016cac61
- (void).cxx_destruct;	// IMP=0x00000000016ccbef
@property(nonatomic, setter=_setHostParentFullHeightUntransformedFrameForDepthLevel:) struct CGRect _hostParentFullHeightUntransformedFrameForDepthLevel; // @synthesize _hostParentFullHeightUntransformedFrameForDepthLevel=__hostParentFullHeightUntransformedFrameForDepthLevel;
@property(nonatomic, setter=_setHostParentStackAlignmentFrame:) struct CGRect _hostParentStackAlignmentFrame; // @synthesize _hostParentStackAlignmentFrame=__hostParentStackAlignmentFrame;
@property(nonatomic, setter=_setHostParentDepthLevel:) double _hostParentDepthLevel; // @synthesize _hostParentDepthLevel=__hostParentDepthLevel;
@property(nonatomic, setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:) _Bool _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge; // @synthesize _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge=__prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
@property(nonatomic, setter=_setPrefersScrollingResizesWhenDetentDirectionIsDown:) _Bool _prefersScrollingResizesWhenDetentDirectionIsDown; // @synthesize _prefersScrollingResizesWhenDetentDirectionIsDown=__prefersScrollingResizesWhenDetentDirectionIsDown;
@property(nonatomic, setter=_setDetentDirectionWhenFloating:) long long _detentDirectionWhenFloating; // @synthesize _detentDirectionWhenFloating=__detentDirectionWhenFloating;
@property(retain, nonatomic, setter=_setFloatingAppearance:) _UISheetPresentationControllerAppearance *_floatingAppearance; // @synthesize _floatingAppearance=__floatingAppearance;
@property(retain, nonatomic, setter=_setEdgeAttachedCompactHeightAppearance:) _UISheetPresentationControllerAppearance *_edgeAttachedCompactHeightAppearance; // @synthesize _edgeAttachedCompactHeightAppearance=__edgeAttachedCompactHeightAppearance;
@property(retain, nonatomic, setter=_setStandardAppearance:) _UISheetPresentationControllerAppearance *_standardAppearance; // @synthesize _standardAppearance=__standardAppearance;
@property(copy, nonatomic, setter=_setSelectedDetentIdentifier:) NSString *_selectedDetentIdentifier; // @synthesize _selectedDetentIdentifier=__selectedDetentIdentifier;
@property(copy, nonatomic, setter=_setDetents:) NSArray *_detents; // @synthesize _detents=__detents;
@property(nonatomic, setter=_setShadowRadius:) double _shadowRadius; // @synthesize _shadowRadius=__shadowRadius;
@property(nonatomic, setter=_setPreferredShadowOpacity:) double _preferredShadowOpacity; // @synthesize _preferredShadowOpacity=__preferredShadowOpacity;
@property(nonatomic, setter=_setPreferredCornerRadius:) double _preferredCornerRadius; // @synthesize _preferredCornerRadius=__preferredCornerRadius;
@property(nonatomic, setter=_setCornerRadiusForPresentationAndDismissal:) double _cornerRadiusForPresentationAndDismissal; // @synthesize _cornerRadiusForPresentationAndDismissal=__cornerRadiusForPresentationAndDismissal;
@property(nonatomic, setter=_setMode:) long long _mode; // @synthesize _mode=__mode;
@property(nonatomic, setter=_setInsetsPresentedViewForGrabber:) _Bool _insetsPresentedViewForGrabber; // @synthesize _insetsPresentedViewForGrabber=__insetsPresentedViewForGrabber;
@property(nonatomic, setter=_setAdditionalMinimumTopInset:) double _additionalMinimumTopInset; // @synthesize _additionalMinimumTopInset=__additionalMinimumTopInset;
@property(nonatomic, setter=_setGrabberTopSpacing:) double _grabberTopSpacing; // @synthesize _grabberTopSpacing=__grabberTopSpacing;
@property(nonatomic, setter=_prefersGrabberVisible:) _Bool _prefersGrabberVisible; // @synthesize _prefersGrabberVisible=__prefersGrabberVisible;
@property(nonatomic, setter=_setWidthFollowsPreferredContentSizeWhenEdgeAttached:) _Bool _widthFollowsPreferredContentSizeWhenEdgeAttached; // @synthesize _widthFollowsPreferredContentSizeWhenEdgeAttached=__widthFollowsPreferredContentSizeWhenEdgeAttached;
@property(nonatomic, setter=_setWantsEdgeAttachedInCompactHeight:) _Bool _wantsEdgeAttachedInCompactHeight; // @synthesize _wantsEdgeAttachedInCompactHeight=__wantsEdgeAttachedInCompactHeight;
@property(nonatomic, setter=_setWantsBottomAttached:) _Bool _wantsBottomAttached; // @synthesize _wantsBottomAttached=__wantsBottomAttached;
@property(nonatomic, setter=_setWantsFullScreen:) _Bool _wantsFullScreen; // @synthesize _wantsFullScreen=__wantsFullScreen;
@property(nonatomic, setter=_setPeeksWhenFloating:) _Bool _peeksWhenFloating; // @synthesize _peeksWhenFloating=__peeksWhenFloating;
@property(nonatomic, setter=_setShouldScaleDownBehindDescendantSheets:) _Bool _shouldScaleDownBehindDescendantSheets; // @synthesize _shouldScaleDownBehindDescendantSheets=__shouldScaleDownBehindDescendantSheets;
- (void)encodeWithBSXPCCoder:(id)arg1;	// IMP=0x00000000016cc530
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000016cc0ef
- (id)initWithBSXPCCoder:(id)arg1;	// IMP=0x00000000016cbd25
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000016cb935
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000016cb3d9
- (_Bool)_shouldFenceChangeToConfiguration:(id)arg1;	// IMP=0x00000000016cb3bf
- (_Bool)_isEqual:(id)arg1 onlyCheckPropertiesRequiringFencing:(_Bool)arg2;	// IMP=0x00000000016cac99
- (id)init;	// IMP=0x00000000016caa9e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
