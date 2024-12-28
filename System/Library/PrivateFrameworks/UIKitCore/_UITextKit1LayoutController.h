//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UITextLayoutControllerBase.h"

@class CUIStyleEffectConfiguration, NSArray, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, UITextPosition, UITextRange, UITextView, _UITextCanvasView;
@protocol NSLayoutManagerDelegate;

__attribute__((visibility("hidden")))
@interface _UITextKit1LayoutController : _UITextLayoutControllerBase
{
    UITextView *_textView;	// 8 = 0x8
    NSLayoutManager *_originalLayoutManager;	// 16 = 0x10
    _UITextCanvasView *_canvasView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000547f95
- (void)resetFontForExtraBulletRendering;	// IMP=0x0000000000547f47
@property(nonatomic) __weak id <NSLayoutManagerDelegate> layoutManagerDelegate;
@property(nonatomic) _Bool drawsDebugBaselines;
- (void)resumeTiling;	// IMP=0x0000000000547de3
- (void)suspendTiling;	// IMP=0x0000000000547dc6
@property(nonatomic) double maxTileHeight;
@property(nonatomic) _Bool usesTiledViews;
- (void)invalidateDisplayForCharacterRange:(struct _NSRange)arg1;	// IMP=0x0000000000547d01
- (struct CGRect)unionRectForCharacterRange:(struct _NSRange)arg1 bottomInset:(double)arg2;	// IMP=0x00000000005479db
- (struct CGRect)boundingRectForCharacterRange:(struct _NSRange)arg1;	// IMP=0x00000000005476cf
- (struct _NSRange)rangeOfCharacterClusterAtIndex:(unsigned long long)arg1 type:(long long)arg2;	// IMP=0x0000000000547597
- (id)positionWithOffset:(long long)arg1 affinity:(long long)arg2;	// IMP=0x000000000054757e
- (id)textRangeForCharacterRange:(struct _NSRange)arg1;	// IMP=0x0000000000547565
- (struct _NSRange)characterRangeForTextRange:(id)arg1 clippedToDocument:(_Bool)arg2;	// IMP=0x0000000000547502
- (struct _NSRange)characterRangeForTextRange:(id)arg1;	// IMP=0x00000000005474ee
@property(readonly, nonatomic) _Bool canAccessLayoutManager;
@property(readonly, nonatomic) _Bool includesTextListMarkers;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (id)_writingToolsMinimumContextualRangeForRange:(id)arg1;	// IMP=0x00000000005474d6
- (struct CGRect)boundingRectForRange:(id)arg1;	// IMP=0x0000000000547496
- (void)invalidateLayoutForRange:(id)arg1;	// IMP=0x0000000000547419
- (void)ensureLayoutForRange:(id)arg1;	// IMP=0x000000000054738b
- (struct CGRect)updateLayoutForSizeChangeOfTextContainer:(id)arg1;	// IMP=0x000000000054736d
- (void)ensureLayoutForBounds:(struct CGRect)arg1 inTextContainer:(id)arg2;	// IMP=0x000000000054726b
- (struct CGRect)usedRectForTextContainer:(id)arg1;	// IMP=0x00000000005471ee
- (void)ensureLayoutForTextContainer:(id)arg1;	// IMP=0x0000000000547185
- (id)previewRendererForRange:(id)arg1 unifyRects:(_Bool)arg2;	// IMP=0x00000000005470fa
- (id)dequeueCanvasViewForTextContainer:(id)arg1;	// IMP=0x00000000005470bc
- (id)textContainerForPosition:(id)arg1;	// IMP=0x000000000054707c
@property(readonly, copy, nonatomic) NSArray *textContainers;
- (void)requestTextGeometryAtPosition:(id)arg1 typingAttributes:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000546bd2
- (double)baselineOffsetForFirstGlyph;	// IMP=0x0000000000546b66
- (id)annotatedSubstringForRange:(id)arg1;	// IMP=0x00000000005468b4
- (id)attributedTextInRange:(id)arg1;	// IMP=0x0000000000546815
@property(copy, nonatomic) CUIStyleEffectConfiguration *styleEffectConfiguration;
@property(getter=isEditable) _Bool editable;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,GisEditable

- (void)removeInvisibleRange:(id)arg1;	// IMP=0x0000000000546712
- (void)addInvisibleRange:(id)arg1;	// IMP=0x00000000005466d6
- (void)removeAllGhostedRanges;	// IMP=0x00000000005466b9
- (void)addGhostedRange:(id)arg1;	// IMP=0x000000000054667d
- (void)removeRenderingAttributes:(id)arg1 forRange:(id)arg2;	// IMP=0x00000000005464b2
- (void)addRenderingAttributes:(id)arg1 forRange:(id)arg2;	// IMP=0x000000000054640b
- (void)removeAnnotationAttribute:(id)arg1 forRange:(id)arg2;	// IMP=0x0000000000546364
- (id)annotationAttribute:(id)arg1 atPosition:(id)arg2;	// IMP=0x00000000005462af
- (void)addAnnotationAttribute:(id)arg1 value:(id)arg2 forRange:(id)arg3;	// IMP=0x00000000005461f0
- (struct CGRect)extraLineFragmentRect;	// IMP=0x0000000000546194
- (void)enumerateTextSegmentsInRange:(id)arg1 inTextContainer:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000005460ae
- (void)enumerateTextLineFragmentsInRange:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000545f1c
- (id)nearestPositionAtPoint:(struct CGPoint)arg1 inContainer:(id)arg2;	// IMP=0x0000000000545d37
- (id)cursorPositionAtPoint:(struct CGPoint)arg1 inContainer:(id)arg2;	// IMP=0x0000000000545839
- (id)selectionRectsForRange:(id)arg1 fromView:(id)arg2 forContainerPassingTest:(CDUnknownBlockType)arg3;	// IMP=0x0000000000544fce
- (long long)baseWritingDirectionAtPosition:(id)arg1;	// IMP=0x0000000000544f09
- (id)attributesAtPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000544d4c
- (id)textRangeForBounds:(struct CGRect)arg1 inTextContainer:(id)arg2 layoutIfNeeded:(_Bool)arg3;	// IMP=0x0000000000544acb
- (struct CGRect)insertionRectForPosition:(id)arg1 typingAttributes:(id)arg2 placeholderAttachment:(id)arg3 textContainer:(id *)arg4;	// IMP=0x0000000000543b00
- (long long)affinityForPosition:(id)arg1;	// IMP=0x0000000000543aeb
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000543a93
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000543a7b
- (id)_visualSelectionRangeForExtent:(id)arg1 forPoint:(struct CGPoint)arg2 fromPosition:(id)arg3 inDirection:(long long)arg4;	// IMP=0x0000000000543a60
- (id)textRangeForTextKit2Ranges:(id)arg1;	// IMP=0x0000000000543a58
- (id)textRangeForLineEnclosingPosition:(id)arg1 effectiveAffinity:(long long)arg2;	// IMP=0x0000000000543617
- (id)textRangeForLineEnclosingPosition:(id)arg1;	// IMP=0x00000000005435ac
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2 affinity:(long long)arg3;	// IMP=0x00000000005434db
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x00000000005434c2
- (id)emptyTextRangeAtPosition:(id)arg1;	// IMP=0x0000000000543449
- (id)viewportRangeForTextContainer:(id)arg1;	// IMP=0x0000000000543441
@property(readonly, nonatomic) UITextRange *documentRange;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(readonly, nonatomic) NSTextStorage *textStorage;
@property(readonly, nonatomic) NSLayoutManager *layoutManager;
- (unsigned long long)_textStorageLength;	// IMP=0x00000000005431e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSTextContainer *firstTextContainer;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
