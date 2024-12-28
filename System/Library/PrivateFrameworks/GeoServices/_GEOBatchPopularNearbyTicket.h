//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractRequestResponseTicket.h"

@class GEOMapServiceTraits, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _GEOBatchPopularNearbyTicket : GEOAbstractRequestResponseTicket
{
    NSArray *_categories;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000709810
- (id)resultSectionHeaderForCategory:(id)arg1;	// IMP=0x0000000000709695
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3;	// IMP=0x0000000000708fe9
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x0000000000708fd2
- (id)initWithRequest:(id)arg1 traits:(id)arg2 categories:(id)arg3;	// IMP=0x0000000000708f31

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic) CDStruct_026435ec dataRequestKind;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end
