//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC4Maps31NavigationProgressCapturingTask : NSObject
{
    MISSING_TYPE *platformController;	// 8 = 0x8
    MISSING_TYPE *routeInfoProvider;	// 16 = 0x10
    MISSING_TYPE *session;	// 24 = 0x18
    MISSING_TYPE *activeRouteIdentifier;	// 1919250549 = 0x72657075
}

+ (long long)creationPreference;	// IMP=0x0020000000215b70
- (void).cxx_destruct;	// IMP=0x0020000000215a10
- (id)init;	// IMP=0x00100000002159b0
- (void)navigationRouteInterrupter:(id)arg1 finishedInteruptingEntryWithIdentifier:(id)arg2;	// IMP=0x00100000002158e0
- (id)initWithPlatformController:(id)arg1 session:(id)arg2 navigationService:(id)arg3;	// IMP=0x0010000000215880
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x0010000000215b90
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x0010000000215b80
- (void)navigationService:(id)arg1 willEndWithReason:(unsigned long long)arg2;	// IMP=0x0010000000216e60
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00100000002167a0

@end
