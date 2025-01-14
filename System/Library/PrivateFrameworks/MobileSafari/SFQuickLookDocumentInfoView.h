//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, NSString, UIImageView, UILabel, UIStackView;

__attribute__((visibility("hidden")))
@interface SFQuickLookDocumentInfoView : UIView
{
    UIStackView *_stackView;	// 8 = 0x8
    UILabel *_fileNameLabel;	// 16 = 0x10
    UILabel *_fileSizeLabel;	// 24 = 0x18
    UIView *_spacingView;	// 32 = 0x20
    NSLayoutConstraint *_iconHeightConstraint;	// 40 = 0x28
    NSLayoutConstraint *_iconWidthConstraint;	// 48 = 0x30
    NSLayoutConstraint *_lineHeightBetweenIconAndFileNameLabelConstraint;	// 56 = 0x38
    UIImageView *_iconImageView;	// 64 = 0x40
    NSString *_fileName;	// 72 = 0x48
    NSString *_fileSize;	// 80 = 0x50
    NSString *_fileType;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000dc7ff
@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) NSString *fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)_updateDocumentSizeLabel;	// IMP=0x00000000000dc586
- (void)_updatePropertiesDefinedByContentSizeCategory;	// IMP=0x00000000000dc4a7
- (void)_updateOrientationBasedConstraints;	// IMP=0x00000000000dc3df
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000dbc61

@end

