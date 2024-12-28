//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MRDTimingEvent;

@interface MRDGroupSessionCreateTimingEvents : NSObject
{
    MISSING_TYPE *tracked;	// 8 = 0x8
    MISSING_TYPE *eventName;	// 16 = 0x10
    MISSING_TYPE *propertyMap;	// 32 = 0x20
    MISSING_TYPE *routeType;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_nearbyGroup;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_nearbyInvitation;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x004000000020f0b0
- (id)init;	// IMP=0x001000000020f080
- (void)track;	// IMP=0x001000000020f060
- (void)trackWithError:(id)arg1;	// IMP=0x001000000020f040
- (id)initWithRouteType:(unsigned char)arg1;	// IMP=0x001000000020f020
@property(nonatomic, retain) MRDTimingEvent *nearbyInvitation;
@property(nonatomic, retain) MRDTimingEvent *nearbyGroup;
@property(nonatomic) unsigned char routeType; // @synthesize routeType;

@end
