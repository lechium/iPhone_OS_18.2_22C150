//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UISliderConfiguration-Protocol.h>

@class NSArray;

@protocol _UISliderTickConfiguration <_UISliderConfiguration>
+ (id)new;
@property(nonatomic) float snappingDistance;
@property(readonly, copy, nonatomic) NSArray *ticks;
@property(readonly, nonatomic) long long behavior;
- (_Bool)adjustPositionForTargetPosition:(float)arg1 adjustedPosition:(float *)arg2 startPosition:(float *)arg3 endPosition:(float *)arg4;
- (id)init;
- (id)initWithNumberOfTicks:(unsigned long long)arg1 behavior:(long long)arg2;
- (id)initWithTicks:(NSArray *)arg1 behavior:(long long)arg2;
@end
