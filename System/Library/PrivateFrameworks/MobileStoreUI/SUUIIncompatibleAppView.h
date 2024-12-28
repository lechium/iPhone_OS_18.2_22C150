//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SUUIIncompatibleAppView : UIView
{
    NSMutableArray *_buttons;	// 8 = 0x8
    UIImageView *_iconView;	// 16 = 0x10
    UILabel *_messageLabel;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002671f5
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000267135
- (void)layoutSubviews;	// IMP=0x00000000002669c6
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *message;
@property(retain, nonatomic) UIImage *iconImage;
- (void)removeButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;	// IMP=0x00000000002663cf
- (id)addButtonWithTitle:(id)arg1;	// IMP=0x0000000000266262

@end
