//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface RoutingAppLaunchRecord : NSObject
{
    NSMutableArray *_recentlyLaunchedApps;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000b9507e
- (void).cxx_destruct;	// IMP=0x0020000000b95097
@property(retain, nonatomic) NSMutableArray *recentlyLaunchedApps; // @synthesize recentlyLaunchedApps=_recentlyLaunchedApps;
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000b94fd3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000b94fb0
- (void)recordAppLaunch:(id)arg1;	// IMP=0x0010000000b94f03
- (id)appIDsSortedByMostRecentLaunch:(id)arg1;	// IMP=0x0010000000b94c28
- (id)initWithRecentlyLaunchedApps:(id)arg1;	// IMP=0x0010000000b94b88
- (id)init;	// IMP=0x0010000000b94b6f
- (id)rankedRoutingAppProxiesWithProxies:(id)arg1;	// IMP=0x00100000009c8afa

@end
