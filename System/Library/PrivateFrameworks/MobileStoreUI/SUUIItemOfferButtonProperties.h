//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAFilter, NSAttributedString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface SUUIItemOfferButtonProperties : NSObject
{
    _Bool _hasBorderView;	// 8 = 0x8
    _Bool _borderCornerRadiusMatchesHalfBoundingDimension;	// 9 = 0x9
    _Bool _hasTitleLabel;	// 10 = 0xa
    _Bool _universal;	// 11 = 0xb
    _Bool _progressIndeterminate;	// 12 = 0xc
    _Bool _cancelRecognizer;	// 13 = 0xd
    _Bool _restores;	// 14 = 0xe
    UIColor *_borderBackgroundColor;	// 16 = 0x10
    UIColor *_borderColor;	// 24 = 0x18
    CAFilter *_borderCompositingFilter;	// 32 = 0x20
    double _borderWidth;	// 40 = 0x28
    double _borderCornerRadius;	// 48 = 0x30
    NSAttributedString *_attributedText;	// 56 = 0x38
    UIColor *_textColor;	// 64 = 0x40
    long long _confirmationTitleStyle;	// 72 = 0x48
    long long _titleStyle;	// 80 = 0x50
    UIImage *_image;	// 88 = 0x58
    UIImage *_borderedImage;	// 96 = 0x60
    long long _progressType;	// 104 = 0x68
    double _progress;	// 112 = 0x70
    double _alpha;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000001918f5
@property(nonatomic) _Bool restores; // @synthesize restores=_restores;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool cancelRecognizer; // @synthesize cancelRecognizer=_cancelRecognizer;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool progressIndeterminate; // @synthesize progressIndeterminate=_progressIndeterminate;
@property(nonatomic) long long progressType; // @synthesize progressType=_progressType;
@property(retain, nonatomic) UIImage *borderedImage; // @synthesize borderedImage=_borderedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long titleStyle; // @synthesize titleStyle=_titleStyle;
@property(nonatomic) long long confirmationTitleStyle; // @synthesize confirmationTitleStyle=_confirmationTitleStyle;
@property(nonatomic) _Bool universal; // @synthesize universal=_universal;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(nonatomic) _Bool hasTitleLabel; // @synthesize hasTitleLabel=_hasTitleLabel;
@property(nonatomic) _Bool borderCornerRadiusMatchesHalfBoundingDimension; // @synthesize borderCornerRadiusMatchesHalfBoundingDimension=_borderCornerRadiusMatchesHalfBoundingDimension;
@property(nonatomic) double borderCornerRadius; // @synthesize borderCornerRadius=_borderCornerRadius;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) CAFilter *borderCompositingFilter; // @synthesize borderCompositingFilter=_borderCompositingFilter;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *borderBackgroundColor; // @synthesize borderBackgroundColor=_borderBackgroundColor;
@property(nonatomic) _Bool hasBorderView; // @synthesize hasBorderView=_hasBorderView;

@end
