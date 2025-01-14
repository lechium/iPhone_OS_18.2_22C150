//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIImageView, UILabel;

@interface TransitSchedulesHeaderView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    UIImageView *_lineImageryView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000cc8b8d
- (void)setArtwork:(id)arg1;	// IMP=0x0010000000cc8662
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)createViewsWithTitle:(id)arg1 subtitle:(id)arg2 artwork:(id)arg3;	// IMP=0x0010000000cc7d27
- (id)initWithTransitLine:(id)arg1;	// IMP=0x0010000000cc7c26

@end

