//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CADDiagnosticsCalDAVSpotlightLogCollector : NSObject
{
    NSArray *_orderedInputURLs;	// 8 = 0x8
    NSArray *_orderedOutputURLs;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003d04b
- (void)collect:(id)arg1;	// IMP=0x000000000003cd73
- (id)parseFilenameDates:(id)arg1 context:(id)arg2;	// IMP=0x000000000003ca25
- (id)sortAndTrimLogFiles:(id)arg1 context:(id)arg2;	// IMP=0x000000000003c7dc
- (id)findAllLogFiles:(id)arg1;	// IMP=0x000000000003c43a
- (void)determineExpectedOutputFiles:(id)arg1;	// IMP=0x000000000003c138

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
