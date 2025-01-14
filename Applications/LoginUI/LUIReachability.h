//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface LUIReachability : NSObject
{
    _Bool localWiFiRef;	// 8 = 0x8
    struct __SCNetworkReachability *reachabilityRef;	// 16 = 0x10
    _Bool _isWaitingForNetwork;	// 24 = 0x18
    NSMutableArray *_networkObservers;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_observerQueue;	// 40 = 0x28
}

+ (id)reachabilityForLocalWiFi;	// IMP=0x00200000000339aa
+ (id)reachabilityForInternetConnection;	// IMP=0x001000000003394e
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;	// IMP=0x00100000000338fd
- (void).cxx_destruct;	// IMP=0x0020000000034188
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property(nonatomic) _Bool isWaitingForNetwork; // @synthesize isWaitingForNetwork=_isWaitingForNetwork;
@property(retain, nonatomic) NSMutableArray *networkObservers; // @synthesize networkObservers=_networkObservers;
- (void)_networkReachabilityChanged:(unsigned int)arg1;	// IMP=0x0010000000034037
- (void)_observeNetworkReachability;	// IMP=0x0010000000033f6c
- (void)_queue_notifyObservers;	// IMP=0x0010000000033dcc
- (void)waitForNetworkAndExecuteBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000033c74
- (unsigned long long)currentReachabilityStatus;	// IMP=0x0010000000033ba0
- (void)_printReachabilityStatus:(unsigned long long)arg1;	// IMP=0x0010000000033ad3
- (unsigned long long)networkStatusForFlags:(unsigned int)arg1;	// IMP=0x0010000000033a9a
- (unsigned long long)localWiFiStatusForFlags:(unsigned int)arg1;	// IMP=0x0010000000033a8d
- (id)init;	// IMP=0x0010000000033a16

@end

