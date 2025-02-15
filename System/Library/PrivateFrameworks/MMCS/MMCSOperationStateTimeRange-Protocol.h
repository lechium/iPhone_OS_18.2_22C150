//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MMCS/NSObject-Protocol.h>

@class NSDate;
@protocol MMCSOperationStateTimeRange;

@protocol MMCSOperationStateTimeRange <NSObject>
@property(readonly) double absoluteStop;
@property(readonly) double absoluteStart;
@property(readonly) double duration;
@property(readonly) NSDate *startDate;
@property(readonly) unsigned long long operationState;
- (long long)compareStopTime:(id <MMCSOperationStateTimeRange>)arg1;
- (long long)compareStartTime:(id <MMCSOperationStateTimeRange>)arg1;
@end

