//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextField.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface SUUIRedeemTextField : UITextField
{
    UIView *_bottomBorderView;	// 8 = 0x8
    UIView *_topBorderView;	// 16 = 0x10
    UIView *_backdropView;	// 24 = 0x18
    _Bool _backdropBackground;	// 32 = 0x20
    _Bool _suppressBorder;	// 33 = 0x21
}

- (void).cxx_destruct;	// IMP=0x0000000000389283
@property(nonatomic) _Bool suppressBorder; // @synthesize suppressBorder=_suppressBorder;
@property(nonatomic) _Bool backdropBackground; // @synthesize backdropBackground=_backdropBackground;
- (void)layoutSubviews;	// IMP=0x000000000038911b
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;	// IMP=0x00000000003890aa
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000389039
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000388fc8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000388cbf

@end
