//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface SKUIFloatingOverlayView : UIView
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    UIView *_contentView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000033bb3c
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000033bac7
- (void)layoutSubviews;	// IMP=0x000000000033ba2b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000033b6d8

@end
