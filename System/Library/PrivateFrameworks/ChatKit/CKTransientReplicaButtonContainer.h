//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface CKTransientReplicaButtonContainer : UIView
{
    UIView *_sendButtonCircle;	// 8 = 0x8
    UIView *_cancelButtonCircle;	// 16 = 0x10
    CALayer *_sendButtonGlyphLayer;	// 24 = 0x18
    CALayer *_cancelButtonGlyphLayer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000054dc1d
@property(readonly, nonatomic) CALayer *cancelButtonGlyphLayer; // @synthesize cancelButtonGlyphLayer=_cancelButtonGlyphLayer;
@property(readonly, nonatomic) CALayer *sendButtonGlyphLayer; // @synthesize sendButtonGlyphLayer=_sendButtonGlyphLayer;
@property(readonly, nonatomic) UIView *cancelButtonCircle; // @synthesize cancelButtonCircle=_cancelButtonCircle;
@property(readonly, nonatomic) UIView *sendButtonCircle; // @synthesize sendButtonCircle=_sendButtonCircle;
- (id)_glyphLayerForButtonAnimationWithImage:(id)arg1;	// IMP=0x000000000054dabc
- (id)_invertedCircularFillGlyph:(id)arg1;	// IMP=0x000000000054d7c7
- (id)initWithFrame:(struct CGRect)arg1 hasDarkVibrancy:(_Bool)arg2 isInDarkMode:(_Bool)arg3 color:(id)arg4 sendColor:(BOOL)arg5;	// IMP=0x000000000054d1c6

@end
