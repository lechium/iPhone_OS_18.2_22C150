//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NDAnalyticsService;

@interface NDAnalyticsServiceListenerDelegate : NSObject
{
    id <NDAnalyticsService> _service;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000006765
@property(retain, nonatomic) id <NDAnalyticsService> service; // @synthesize service=_service;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000661e
- (id)initWithService:(id)arg1;	// IMP=0x0010000000006592
- (id)init;	// IMP=0x001000000000643f

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

