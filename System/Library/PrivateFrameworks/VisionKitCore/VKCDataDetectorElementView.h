//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer, NSArray, NSDictionary, NSString, UIBezierPath, UIContextMenuInteraction, UIPointerInteraction, UITapGestureRecognizer, VKCBaseDataDetectorElement, VKCMRCDataDetectorElement, VKQuad;
@protocol VKCDataDetectorElementViewDelegate;

__attribute__((visibility("hidden")))
@interface VKCDataDetectorElementView
{
    _Bool _isPerformingManualContextInvocation;	// 8 = 0x8
    _Bool _allowLongPressDDActivationOnly;	// 9 = 0x9
    int _analysisRequestID;	// 12 = 0xc
    VKCBaseDataDetectorElement *_dataDetectorElement;	// 16 = 0x10
    NSArray *_allDataDetectorElements;	// 24 = 0x18
    id <VKCDataDetectorElementViewDelegate> _delegate;	// 32 = 0x20
    NSString *_customAnalyticsIdentifier;	// 40 = 0x28
    CAShapeLayer *_highlightPathLayer;	// 48 = 0x30
    UIBezierPath *_highlightPath;	// 56 = 0x38
    UIContextMenuInteraction *_menuInteraction;	// 64 = 0x40
    NSDictionary *_dataDetectorContext;	// 72 = 0x48
    UITapGestureRecognizer *_tapGestureRecognizer;	// 80 = 0x50
    UIPointerInteraction *_pointerInteraction;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000082217
@property(retain, nonatomic) UIPointerInteraction *pointerInteraction; // @synthesize pointerInteraction=_pointerInteraction;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSDictionary *dataDetectorContext; // @synthesize dataDetectorContext=_dataDetectorContext;
@property(retain, nonatomic) UIContextMenuInteraction *menuInteraction; // @synthesize menuInteraction=_menuInteraction;
@property(nonatomic) _Bool allowLongPressDDActivationOnly; // @synthesize allowLongPressDDActivationOnly=_allowLongPressDDActivationOnly;
@property(nonatomic) _Bool isPerformingManualContextInvocation; // @synthesize isPerformingManualContextInvocation=_isPerformingManualContextInvocation;
@property(retain, nonatomic) UIBezierPath *highlightPath; // @synthesize highlightPath=_highlightPath;
@property(retain, nonatomic) CAShapeLayer *highlightPathLayer; // @synthesize highlightPathLayer=_highlightPathLayer;
@property(nonatomic) int analysisRequestID; // @synthesize analysisRequestID=_analysisRequestID;
@property(copy, nonatomic) NSString *customAnalyticsIdentifier; // @synthesize customAnalyticsIdentifier=_customAnalyticsIdentifier;
@property(nonatomic) __weak id <VKCDataDetectorElementViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *allDataDetectorElements; // @synthesize allDataDetectorElements=_allDataDetectorElements;
@property(readonly, nonatomic) VKCBaseDataDetectorElement *dataDetectorElement; // @synthesize dataDetectorElement=_dataDetectorElement;
- (struct CGRect)rectForMrcActionInViewController:(id)arg1;	// IMP=0x0000000000081fb3
- (id)accessibilityValue;	// IMP=0x0000000000081f39
- (_Bool)isAccessibilityElement;	// IMP=0x0000000000081f31
- (unsigned long long)accessibilityTraits;	// IMP=0x0000000000081f21
- (id)accessibilityIdentifier;	// IMP=0x0000000000081f14
- (void)highlighter:(id)arg1 shouldHighlight:(_Bool)arg2;	// IMP=0x0000000000081d93
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;	// IMP=0x0000000000081d86
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x0000000000081ca8
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000081b85
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000081a8f
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0000000000081a43
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;	// IMP=0x0000000000081a31
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x00000000000814f7
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x000000000008127a
- (_Bool)isPointInQuad:(struct CGPoint)arg1;	// IMP=0x00000000000811e5
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000811b3
- (id)presentingViewControllerForInteraction;	// IMP=0x000000000008111c
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000008105e
- (id)analyticsEventWithDDType:(long long)arg1;	// IMP=0x0000000000080f52
- (void)sendAnalyticsEventIfNecessaryForDDType:(long long)arg1;	// IMP=0x0000000000080e9c
- (void)manuallyActivateLongPressMenuInteraction;	// IMP=0x0000000000080e22
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x0000000000080d8b
- (_Bool)ignoresHitTest;	// IMP=0x0000000000080d43
- (void)didTap:(id)arg1;	// IMP=0x0000000000080a54
@property(readonly, nonatomic) VKQuad *boundingQuadInBoundsCoordinates;
@property(readonly, nonatomic) NSArray *subQuadsInBoundsCoordinates;
- (id)calcPathForUnderline;	// IMP=0x0000000000080031
@property(readonly, nonatomic) double lineWithForAverageSubquadHeight;
- (void)updateHighlightPath;	// IMP=0x000000000007fbcb
- (void)layoutSubviews;	// IMP=0x000000000007fb8a
@property(readonly, nonatomic) VKCMRCDataDetectorElement *mrcElement;
@property(readonly, nonatomic) _Bool shouldUseBCSAction;
- (id)initWithDataDetectorElement:(id)arg1 unfilteredElements:(id)arg2;	// IMP=0x000000000007f80e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
