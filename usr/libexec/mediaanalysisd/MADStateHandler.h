//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MADStateHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_breadcrumbs;	// 16 = 0x10
    unsigned long long _knownRiskState;	// 24 = 0x18
    NSDate *_timeoutRiskEntryTime;	// 32 = 0x20
}

+ (id)sharedStateHandler;	// IMP=0x004000000017f1cd
- (void).cxx_destruct;	// IMP=0x002000000017f966
- (unsigned long long)currentTimeoutRiskAndStartTime:(id *)arg1;	// IMP=0x001000000017f897
- (void)exitKnownTimeoutRisk;	// IMP=0x001000000017f82b
- (void)enterKnownTimeoutRisk:(unsigned long long)arg1;	// IMP=0x001000000017f793
- (void)dumpBreadcrumps;	// IMP=0x001000000017f512
- (void)addBreadcrumb:(id)arg1;	// IMP=0x001000000017f25a
- (id)init;	// IMP=0x001000000017f148

@end

