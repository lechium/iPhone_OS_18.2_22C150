//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapServiceTraits, NSString;
@protocol GEOMapServiceRefreshEVChargerTicket;

__attribute__((visibility("hidden")))
@interface _MKPlaceEVChargerTicket : NSObject
{
    id <GEOMapServiceRefreshEVChargerTicket> _ticket;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000f2b95
- (void)submitRefreshRequestWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f2857
- (void)cancel;	// IMP=0x00000000000f2841
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (id)initWithTicket:(id)arg1;	// IMP=0x00000000000f27c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
