//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UILabel, _UIDatePickerMode;

__attribute__((visibility("hidden")))
@interface UIDatePickerContentView : UIView
{
    struct {
        unsigned int isAmPm:1;
        unsigned int useDigitFont:1;
    } _datePickerContentViewFlags;	// 160 = 0xa0
    UILabel *_titleLabel;	// 168 = 0xa8
    double _titleLabelMaxX;	// 176 = 0xb0
    long long _titleAlignment;	// 184 = 0xb8
    _UIDatePickerMode *_mode;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000000129ceeb
@property(retain, nonatomic) _UIDatePickerMode *mode; // @synthesize mode=_mode;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(nonatomic) double titleLabelMaxX; // @synthesize titleLabelMaxX=_titleLabelMaxX;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;	// IMP=0x000000000129ca94
@property(nonatomic) _Bool useDigitFont;
@property(nonatomic) _Bool isAmPm;
- (_Bool)_canBeReusedInPickerView;	// IMP=0x000000000129c9c6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000129c82a
- (id)initWithMode:(id)arg1;	// IMP=0x000000000129c7ab

@end
