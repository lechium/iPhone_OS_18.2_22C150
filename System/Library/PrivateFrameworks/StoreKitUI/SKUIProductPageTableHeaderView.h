//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductPageTableHeaderView : UIView
{
    struct UIEdgeInsets _contentInsets;	// 8 = 0x8
    UILabel *_titleLabel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000022ab7f
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000022aaae
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000022aa00
- (void)layoutSubviews;	// IMP=0x000000000022a8f9
@property(copy, nonatomic) NSString *title;

@end

