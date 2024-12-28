//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHDChart, CHDChartType, CHDData, CHDDataLabel, CHDDataValue, CHDErrorBar, CHDFormula, EDCollection, EDKeyedCollection, NSString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDSeries : NSObject
{
    CHDChart *mChart;	// 8 = 0x8
    CHDChartType *mChartType;	// 16 = 0x10
    unsigned long long mOrder;	// 24 = 0x18
    unsigned long long mStyleIndex;	// 32 = 0x20
    CHDFormula *mName;	// 40 = 0x28
    CHDDataValue *mLastCachedName;	// 48 = 0x30
    CHDData *mValueData;	// 56 = 0x38
    CHDData *mCategoryData;	// 64 = 0x40
    EDKeyedCollection *mDataValuePropertiesCollection;	// 72 = 0x48
    EDCollection *mTrendlinesCollection;	// 80 = 0x50
    CHDErrorBar *mErrorBarX;	// 88 = 0x58
    CHDErrorBar *mErrorBarY;	// 96 = 0x60
    CHDDataLabel *mDefaultDataLabel;	// 104 = 0x68
    OADGraphicProperties *mGraphicProperties;	// 112 = 0x70
    _Bool mDateTimeFormattingFlag;	// 120 = 0x78
    _Bool mHiddenFlag;	// 121 = 0x79
}

+ (id)seriesWithChart:(id)arg1;	// IMP=0x00100000001ebc3e
- (void).cxx_destruct;	// IMP=0x000000000038fc97
@property(readonly, copy) NSString *description;
- (_Bool)isEmpty;	// IMP=0x000000000017d45a
- (id)defaultSeriesNameForIndex:(unsigned long long)arg1;	// IMP=0x000000000017e276
- (void)setHiddenFlag:(_Bool)arg1;	// IMP=0x000000000022f9f0
- (_Bool)isHidden;	// IMP=0x000000000017c05d
- (_Bool)isDateTimeFormattingFlag;	// IMP=0x0000000000181ac1
- (void)setDateTimeFormattingFlag:(_Bool)arg1;	// IMP=0x0000000000181ab8
- (void)setGraphicProperties:(id)arg1;	// IMP=0x000000000017bacb
- (id)graphicProperties;	// IMP=0x000000000017bef2
- (void)setDefaultDataLabel:(id)arg1;	// IMP=0x00000000001ead9f
- (id)defaultDataLabel;	// IMP=0x000000000017bb0f
- (void)setErrorBarYAxis:(id)arg1;	// IMP=0x000000000018a280
- (id)errorBarYAxis;	// IMP=0x000000000018801e
- (void)setErrorBarXAxis:(id)arg1;	// IMP=0x00000000001ebe15
- (id)errorBarXAxis;	// IMP=0x00000000001ebe07
- (_Bool)hasErrorBars;	// IMP=0x000000000038fc42
- (void)setErrorBar:(id)arg1;	// IMP=0x000000000018a049
- (_Bool)hasTrendlines;	// IMP=0x000000000038fc1c
- (void)setTrendlineCollection:(id)arg1;	// IMP=0x00000000001ebdc3
- (id)trendlineCollection;	// IMP=0x00000000001ebdb5
- (void)setDataValuePropertiesCollection:(id)arg1;	// IMP=0x000000000022b31f
- (id)dataValuePropertiesCollection;	// IMP=0x000000000017b683
- (unsigned long long)categoryCount;	// IMP=0x0000000000225ecb
- (void)setCategoryData:(id)arg1;	// IMP=0x000000000017b5b8
- (id)categoryData;	// IMP=0x000000000017c55c
- (void)setValueData:(id)arg1;	// IMP=0x000000000017b46a
- (id)valueData;	// IMP=0x000000000017c50a
- (void)setName:(id)arg1;	// IMP=0x000000000017ae03
- (id)name;	// IMP=0x000000000017c2ed
- (void)setLastCachedName:(id)arg1;	// IMP=0x000000000017e5b7
- (id)lastCachedName;	// IMP=0x000000000017c2fb
- (void)setStyleIndex:(unsigned long long)arg1;	// IMP=0x000000000017b8f2
- (unsigned long long)styleIndex;	// IMP=0x000000000017bf00
- (void)setOrder:(unsigned long long)arg1;	// IMP=0x000000000017a655
- (unsigned long long)order;	// IMP=0x000000000038fc12
- (long long)key;	// IMP=0x000000000017c2e3
- (void)setChartType:(id)arg1;	// IMP=0x000000000017c066
- (id)chart;	// IMP=0x0000000000189d2f
- (id)chartType;	// IMP=0x00000000001eba29
- (void)clearBackPointers;	// IMP=0x00000000001edcf2
- (id)shallowCopy;	// IMP=0x00000000001ebb23
- (id)initWithChart:(id)arg1;	// IMP=0x000000000017a577

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
