//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewAnimating-Protocol.h>

@protocol UITimingCurveProvider;

@protocol UIViewImplicitlyAnimating <UIViewAnimating>

@optional
- (void)continueAnimationWithTimingParameters:(id <UITimingCurveProvider>)arg1 durationFactor:(double)arg2;
- (void)addCompletion:(void (^)(long long))arg1;
- (void)addAnimations:(void (^)(void))arg1;
- (void)addAnimations:(void (^)(void))arg1 delayFactor:(double)arg2;
@end

