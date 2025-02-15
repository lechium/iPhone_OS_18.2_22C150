//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class ARUIRingsView, UIImageView, UILabel;

@interface CHFriendListTableViewCell : UITableViewCell
{
    long long _displayMode;	// 8 = 0x8
    ARUIRingsView *_ringsView;	// 16 = 0x10
    UILabel *_detailLineOneLabel;	// 24 = 0x18
    UILabel *_detailLineTwoLabel;	// 32 = 0x20
    UIImageView *_competitionBadgeView;	// 40 = 0x28
}

+ (double)measuredHeightWithDisplayMode:(long long)arg1 formattingManager:(id)arg2;	// IMP=0x0040000000018d7b
+ (double)preferredHeight;	// IMP=0x0010000000018d6d
- (void).cxx_destruct;	// IMP=0x0020000000019986
@property(retain, nonatomic) UIImageView *competitionBadgeView; // @synthesize competitionBadgeView=_competitionBadgeView;
@property(retain, nonatomic) UILabel *detailLineTwoLabel; // @synthesize detailLineTwoLabel=_detailLineTwoLabel;
@property(retain, nonatomic) UILabel *detailLineOneLabel; // @synthesize detailLineOneLabel=_detailLineOneLabel;
@property(retain, nonatomic) ARUIRingsView *ringsView; // @synthesize ringsView=_ringsView;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
- (double)_lastBaseline;	// IMP=0x001000000001986c
- (void)setFriend:(id)arg1 snapshot:(id)arg2 formattingManager:(id)arg3 animated:(_Bool)arg4;	// IMP=0x0010000000018ed6
- (void)_systemTextSizeChanged;	// IMP=0x0010000000018d67
- (void)layoutSubviews;	// IMP=0x00100000000183f6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000018399
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000001834d
- (void)_setupCell;	// IMP=0x0010000000017ea0

@end

