//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdServices/NSObject-Protocol.h>

@class NSDate;

@protocol AAAttribution_XPC <NSObject>
- (void)attributionAnalytics:(unsigned long long)arg1 end:(unsigned long long)arg2 Handler:(void (^)(_Bool, NSError *))arg3;
- (void)attributionTokenRequestTimestamp:(NSDate *)arg1 interval:(unsigned long long)arg2 completionHandler:(void (^)(AAAttributionResult *))arg3;
@end
