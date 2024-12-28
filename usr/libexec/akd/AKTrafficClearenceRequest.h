//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString;
@protocol AKAuthenticatedServerRequest, AKAuthenticationContext_Internal;

@interface AKTrafficClearenceRequest : NSObject
{
    unsigned int _requestQosClass;	// 8 = 0x8
    id <AKAuthenticatedServerRequest> _context;	// 16 = 0x10
    id <AKAuthenticationContext_Internal> _authContext;	// 24 = 0x18
    MISSING_TYPE *_clearanceHandler;	// 32 = 0x20
    NSString *_clientBundleID;	// 40 = 0x28
    NSDate *_requestDate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000c1210
@property(readonly, nonatomic) unsigned int requestQosClass; // @synthesize requestQosClass=_requestQosClass;
@property(retain, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(retain, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(copy, nonatomic) CDUnknownBlockType clearanceHandler; // @synthesize clearanceHandler=_clearanceHandler;
@property(retain, nonatomic) id <AKAuthenticationContext_Internal> authContext; // @synthesize authContext=_authContext;
@property(retain, nonatomic) id <AKAuthenticatedServerRequest> context; // @synthesize context=_context;
- (id)description;	// IMP=0x00100000000c10ae
- (id)init;	// IMP=0x00100000000c1040

@end
