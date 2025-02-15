//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKAcknowledgmentGlyphView.h"

@class CKAcknowledgmentGlyphImageView;

__attribute__((visibility("hidden")))
@interface CKQuestionAcknowledgmentGlyphView : CKAcknowledgmentGlyphView
{
    CKAcknowledgmentGlyphImageView *_glyph;	// 40 = 0x28
    CKAcknowledgmentGlyphImageView *_dot;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000656561
@property(retain, nonatomic) CKAcknowledgmentGlyphImageView *dot; // @synthesize dot=_dot;
@property(retain, nonatomic) CKAcknowledgmentGlyphImageView *glyph; // @synthesize glyph=_glyph;
- (double)animationDuration;	// IMP=0x0000000000656509
- (void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000656106
- (struct CGPoint)glyphOffset;	// IMP=0x00000000006560c4
- (long long)acknowledgmentType;	// IMP=0x00000000006560b9
- (void)setGlyphColor:(id)arg1;	// IMP=0x0000000000655ef5
- (void)layoutSubviews;	// IMP=0x0000000000655a55
- (id)initWithFrame:(struct CGRect)arg1 color:(BOOL)arg2;	// IMP=0x0000000000655880

@end

