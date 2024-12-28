//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel;

@interface RoutePlanningAddStopCell : UITableViewCell
{
    UIImageView *_iconView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    NSLayoutConstraint *_imageContainerViewWidthConstraint;	// 24 = 0x18
    NSLayoutConstraint *_iconViewWidthConstraint;	// 32 = 0x20
    NSLayoutConstraint *_iconViewHeightConstraint;	// 40 = 0x28
    _Bool _enabled;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000b17cdf
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)_updateIconImage;	// IMP=0x0010000000b17c0e
- (void)_updateConstraints;	// IMP=0x0010000000b17aec
- (void)_updateFonts;	// IMP=0x0010000000b17a28
- (void)_setEnabled:(_Bool)arg1;	// IMP=0x0010000000b1796c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000b177e5
- (void)setIconViewTag:(long long)arg1;	// IMP=0x0010000000b177c8
- (id)init;	// IMP=0x0010000000b16c73

@end
