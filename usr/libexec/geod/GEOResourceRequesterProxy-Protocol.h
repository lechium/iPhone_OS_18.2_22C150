//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEOApplicationAuditToken, GEOResourceManifestConfiguration, NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol GEOResourceRequesterProxy <NSObject>
- (void)fetchResources:(NSArray *)arg1 force:(_Bool)arg2 unpack:(_Bool)arg3 manifestConfiguration:(GEOResourceManifestConfiguration *)arg4 auditToken:(GEOApplicationAuditToken *)arg5 signpostID:(unsigned long long)arg6 queue:(NSObject<OS_dispatch_queue> *)arg7 handler:(void (^)(NSArray *, NSArray *, NSError *))arg8;
@end

