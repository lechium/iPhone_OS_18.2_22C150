//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextView.h>

@class NSString;

@interface UITextView (PKUIUtilities)
+ (id)pkui_plainNonInteractiveTextViewWithFrame:(struct CGRect)arg1;	// IMP=0x001000000090ac58
+ (id)pkui_plainInteractiveTextViewWithFrame:(struct CGRect)arg1;	// IMP=0x001000000090abf9
+ (void)pkui_styleTextView:(id)arg1;	// IMP=0x001000000090ab32
- (struct CGRect)pkui_textFrame;	// IMP=0x001000000090ad4c
- (struct CGRect)pkui_frameForTextFrame:(struct CGRect)arg1;	// IMP=0x001000000090acd7
- (void)pk_setAttributedTextRespectingTextAndBackgroundColors:(id)arg1;	// IMP=0x0010000000a15f0e
- (void)pk_applyAppearance:(id)arg1;	// IMP=0x0010000000a15dc9
- (id)pk_childrenForAppearance;	// IMP=0x0010000000a15cb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

