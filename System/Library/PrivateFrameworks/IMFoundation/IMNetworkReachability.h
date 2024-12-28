//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMNetworkReachability : NSObject
{
    _Bool localWiFiRef;	// 8 = 0x8
    struct __SCNetworkReachability *reachabilityRef;	// 16 = 0x10
}

+ (id)reachabilityForLocalWiFi;	// IMP=0x0060000000040ce5
+ (id)reachabilityForInternetConnection;	// IMP=0x0060000000040c89
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x0060000000040bfd
+ (id)reachabilityWithHostName:(id)arg1;	// IMP=0x0060000000040b39
- (long long)currentReachabilityStatus;	// IMP=0x0000000000040f8a
- (long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x0000000000040f4b
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;	// IMP=0x0000000000040d51
- (void)dealloc;	// IMP=0x0000000000040af2

@end
