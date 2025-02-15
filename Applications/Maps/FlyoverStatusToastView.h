//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class FlyoverGlyphView, NSLayoutConstraint, UILabel, UIVisualEffectView;

@interface FlyoverStatusToastView : UIView
{
    UIVisualEffectView *_backgroundView;	// 8 = 0x8
    FlyoverGlyphView *_glyphView;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
    NSLayoutConstraint *_backgroundTopConstraint;	// 32 = 0x20
    NSLayoutConstraint *_backgroundLeftConstraint;	// 40 = 0x28
    NSLayoutConstraint *_backgroundBottomConstraint;	// 48 = 0x30
    NSLayoutConstraint *_backgroundRightConstraint;	// 56 = 0x38
    _Bool _didPresent;	// 64 = 0x40
    _Bool _didDismiss;	// 65 = 0x41
}

+ (struct CGSize)preferredSize;	// IMP=0x0040000000b75644
- (void).cxx_destruct;	// IMP=0x0020000000b7567a
@property(readonly, nonatomic) _Bool didDismiss; // @synthesize didDismiss=_didDismiss;
@property(readonly, nonatomic) _Bool didPresent; // @synthesize didPresent=_didPresent;
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000b75447
- (void)present;	// IMP=0x0010000000b752ed
- (id)initWithTrackingStateReason:(unsigned long long)arg1;	// IMP=0x0010000000b747dc

@end

