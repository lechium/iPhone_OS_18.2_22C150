//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNFRegLearnMoreButton : UIButton
{
    long long _style;	// 8 = 0x8
    NSString *_buttonText;	// 16 = 0x10
    _Bool _alwaysUnderline;	// 24 = 0x18
    _Bool _usesImage;	// 25 = 0x19
}

+ (id)roundedButtonWithText:(id)arg1 color:(id)arg2;	// IMP=0x0060000000084855
- (void).cxx_destruct;	// IMP=0x0000000000085ac8
@property(nonatomic) _Bool alwaysUnderline; // @synthesize alwaysUnderline=_alwaysUnderline;
@property(nonatomic) _Bool usesImage; // @synthesize usesImage=_usesImage;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000000855ba
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000085579
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000085538
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;	// IMP=0x00000000000851a7
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;	// IMP=0x000000000008504f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000084fba
- (void)_setupArrowImageForCurrentStyle;	// IMP=0x0000000000084ee4
- (void)_setupLearnMoreTextForCurrentStyle;	// IMP=0x0000000000084b75
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000084b61
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x0000000000084b4d
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 text:(id)arg3;	// IMP=0x0000000000084a31

@end
