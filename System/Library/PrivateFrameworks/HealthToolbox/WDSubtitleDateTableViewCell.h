//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface WDSubtitleDateTableViewCell : UITableViewCell
{
    UILabel *_mainTextLabel;	// 8 = 0x8
    UILabel *_subtitleTextLabel;	// 16 = 0x10
    UILabel *_dateTextLabel;	// 24 = 0x18
    NSLayoutConstraint *_baselineConstraint;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000060d62
@property(retain, nonatomic) NSLayoutConstraint *baselineConstraint; // @synthesize baselineConstraint=_baselineConstraint;
@property(retain, nonatomic) UILabel *dateTextLabel; // @synthesize dateTextLabel=_dateTextLabel;
@property(retain, nonatomic) UILabel *subtitleTextLabel; // @synthesize subtitleTextLabel=_subtitleTextLabel;
@property(retain, nonatomic) UILabel *mainTextLabel; // @synthesize mainTextLabel=_mainTextLabel;
- (void)_updateForCurrentSizeCategory;	// IMP=0x0000000000060af9
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000609ff
- (void)setupConstraints;	// IMP=0x00000000000602b6
- (void)setupSubviews;	// IMP=0x0000000000060096
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000000006001e

@end

