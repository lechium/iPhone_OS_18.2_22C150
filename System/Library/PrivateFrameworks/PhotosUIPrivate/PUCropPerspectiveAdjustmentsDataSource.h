//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, PEValuesCalculator, PICompositionController, PUAdjustmentInfo;
@protocol PUCropPerspectiveAdjustmentsDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface PUCropPerspectiveAdjustmentsDataSource : NSObject
{
    long long _orientation;	// 8 = 0x8
    PUAdjustmentInfo *_straightenAngleInfo;	// 16 = 0x10
    PUAdjustmentInfo *_pitchAngleInfo;	// 24 = 0x18
    PUAdjustmentInfo *_yawAngleInfo;	// 32 = 0x20
    NSMutableDictionary *_valueScaleForKey;	// 40 = 0x28
    NSMutableArray *_adjustmentInfoSections;	// 48 = 0x30
    id <PUCropPerspectiveAdjustmentsDataSourceDelegate> _delegate;	// 56 = 0x38
    PICompositionController *_compositionController;	// 64 = 0x40
    PEValuesCalculator *_valuesCalculator;	// 72 = 0x48
    NSString *_lastAdjustmentLocalizedName;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000640066
@property(copy, nonatomic) NSString *lastAdjustmentLocalizedName; // @synthesize lastAdjustmentLocalizedName=_lastAdjustmentLocalizedName;
@property(retain, nonatomic) PEValuesCalculator *valuesCalculator; // @synthesize valuesCalculator=_valuesCalculator;
@property(retain, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
@property(nonatomic) __weak id <PUCropPerspectiveAdjustmentsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *adjustmentInfoSections; // @synthesize adjustmentInfoSections=_adjustmentInfoSections;
- (void)compositionControllerDidChange;	// IMP=0x000000000063ffcd
- (void)resetInfoAtIndexPath:(id)arg1;	// IMP=0x000000000063feb6
- (void)modifyValue:(double)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000063fdd8
- (void)_modifyAdjustmentForInfo:(id)arg1;	// IMP=0x000000000063fc4d
- (void)setAdjustmentEnabled:(_Bool)arg1 atIndexPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000063fb0e
- (void)endInteractiveChange;	// IMP=0x000000000063fa9e
- (void)beginInteractiveChange;	// IMP=0x000000000063fa61
- (_Bool)canModifyAdjustmentAtIndexPath:(id)arg1;	// IMP=0x000000000063fa2e
- (id)infoForItemAtIndexPath:(id)arg1;	// IMP=0x000000000063f885
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x000000000063f7c6
- (long long)numberOfSections;	// IMP=0x000000000063f782
- (void)_updateAdjustmentInfos;	// IMP=0x000000000063f1e5
- (void)_enableNonAutoAjustments:(_Bool)arg1;	// IMP=0x000000000063ef43
- (id)_geometryAdjustmentInfos;	// IMP=0x000000000063eaf2
- (void)_createAdjustmentInfos;	// IMP=0x000000000063eaa5
- (id)_newAdjustmentInfoWithAdjustmentKey:(id)arg1 settingKey:(id)arg2 attributeKey:(id)arg3;	// IMP=0x000000000063ea8a
- (id)_newAdjustmentInfoWithIdentifier:(id)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3 attributeKey:(id)arg4;	// IMP=0x000000000063e994
- (void)_setDefaultsForInfo:(id)arg1;	// IMP=0x000000000063e72b
- (id)renderer;	// IMP=0x000000000063e6cc
- (void)setOrientation:(long long)arg1;	// IMP=0x000000000063dca3
- (void)setupWithCompositionController:(id)arg1 valuesCalculator:(id)arg2;	// IMP=0x000000000063dbfe
- (id)init;	// IMP=0x000000000063dba0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
