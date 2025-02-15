//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIColor, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductPagePlaceholderView : UIView
{
    UIImageView *_imageView;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    UIColor *_textColor;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001eb93f
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001eb888
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000001eb7fa
- (void)layoutSubviews;	// IMP=0x00000000001eb60b
- (id)initWithPlaceholderString:(id)arg1 isPad:(_Bool)arg2;	// IMP=0x00000000001eb303

@end

