//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKEvent, UIImageView, UILabel;

@interface CarplayConferenceTableViewCell
{
    EKEvent *_event;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    UILabel *_subLabel;	// 24 = 0x18
    UIImageView *_icon;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000078d8e
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000078cff
- (_Bool)canBecomeFocused;	// IMP=0x0010000000078cf7
- (void)cellWasTapped;	// IMP=0x0010000000078ab4
- (void)updateWithEvent:(id)arg1;	// IMP=0x001000000007867d
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000077de4

@end
