//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetricsKit/NSObject-Protocol.h>

@class MTPromise, NSDictionary, NSString;

@protocol MTEventRecorderDelegate <NSObject>
- (MTPromise *)recordEvent:(NSDictionary *)arg1 toTopic:(NSString *)arg2;

@optional
- (MTPromise *)recordEvent:(NSDictionary *)arg1;
- (MTPromise *)flushUnreportedEvents;
- (NSString *)sendMethod;
@end

