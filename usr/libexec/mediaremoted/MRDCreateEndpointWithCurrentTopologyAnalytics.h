//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MRDTimingEvent, NSString;

@interface MRDCreateEndpointWithCurrentTopologyAnalytics : NSObject
{
    MISSING_TYPE *requestID;	// 8 = 0x8
    MISSING_TYPE *undiscoverableGroupLeader;	// 24 = 0x18
    MISSING_TYPE *containsLeaderInfo;	// 25 = 0x19
    MISSING_TYPE *airplayActive;	// 26 = 0x1a
    MISSING_TYPE *eventName;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_findMyGroupLeader;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_createOptimizedEndpoint;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_createEndpoint;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_discoverGroup;	// 72 = 0x48
    MISSING_TYPE *tracked;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x004000000022fa30
- (id)init;	// IMP=0x001000000022fa00
- (void)track;	// IMP=0x001000000022f9e0
- (void)trackWithError:(id)arg1;	// IMP=0x001000000022f9c0
- (id)initWithRequestID:(id)arg1;	// IMP=0x001000000022f990
@property(nonatomic, retain) MRDTimingEvent *discoverGroup;
@property(nonatomic, retain) MRDTimingEvent *createEndpoint;
@property(nonatomic, retain) MRDTimingEvent *createOptimizedEndpoint;
@property(nonatomic, retain) MRDTimingEvent *findMyGroupLeader;
@property(nonatomic) _Bool airplayActive; // @synthesize airplayActive;
@property(nonatomic) _Bool containsLeaderInfo; // @synthesize containsLeaderInfo;
@property(nonatomic) _Bool undiscoverableGroupLeader; // @synthesize undiscoverableGroupLeader;
@property(nonatomic, copy) NSString *requestID;

@end
