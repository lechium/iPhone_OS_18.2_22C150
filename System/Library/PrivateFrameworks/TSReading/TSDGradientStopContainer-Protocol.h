//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSMutableCopying-Protocol.h>
#import <TSReading/NSObject-Protocol.h>

@class NSArray, TSDGradientStop, TSUColor;

@protocol TSDGradientStopContainer <NSObject, NSMutableCopying>
@property(retain, nonatomic) TSUColor *lastColor;
@property(retain, nonatomic) TSUColor *firstColor;
@property(retain, nonatomic) NSArray *gradientStops;
- (void)setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;
- (void)setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(TSUColor *)arg2;
- (void)moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
- (void)evenlyDistributeStops;
- (void)reverseStopOrder;
- (TSDGradientStop *)removeStopAtIndex:(unsigned long long)arg1;
- (void)removeStop:(TSDGradientStop *)arg1;
- (TSDGradientStop *)insertStopAtFraction:(double)arg1 withColor:(TSUColor *)arg2;
- (void)swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;
- (TSDGradientStop *)insertStopAtFraction:(double)arg1;
- (void)insertGradientStop:(TSDGradientStop *)arg1;
@end

