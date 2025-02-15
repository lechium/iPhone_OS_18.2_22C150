//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSLayoutConstraint, NSString, UIAutocorrectBubble;

__attribute__((visibility("hidden")))
@interface UIAutocorrectBubbleContainer : UIView
{
    NSString *_typedText;	// 8 = 0x8
    UIAutocorrectBubble *_bubble;	// 16 = 0x10
    UIView *_fakeTextSelectionHighlight;	// 24 = 0x18
    UIView *_typedTextAnimationPlaceholder;	// 32 = 0x20
    NSLayoutConstraint *_highlightWidthConstraint;	// 40 = 0x28
    NSLayoutConstraint *_bubbleTopConstraint;	// 48 = 0x30
    NSLayoutConstraint *_xConstraint;	// 56 = 0x38
    NSLayoutConstraint *_yConstraint;	// 64 = 0x40
    NSLayoutConstraint *_heightConstraint;	// 72 = 0x48
    NSLayoutConstraint *_widthConstraint;	// 80 = 0x50
    struct CGRect _referenceRect;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000011df90e
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *yConstraint; // @synthesize yConstraint=_yConstraint;
@property(retain, nonatomic) NSLayoutConstraint *xConstraint; // @synthesize xConstraint=_xConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bubbleTopConstraint; // @synthesize bubbleTopConstraint=_bubbleTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *highlightWidthConstraint; // @synthesize highlightWidthConstraint=_highlightWidthConstraint;
@property(retain, nonatomic) UIView *typedTextAnimationPlaceholder; // @synthesize typedTextAnimationPlaceholder=_typedTextAnimationPlaceholder;
@property(retain, nonatomic) UIView *fakeTextSelectionHighlight; // @synthesize fakeTextSelectionHighlight=_fakeTextSelectionHighlight;
@property(retain, nonatomic) UIAutocorrectBubble *bubble; // @synthesize bubble=_bubble;
@property(nonatomic) struct CGRect referenceRect; // @synthesize referenceRect=_referenceRect;
@property(retain, nonatomic) NSString *typedText; // @synthesize typedText=_typedText;
- (void)performReset;	// IMP=0x00000000011df5ff
- (_Bool)isViewAnimating;	// IMP=0x00000000011df566
- (void)reset;	// IMP=0x00000000011df52f
- (void)animateAutocorrectionAccepted;	// IMP=0x00000000011df20c
- (void)dismissAutocorrectBubble;	// IMP=0x00000000011df1ad
- (void)didTapAutocorrectionBubble;	// IMP=0x00000000011df19b
- (id)createTypedTextViewWithTypedText:(id)arg1;	// IMP=0x00000000011dedb1
- (void)updateSelfWithRect:(struct CGRect)arg1;	// IMP=0x00000000011de781
- (void)updateBubbleWithAutocorrectionText:(id)arg1 referenceRect:(struct CGRect)arg2;	// IMP=0x00000000011de398
- (void)updateFakeTextSelectionHighlightForRect:(struct CGRect)arg1;	// IMP=0x00000000011dddd7
- (void)updateWithAutocorrectionText:(id)arg1 typedText:(id)arg2 referenceTextView:(id)arg3 referenceRect:(struct CGRect)arg4;	// IMP=0x00000000011ddd17
- (id)init;	// IMP=0x00000000011ddc9d

@end

