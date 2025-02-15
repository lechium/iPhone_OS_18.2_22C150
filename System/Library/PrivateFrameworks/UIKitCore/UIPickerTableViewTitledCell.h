//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString, NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface UIPickerTableViewTitledCell
{
    UILabel *_titleLabel;	// 184 = 0xb8
    _Bool _isAttributed;	// 192 = 0xc0
    UIColor *_textColor;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00000000012bf09c
@property(readonly, nonatomic) _Bool _isAttributed; // @synthesize _isAttributed;
@property(readonly, nonatomic) UILabel *_titleLabel; // @synthesize _titleLabel;
- (void)prepareForReuse;	// IMP=0x00000000012bf01a
@property(retain, nonatomic) NSAttributedString *attributedTitle;
@property(retain, nonatomic) NSString *title;
- (_Bool)_canBeReusedInPickerView;	// IMP=0x00000000012bef88
- (void)_setIsCenterCell:(_Bool)arg1 shouldModifyAlphaOfView:(_Bool)arg2;	// IMP=0x00000000012beea4
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 textColor:(id)arg3 forceTextAlignmentCentered:(_Bool)arg4;	// IMP=0x00000000012bec51

@end

