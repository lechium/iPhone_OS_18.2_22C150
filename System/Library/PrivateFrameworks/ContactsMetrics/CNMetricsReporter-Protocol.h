//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsMetrics/NSObject-Protocol.h>

@class NSMutableDictionary, NSString;

@protocol CNMetricsReporter <NSObject>
- (void)logSimpleEvent:(NSString *)arg1 forApplication:(NSString *)arg2 andLog:(_Bool)arg3;
- (void)sendDictionary:(NSMutableDictionary *)arg1 forEvent:(NSString *)arg2 andLog:(_Bool)arg3;
@end

