//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedRouteStep, NSString;

@interface RAPWebBundleRouteStepContext
{
    GEOComposedRouteStep *_step;	// 8 = 0x8
    _Bool _isMissedStep;	// 16 = 0x10
    NSString *_aggregatedData;	// 24 = 0x18
    NSString *_mapSnapshotId;	// 32 = 0x20
    unsigned long long _routeIndex;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000008c489c
- (id)context;	// IMP=0x00100000008c4191
- (id)initWithRouteStep:(id)arg1 isMissedStep:(_Bool)arg2 aggregatedData:(id)arg3 locales:(id)arg4 mapSnapshotId:(id)arg5 routeIndex:(unsigned long long)arg6;	// IMP=0x00100000008c3f09

@end

