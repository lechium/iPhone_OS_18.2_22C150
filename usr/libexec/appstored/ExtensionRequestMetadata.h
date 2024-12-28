//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASDExtensionRequest, ASDInstallationEvent, MISSING_TYPE, NSString, NSUUID;
@protocol ASDEventServiceExtensionRemoteXPCInterface;

@interface ExtensionRequestMetadata : NSObject
{
    ASDExtensionRequest *_request;	// 8 = 0x8
    id <ASDEventServiceExtensionRemoteXPCInterface> _context;	// 16 = 0x10
    NSUUID *_requestIdentifier;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    long long _retryCount;	// 40 = 0x28
    ASDInstallationEvent *_lastEvent;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001e5c8e
- (MISSING_TYPE *)isEqual: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001e5c2f
- (unsigned long long)hash;	// IMP=0x00100000001e5c19

@end
