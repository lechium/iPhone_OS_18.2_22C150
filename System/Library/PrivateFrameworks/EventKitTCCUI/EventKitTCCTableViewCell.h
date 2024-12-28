//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface EventKitTCCTableViewCell : UITableViewCell
{
    UIImageView *_symbolImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
}

+ (id)reuseIdentifier;	// IMP=0x00600000000028ca
- (void).cxx_destruct;	// IMP=0x0000000000003eb4
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *symbolImageView; // @synthesize symbolImageView=_symbolImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 title:(id)arg3 subtitle:(id)arg4 symbolName:(id)arg5 imageColor:(id)arg6;	// IMP=0x000000000000295f

@end
