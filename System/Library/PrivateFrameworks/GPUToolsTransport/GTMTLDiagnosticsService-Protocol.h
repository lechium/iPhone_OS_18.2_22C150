//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol GTMTLDiagnosticsServiceObserver;

@protocol GTMTLDiagnosticsService
- (void)deregisterObserver:(unsigned long long)arg1;
- (unsigned long long)registerObserver:(id <GTMTLDiagnosticsServiceObserver>)arg1;
- (void)raiseRuntimeIssue:(NSString *)arg1;
@end
