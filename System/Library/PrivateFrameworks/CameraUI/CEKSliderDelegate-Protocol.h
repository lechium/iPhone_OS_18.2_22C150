//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraUI/NSObject-Protocol.h>

@class CEKSlider;

@protocol CEKSliderDelegate <NSObject>

@optional
- (void)sliderDidEndScrolling:(CEKSlider *)arg1;
- (void)sliderWillEndScrolling:(CEKSlider *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)slider:(CEKSlider *)arg1 willUpdateValue:(double *)arg2 withVelocity:(double)arg3;
- (void)sliderDidScroll:(CEKSlider *)arg1;
- (void)sliderWillBeginScrolling:(CEKSlider *)arg1;
@end

