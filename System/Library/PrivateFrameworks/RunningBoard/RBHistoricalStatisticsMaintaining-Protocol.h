//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoard/NSObject-Protocol.h>

@protocol RBHistoricalStatisticsMaintaining <NSObject>
- (void)notifyMonitorCount:(unsigned long long)arg1;
- (void)notifyAssertionCount:(unsigned long long)arg1;
- (void)notifyProcessCount:(unsigned long long)arg1;
- (void)notifyClientCount:(unsigned long long)arg1;
- (id)initWithReportFrequency:(unsigned long long)arg1;
@end

