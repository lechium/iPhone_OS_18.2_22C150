//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHDChart, CHDChartType, CHDSeries, EDResources, EXOfficeArtState, OADParagraphProperties, OCPPackagePart;
@protocol CHAutoStyling;

__attribute__((visibility("hidden")))
@interface CHXReadState : NSObject
{
    EXOfficeArtState *mDrawingState;	// 8 = 0x8
    CHDChart *mChart;	// 16 = 0x10
    EDResources *mResources;	// 24 = 0x18
    OCPPackagePart *mChartPart;	// 32 = 0x20
    CHDChartType *mCurrentChartType;	// 40 = 0x28
    CHDSeries *mCurrentSeries;	// 48 = 0x30
    OADParagraphProperties *mDefaultTextProperties;	// 56 = 0x38
    _Bool mDefaultTextPropertiesHaveExplicitFontSize;	// 64 = 0x40
    id <CHAutoStyling> mAutoStyling;	// 72 = 0x48
    _Bool mIgnoreFormulas;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000396f81
@property(nonatomic) _Bool ignoreFormulas; // @synthesize ignoreFormulas=mIgnoreFormulas;
- (id)autoStyling;	// IMP=0x0000000000396f61
- (void)popDefaultTextProperties;	// IMP=0x0000000000396efd
- (void)pushDefaultTextProperties:(id)arg1;	// IMP=0x0000000000396e9f
- (void)popTitleTextProperties;	// IMP=0x0000000000396e3b
- (void)pushTitleTextProperties:(_Bool)arg1;	// IMP=0x0000000000396d36
- (void)setDefaultTextPropertiesHaveExplicitFontSize:(_Bool)arg1;	// IMP=0x0000000000396d2d
- (void)setDefaultTextProperties:(id)arg1;	// IMP=0x0000000000396ce9
- (id)defaultTextProperties;	// IMP=0x0000000000396cdb
- (id)exState;	// IMP=0x0000000000396cc5
- (void)setCurrentSeries:(id)arg1;	// IMP=0x0000000000396c81
- (id)currentSeries;	// IMP=0x0000000000396c73
- (void)setCurrentChartType:(id)arg1;	// IMP=0x0000000000396c2f
- (id)currentChartType;	// IMP=0x0000000000396c21
- (void)setChartPart:(id)arg1;	// IMP=0x0000000000396bdd
- (id)chartPart;	// IMP=0x0000000000396bcf
- (void)setResources:(id)arg1;	// IMP=0x0000000000396b8b
- (id)resources;	// IMP=0x0000000000396b7d
- (void)setChart:(id)arg1;	// IMP=0x00000000003969c4
- (id)chart;	// IMP=0x00000000003969b6
- (id)drawingState;	// IMP=0x00000000003969a8
- (id)initWithDrawingState:(id)arg1;	// IMP=0x0000000000396929

@end

