//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKit/NSObject-Protocol.h>

@class NSString, NTKComplication, UIView;
@protocol CDComplicationDisplay, NTKKeylineView;

@protocol NTKFaceViewComplicationFactory <NSObject>
- (UIView<NTKKeylineView> *)keylineViewForComplicationSlot:(NSString *)arg1;
- (void)configureComplicationView:(UIView *)arg1 forSlot:(NSString *)arg2;
- (UIView<CDComplicationDisplay> *)newLegacyViewForComplication:(NTKComplication *)arg1 family:(long long)arg2 slot:(NSString *)arg3;
- (void)loadLayoutRules;

@optional
- (long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(NSString *)arg2;
- (unsigned long long)layoutStyleForSlot:(NSString *)arg1;
- (void)curvedComplicationCircleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 circleCenter:(struct CGPoint *)arg4 interior:(_Bool *)arg5 forSlot:(NSString *)arg6;
- (long long)complicationPickerStyleForSlot:(NSString *)arg1;
@end

