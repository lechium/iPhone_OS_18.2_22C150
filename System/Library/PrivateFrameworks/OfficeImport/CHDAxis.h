//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHDTitle, EDResources, NSArray, NSString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDAxis : NSObject
{
    _Bool mReverseOrder;	// 8 = 0x8
    _Bool mReverseOrderOverridden;	// 9 = 0x9
    _Bool mSecondary;	// 10 = 0xa
    _Bool mDateTimeFormattingFlag;	// 11 = 0xb
    _Bool mLineVisible;	// 12 = 0xc
    _Bool mDeleted;	// 13 = 0xd
    _Bool mAutoMinimumValue;	// 14 = 0xe
    _Bool mAutoMaximumValue;	// 15 = 0xf
    _Bool mAutoCrossValue;	// 16 = 0x10
    _Bool mContentFormatDerived;	// 17 = 0x11
    int mAxisId;	// 20 = 0x14
    unsigned long long mContentFormatId;	// 24 = 0x18
    unsigned long long mFontIndex;	// 32 = 0x20
    double mScalingMaximum;	// 40 = 0x28
    double mScalingMinimum;	// 48 = 0x30
    int mOrientation;	// 56 = 0x38
    double mCrossAxisId;	// 64 = 0x40
    double mCrossesAt;	// 72 = 0x48
    int mMajorTickMark;	// 80 = 0x50
    int mMinorTickMark;	// 84 = 0x54
    int mAxisPosition;	// 88 = 0x58
    int mAxisType;	// 92 = 0x5c
    int mTickLabelPosition;	// 96 = 0x60
    CHDTitle *mTitle;	// 104 = 0x68
    OADGraphicProperties *mMinorGridLinesGraphicProperties;	// 112 = 0x70
    OADGraphicProperties *mMajorGridLinesGraphicProperties;	// 120 = 0x78
    OADGraphicProperties *mAxisGraphicProperties;	// 128 = 0x80
    int mCrossBetween;	// 136 = 0x88
    int mCrosses;	// 140 = 0x8c
    double mTickLabelRotation;	// 144 = 0x90
    _Bool mIsAutoRotation;	// 152 = 0x98
    unsigned long long mTickLabelColorIndex;	// 160 = 0xa0
    EDResources *mResources;	// 168 = 0xa8
    NSArray *mLabelEffects;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000038b72b
@property(readonly, copy) NSString *description;
- (void)setLabelEffects:(id)arg1;	// IMP=0x000000000038b6a3
- (id)labelEffects;	// IMP=0x000000000038b692
- (void)adjustAxisPositionForHorizontalChart;	// IMP=0x000000000038b68c
- (void)setTickLabelAutoRotation:(_Bool)arg1;	// IMP=0x0000000000176838
- (_Bool)isTickLabelAutoRotation;	// IMP=0x000000000038b680
- (void)setTickLabelRotationAngle:(double)arg1;	// IMP=0x0000000000176844
- (double)tickLabelRotationAngle;	// IMP=0x000000000038b672
- (void)setDateTimeFormattingFlag:(_Bool)arg1;	// IMP=0x000000000038b669
- (_Bool)isDateTimeFormattingFlag;	// IMP=0x000000000038b660
- (_Bool)isDate;	// IMP=0x000000000038b658
- (long long)key;	// IMP=0x0000000000176f02
- (void)setCrosses:(int)arg1;	// IMP=0x000000000020d466
- (int)crosses;	// IMP=0x000000000038b64c
- (void)setCrossBetween:(int)arg1;	// IMP=0x00000000001764c3
- (int)crossBetween;	// IMP=0x000000000038b640
- (void)setAxisGraphicProperties:(id)arg1;	// IMP=0x00000000001767c8
- (id)axisGraphicProperties;	// IMP=0x000000000038b62f
- (void)setMajorGridLinesGraphicProperties:(id)arg1;	// IMP=0x00000000001769eb
- (id)majorGridLinesGraphicProperties;	// IMP=0x00000000001888ff
- (void)setMinorGridLinesGraphicProperties:(id)arg1;	// IMP=0x0000000000176903
- (id)minorGridLinesGraphicProperties;	// IMP=0x000000000038b621
- (void)setTitle:(id)arg1;	// IMP=0x0000000000177fb4
- (id)title;	// IMP=0x000000000038b613
- (_Bool)isTickLabelVisible;	// IMP=0x000000000038b606
- (void)setTickLabelPosition:(int)arg1;	// IMP=0x0000000000176821
- (int)tickLabelPosition;	// IMP=0x000000000038b5fd
- (void)setAxisType:(int)arg1;	// IMP=0x000000000017656a
- (int)axisType;	// IMP=0x000000000038b5f4
- (void)setAxisPosition:(int)arg1;	// IMP=0x0000000000176590
- (int)axisPosition;	// IMP=0x00000000001843a2
- (void)setMinorTickMark:(int)arg1;	// IMP=0x0000000000176818
- (int)minorTickMark;	// IMP=0x000000000038b5eb
- (void)setMajorTickMark:(int)arg1;	// IMP=0x000000000017680f
- (int)majorTickMark;	// IMP=0x000000000038b5e2
- (void)setCrossesAt:(double)arg1;	// IMP=0x00000000001764b4
- (double)crossesAt;	// IMP=0x000000000038b5d7
- (void)setCrossAxisId:(double)arg1;	// IMP=0x000000000038b5cc
- (double)crossAxisIdForXml;	// IMP=0x000000000038b5b9
- (double)crossAxisId;	// IMP=0x000000000038b5ae
- (void)setOrientation:(int)arg1;	// IMP=0x000000000038b5a5
- (int)orientation;	// IMP=0x000000000038b59c
- (void)setScalingMinimum:(double)arg1;	// IMP=0x0000000000188e92
- (double)scalingMinimum;	// IMP=0x000000000018890d
- (void)setScalingMaximum:(double)arg1;	// IMP=0x0000000000177560
- (double)scalingMaximum;	// IMP=0x0000000000188918
- (void)setIsContentFormatDerivedFromDataPoints:(_Bool)arg1;	// IMP=0x0000000000182442
- (_Bool)isContentFormatDerivedFromDataPoints;	// IMP=0x000000000038b593
- (void)setContentFormat:(id)arg1;	// IMP=0x000000000018232d
- (id)defaultDateTimeContentFormat;	// IMP=0x000000000038b4f9
- (id)contentFormat;	// IMP=0x0000000000182006
- (void)setFont:(id)arg1;	// IMP=0x0000000000223879
- (id)font;	// IMP=0x0000000000185ecc
- (_Bool)isHorizontalPosition;	// IMP=0x000000000020d807
- (_Bool)isAutoCrossValue;	// IMP=0x000000000038b4f0
- (_Bool)isAutoMaximumValue;	// IMP=0x000000000038b4e7
- (_Bool)isAutoMinimumValue;	// IMP=0x000000000038b4de
- (void)setDeleted:(_Bool)arg1;	// IMP=0x000000000018a892
- (_Bool)isDeleted;	// IMP=0x000000000038b4d5
- (void)setLineVisible:(_Bool)arg1;	// IMP=0x000000000018a889
- (_Bool)isLineVisible;	// IMP=0x000000000038b4cc
- (void)setSecondary:(_Bool)arg1;	// IMP=0x000000000021acf1
- (_Bool)isSecondary;	// IMP=0x00000000001843ab
- (void)setReverseOrderOverridden:(_Bool)arg1;	// IMP=0x000000000038b4c3
- (_Bool)isReverseOrderOverridden;	// IMP=0x000000000038b4ba
- (void)setReverseOrder:(_Bool)arg1;	// IMP=0x00000000001764a8
- (_Bool)isReverseOrder;	// IMP=0x000000000017f496
- (void)setAxisId:(int)arg1;	// IMP=0x0000000000176561
- (int)axisIdForXml;	// IMP=0x000000000038b4ac
- (int)axisId;	// IMP=0x000000000038b4a3
- (id)initWithResources:(id)arg1;	// IMP=0x0000000000176399
- (id)tickLabelColor;	// IMP=0x000000000038b7a7
- (void)setTickLabelColorIndex:(unsigned long long)arg1;	// IMP=0x0000000000176852
- (unsigned long long)tickLabelColorIndex;	// IMP=0x000000000038b79a
- (void)setFontIndex:(unsigned long long)arg1;	// IMP=0x000000000018af1a
- (unsigned long long)fontIndex;	// IMP=0x000000000038b790
- (void)setContentFormatId:(unsigned long long)arg1;	// IMP=0x00000000001cd724
- (unsigned long long)contentFormatId;	// IMP=0x000000000038b786

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
