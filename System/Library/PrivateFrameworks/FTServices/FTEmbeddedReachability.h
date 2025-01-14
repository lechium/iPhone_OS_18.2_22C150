//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FTEmbeddedReachability : NSObject
{
    _Bool localWiFiRef;	// 8 = 0x8
    struct __SCNetworkReachability *reachabilityRef;	// 16 = 0x10
}

+ (id)reachabilityForLocalWiFi;	// IMP=0x00600000000113c5
+ (id)reachabilityForInternetConnection;	// IMP=0x0060000000011369
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x00600000000112dd
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x0060000000011219
- (long long)currentReachabilityStatus;	// IMP=0x000000000001175f
- (_Bool)connectionRequired;	// IMP=0x000000000001166a
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x000000000001162b
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;	// IMP=0x0000000000011431
- (void)dealloc;	// IMP=0x00000000000111d2

@end

