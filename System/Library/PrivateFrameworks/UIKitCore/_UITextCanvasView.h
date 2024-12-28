//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSMutableSet, NSString, _UITextTiledLayer;
@protocol _UITextKit1CanvasContext;

__attribute__((visibility("hidden")))
@interface _UITextCanvasView : UIView
{
    NSMutableSet *_ghostedRanges;	// 160 = 0xa0
    NSMutableSet *_invisibleRanges;	// 168 = 0xa8
    NSArray *_maskedRects;	// 176 = 0xb0
    _Bool _layoutFragmentViewsNeedDisplay;	// 184 = 0xb8
    id <_UITextKit1CanvasContext> _context;	// 192 = 0xc0
}

+ (Class)layerClass;	// IMP=0x0010000001769403
- (void).cxx_destruct;	// IMP=0x000000000176a7f5
@property _Bool layoutFragmentViewsNeedDisplay; // @synthesize layoutFragmentViewsNeedDisplay=_layoutFragmentViewsNeedDisplay;
@property(nonatomic) __weak id <_UITextKit1CanvasContext> context; // @synthesize context=_context;
- (void)flushFragmentViews;	// IMP=0x000000000176a6f6
- (void)configureCustomTextRenderer;	// IMP=0x000000000176a646
- (void)_geometryChanged:(const CDStruct_6f49ea1d *)arg1 forAncestor:(id)arg2;	// IMP=0x000000000176a62d
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000176a4f4
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x000000000176a4ee
- (void)isEditingDidChange;	// IMP=0x000000000176a4e8
- (void)updateContentSizeIfNeeded;	// IMP=0x000000000176a4e2
- (void)viewportBoundsDidChange;	// IMP=0x000000000176a4dc
- (void)setNeedsLayout;	// IMP=0x000000000176a492
- (void)layoutSubviews;	// IMP=0x000000000176a451
- (void)removeInvisibleRange:(struct _NSRange)arg1;	// IMP=0x000000000176a3b8
- (void)addInvisibleRange:(struct _NSRange)arg1;	// IMP=0x000000000176a307
- (void)removeAllGhostedRanges;	// IMP=0x000000000176a2b3
- (void)addGhostedRange:(struct _NSRange)arg1;	// IMP=0x000000000176a202
- (id)_textTiledLayer:(id)arg1 maskedRectsInVisibleRect:(struct CGRect)arg2;	// IMP=0x0000000001769831
@property(nonatomic, setter=_setDrawsDebugBaselines:) _Bool _drawsDebugBaselines;
- (void)resumeTiling;	// IMP=0x00000000017696f1
- (void)suspendTiling;	// IMP=0x00000000017696b4
@property(nonatomic) double maxTileHeight;
@property(nonatomic, getter=isTilingEnabled) _Bool tilingEnabled;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000001769535
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000017694e3
- (void)_updateTilingViewportLayer;	// IMP=0x0000000001769454
- (_Bool)_enableAutoConstraining;	// IMP=0x000000000176944c
- (void)dealloc;	// IMP=0x00000000017693b6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001769321

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _UITextTiledLayer *layer; // @dynamic layer;
@property(readonly) Class superclass;

@end
