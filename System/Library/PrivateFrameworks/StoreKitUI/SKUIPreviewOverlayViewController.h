//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewController.h"

@class IKAppDocument, NSString, SKUIHorizontalLockupView, SKUILayoutCache, SKUIViewElementLayoutContext, SUPlayerStatus, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface SKUIPreviewOverlayViewController : SKUIViewController
{
    long long _backgroundStyle;	// 8 = 0x8
    IKAppDocument *_document;	// 16 = 0x10
    SKUILayoutCache *_layoutCache;	// 24 = 0x18
    SKUIViewElementLayoutContext *_layoutContext;	// 32 = 0x20
    SKUIHorizontalLockupView *_lockupView;	// 40 = 0x28
    SUPlayerStatus *_previewStatus;	// 48 = 0x30
    UITapGestureRecognizer *_tapGestureRecognizer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003969b8
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (double)_overlayWidth;	// IMP=0x00000000003968e7
- (id)_layoutCache;	// IMP=0x0000000000396892
- (void)_tapAction:(id)arg1;	// IMP=0x000000000039676f
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000039671b
- (void)layoutCacheDidFinishBatch:(id)arg1;	// IMP=0x0000000000396709
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000003966d5
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;	// IMP=0x00000000003964d4
- (void)loadView;	// IMP=0x0000000000396274
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000396214
- (void)reloadOverlayView;	// IMP=0x0000000000396101
- (void)prepareOverlayView;	// IMP=0x0000000000395e6f
- (void)documentDidUpdate:(id)arg1;	// IMP=0x0000000000395e69
- (void)dealloc;	// IMP=0x0000000000395d65
- (id)initWithDocument:(id)arg1;	// IMP=0x0000000000395c6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

