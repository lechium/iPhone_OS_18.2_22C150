//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MRDTimingEvent, NSNumber;

@interface MRDGroupSessionJoinAttemptAnalytics : NSObject
{
    MISSING_TYPE *tracked;	// 8 = 0x8
    MISSING_TYPE *eventName;	// 16 = 0x10
    MISSING_TYPE *propertyMap;	// 32 = 0x20
    MISSING_TYPE *joinMode;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_request;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_recon;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_whaConnect;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x004000000020ea20
- (id)init;	// IMP=0x001000000020e9e0
- (void)track;	// IMP=0x001000000020e9c0
- (void)trackWithError:(id)arg1;	// IMP=0x001000000020e9a0
- (id)initWithJoinMode:(id)arg1;	// IMP=0x001000000020e960
@property(nonatomic, retain) MRDTimingEvent *whaConnect;
@property(nonatomic, retain) MRDTimingEvent *recon;
@property(nonatomic, retain) MRDTimingEvent *request;
@property(nonatomic, retain) NSNumber *joinMode; // @synthesize joinMode;

@end

