//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IntentsServices/NSObject-Protocol.h>

@class INSAnalytics, NSDictionary;

@protocol INSAnalyticsObserver <NSObject>
- (void)analytics:(INSAnalytics *)arg1 needsToLogEventWithType:(long long)arg2 context:(NSDictionary *)arg3 contextNoCopy:(_Bool)arg4;
@end

