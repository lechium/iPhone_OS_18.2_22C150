//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIImageView, UITextView;

__attribute__((visibility("hidden")))
@interface OBIconTextView : UIView
{
    UIImageView *_iconView;	// 8 = 0x8
    UITextView *_textView;	// 16 = 0x10
    double _padding;	// 24 = 0x18
    double _baselineFromBoundsTop;	// 32 = 0x20
    struct CGSize _iconSize;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002a5a1
@property(readonly, nonatomic) double baselineFromBoundsTop; // @synthesize baselineFromBoundsTop=_baselineFromBoundsTop;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000002a4b0
- (void)updateFont;	// IMP=0x000000000002a44b
- (void)updateConstraints;	// IMP=0x0000000000029fcd
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000029fb8
- (id)viewForFirstBaselineLayout;	// IMP=0x0000000000029fa3
- (id)initWithIcon:(id)arg1 iconSize:(struct CGSize)arg2 text:(id)arg3 dataDetectorTypes:(unsigned long long)arg4;	// IMP=0x0000000000029d4a

@end

