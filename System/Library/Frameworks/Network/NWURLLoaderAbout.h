//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol OS_nw_connection, OS_nw_http_fields, OS_sec_trust;

__attribute__((visibility("hidden")))
@interface NWURLLoaderAbout : NSObject
{
    NSURL *_URL;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000881da0
@property(readonly, nonatomic) NSObject<OS_nw_connection> *underlyingConnection;
- (void)writeData:(id)arg1 complete:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000881d50
@property(readonly, nonatomic) _Bool allowsWrite;
@property(readonly, nonatomic) NSObject<OS_nw_http_fields> *trailerFields;
- (id)takeCachedResponse;	// IMP=0x0000000000881d20
- (void)notifyRequestCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000881d10
@property(readonly, nonatomic) _Bool requestComplete;
@property(readonly, nonatomic) NSObject<OS_sec_trust> *peerTrust;
@property(readonly, nonatomic) NSString *multipartMixedReplaceBoundary;
- (void)readDataOfMinimumIncompleteLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000881cc0
- (void)readResponse:(CDUnknownBlockType)arg1;	// IMP=0x0000000000881c40
- (void)updateClient:(id)arg1;	// IMP=0x0000000000881c30
- (void)stop;	// IMP=0x0000000000881c20
- (void)start:(CDUnknownBlockType)arg1;	// IMP=0x0000000000881c10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

