//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class MUImpressionElement, NSDate;

@protocol MUImpressionsLogging <NSObject>
- (void)logImpressionElementDidExit:(MUImpressionElement *)arg1 usingEnterDate:(NSDate *)arg2 exitDate:(NSDate *)arg3;
- (void)logImpressionElementDidEnter:(MUImpressionElement *)arg1 onDate:(NSDate *)arg2;
@end

