//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIButton, UILabel;
@protocol CHWorkoutDetailExpandingHeaderViewDelegate;

@interface CHWorkoutDetailExpandingHeaderView : UIView
{
    _Bool _expanded;	// 8 = 0x8
    id <CHWorkoutDetailExpandingHeaderViewDelegate> _delegate;	// 16 = 0x10
    long long _section;	// 24 = 0x18
    UIView *_contentView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UIButton *_expandButton;	// 48 = 0x30
    UIView *_separatorView;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
}

+ (double)preferredHeight;	// IMP=0x00400000000c4673
- (void).cxx_destruct;	// IMP=0x00200000000c598a
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) __weak id <CHWorkoutDetailExpandingHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)restoreExpandedState:(_Bool)arg1;	// IMP=0x00100000000c586a
- (void)_transformButtonForExpandedState:(_Bool)arg1;	// IMP=0x00100000000c5756
- (void)_buttonTapped:(id)arg1;	// IMP=0x00100000000c56bb
- (void)configureWithTitle:(id)arg1 section:(long long)arg2 expanded:(_Bool)arg3;	// IMP=0x00100000000c55a8
- (void)_createSeparator;	// IMP=0x00100000000c51b6
- (void)_createExpandButton;	// IMP=0x00100000000c4d76
- (void)_createTitleLabel;	// IMP=0x00100000000c4acb
- (void)_createContentView;	// IMP=0x00100000000c47a9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000c46e4

@end
