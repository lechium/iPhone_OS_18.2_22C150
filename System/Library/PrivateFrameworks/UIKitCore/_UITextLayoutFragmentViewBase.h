//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, NSTextLayoutFragment;

__attribute__((visibility("hidden")))
@interface _UITextLayoutFragmentViewBase : UIView
{
    _Bool _textAttachmentGeometryNeedsUpdate;	// 160 = 0xa0
    NSTextLayoutFragment *_layoutFragment;	// 168 = 0xa8
    struct CGPoint _containerOrigin;	// 176 = 0xb0
    struct CGSize _containerSize;	// 192 = 0xc0
    struct CGRect _clipRect;	// 208 = 0xd0
    struct CGRect _clipFrame;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00000000003b6b52
@property(readonly, nonatomic) struct CGRect clipFrame; // @synthesize clipFrame=_clipFrame;
@property(nonatomic) struct CGRect clipRect; // @synthesize clipRect=_clipRect;
@property(nonatomic) struct CGSize containerSize; // @synthesize containerSize=_containerSize;
@property(nonatomic) struct CGPoint containerOrigin; // @synthesize containerOrigin=_containerOrigin;
@property(readonly, nonatomic) NSTextLayoutFragment *layoutFragment; // @synthesize layoutFragment=_layoutFragment;
- (void)_setNeedsDisplayForWritingTools;	// IMP=0x00000000003b6a71
- (void)teardown;	// IMP=0x00000000003b6a6b
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000003b6a0e
- (void)didMoveToSuperview;	// IMP=0x00000000003b6993
- (void)layoutSubviews;	// IMP=0x00000000003b6918
- (void)enumerateTextAttachmentViewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003b672f
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000003b6707
- (void)_updateTextAttachmentGeometry;	// IMP=0x00000000003b661a
- (void)_updateGeometry;	// IMP=0x00000000003b6223
- (struct CGRect)_activeClipRect;	// IMP=0x00000000003b6203
- (struct CGPoint)_activeContainerOrigin;	// IMP=0x00000000003b61eb
- (struct CGRect)_activeLayoutFragmentFrame;	// IMP=0x00000000003b61ad
- (id)initWithLayoutFragment:(id)arg1 containerOrigin:(struct CGPoint)arg2 containerSize:(struct CGSize)arg3 clipRect:(struct CGRect)arg4;	// IMP=0x00000000003b5f34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

