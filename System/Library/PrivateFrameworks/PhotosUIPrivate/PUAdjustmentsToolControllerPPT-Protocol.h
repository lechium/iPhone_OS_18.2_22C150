//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol PUAdjustmentsToolControllerPPT
- (double)ppt_valueIncrementForSelectedSlider;
- (double)ppt_visibleScaleValueForSelectedSlider;
- (void)ppt_selectSliderNamed:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)ppt_setSteps:(long long)arg1;
- (void)ppt_scrollSelectedSliderByDelta;
- (void)ppt_selectBWSlider:(void (^)(void))arg1;
- (void)ppt_selectColorSlider:(void (^)(void))arg1;
- (void)ppt_selectLightSlider:(void (^)(void))arg1;
@end
