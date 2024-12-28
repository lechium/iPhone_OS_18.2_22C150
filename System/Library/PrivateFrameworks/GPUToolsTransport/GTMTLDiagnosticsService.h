//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTObservableService;
@protocol OS_os_log;

@interface GTMTLDiagnosticsService : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    GTObservableService *_observers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000015bdf
- (void)notifyCommandBufferIssue:(id)arg1;	// IMP=0x0000000000015b31
- (void)notifyDiagnosticsIssue:(id)arg1;	// IMP=0x0000000000015a65
- (void)raiseRuntimeIssue:(id)arg1;	// IMP=0x00000000000159a3
- (void)deregisterObserversForConnection:(id)arg1 path:(id)arg2;	// IMP=0x000000000001598d
- (void)deregisterObserver:(unsigned long long)arg1;	// IMP=0x0000000000015977
- (unsigned long long)registerObserver:(id)arg1;	// IMP=0x0000000000015961
- (id)init;	// IMP=0x00000000000158c7

@end
