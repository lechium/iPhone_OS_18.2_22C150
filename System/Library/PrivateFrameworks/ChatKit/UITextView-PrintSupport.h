//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextView.h>

@interface UITextView (PrintSupport)
+ (_Bool)ck_supportsDynamicallyTogglingAllowsTextAnimations;	// IMP=0x003000000018b091
- (void)ck_textKit2_drawVisibleTextInCurrentContextWithContainerView:(id)arg1;	// IMP=0x001000000007fe97
- (void)ck_textKit1_drawVisibleTextInCurrentContextWithContainerView:(id)arg1;	// IMP=0x001000000007fadf
- (void)ck_drawVisibleTextInCurrentContextWithContainerView:(id)arg1;	// IMP=0x001000000007fa2b
- (_Bool)ck_isCursorDirectlyAfterBracketCharacter;	// IMP=0x001000000084b0c0
- (void)ck_toggleTextEffect:(long long)arg1 inRange:(struct _NSRange)arg2 getAdded:(_Bool *)arg3 undo:(CDUnknownBlockType)arg4;	// IMP=0x00100000008e5e00
- (void)ck_toggleTextEffectNamed:(id)arg1 inRange:(struct _NSRange)arg2 getAdded:(_Bool *)arg3 undo:(CDUnknownBlockType)arg4;	// IMP=0x00100000008e5960
- (void)ck_applyWithTextStyle:(unsigned long long)arg1 toRange:(struct _NSRange)arg2 baseFont:(id)arg3;	// IMP=0x00100000008e57b0
- (void)ck_applyWithTextStyle:(unsigned long long)arg1 toRange:(struct _NSRange)arg2 baseFont:(id)arg3 undo:(CDUnknownBlockType)arg4;	// IMP=0x00100000008e5660
- (long long)ck_activeTextEffectTypeInRange:(struct _NSRange)arg1;	// IMP=0x00100000008e5220
- (unsigned long long)ck_activeTextStylesInRange:(struct _NSRange)arg1;	// IMP=0x00100000008e5120
- (_Bool)ck_hasPlayingOrPausedTextAnimator;	// IMP=0x00100000008e50d0
- (_Bool)ck_isLastTextAnimation:(id)arg1;	// IMP=0x00100000008e4e80
- (id)ck_firstTextAnimation;	// IMP=0x00100000008e4ce0
- (void)ck_invalidateAllAnimators;	// IMP=0x00100000008e4b40
- (_Bool)ck_containsStaleEntryViewFont;	// IMP=0x00100000008e4950
- (_Bool)ck_isTextLayoutExclusivelyUsingRTLWritingDirection;	// IMP=0x001000000090a390
@end

