//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FitnessUI/NSObject-Protocol.h>

@class FUScrollWheel;

@protocol FUScrollWheelDelegate <NSObject>

@optional
- (_Bool)scrollWheelShouldBecomeFirstResponder:(FUScrollWheel *)arg1;
- (void)tappedScrollWheel:(FUScrollWheel *)arg1;
- (void)scrollWheel:(FUScrollWheel *)arg1 didChangeCurrentIndexTo:(unsigned long long)arg2;
@end

