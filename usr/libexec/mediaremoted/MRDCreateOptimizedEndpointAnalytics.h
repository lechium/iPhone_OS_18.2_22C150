//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MRDTimingEvent, NSString;

@interface MRDCreateOptimizedEndpointAnalytics : NSObject
{
    MISSING_TYPE *requestID;	// 8 = 0x8
    MISSING_TYPE *requestContainsLocal;	// 24 = 0x18
    MISSING_TYPE *numberOfUndesiredDevices;	// 32 = 0x20
    MISSING_TYPE *numberOfDevicesOnLocal;	// 40 = 0x28
    MISSING_TYPE *eventName;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_discoverOutputDevices;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_searchEndpointsForLocalDevice;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_createEndpoint;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_waitForCompletion;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_removeUndesiredDevicesOutputContextModification;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_followupOutputContextModification;	// 104 = 0x68
    MISSING_TYPE *tracked;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x004000000022ef80
- (id)init;	// IMP=0x001000000022ef50
- (void)track;	// IMP=0x001000000022ef30
- (void)trackWithError:(id)arg1;	// IMP=0x001000000022ef10
- (id)initWithRequestID:(id)arg1;	// IMP=0x001000000022eee0
@property(nonatomic, retain) MRDTimingEvent *followupOutputContextModification;
@property(nonatomic, retain) MRDTimingEvent *removeUndesiredDevicesOutputContextModification;
@property(nonatomic, retain) MRDTimingEvent *waitForCompletion;
@property(nonatomic, retain) MRDTimingEvent *createEndpoint;
@property(nonatomic, retain) MRDTimingEvent *searchEndpointsForLocalDevice;
@property(nonatomic, retain) MRDTimingEvent *discoverOutputDevices;
@property(nonatomic) long long numberOfDevicesOnLocal; // @synthesize numberOfDevicesOnLocal;
@property(nonatomic) long long numberOfUndesiredDevices; // @synthesize numberOfUndesiredDevices;
@property(nonatomic) _Bool requestContainsLocal; // @synthesize requestContainsLocal;
@property(nonatomic, copy) NSString *requestID;

@end
