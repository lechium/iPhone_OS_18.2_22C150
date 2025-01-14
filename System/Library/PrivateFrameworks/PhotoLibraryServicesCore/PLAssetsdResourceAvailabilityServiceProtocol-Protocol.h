//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServicesCore/NSObject-Protocol.h>

@class NSProgress, NSSet, PHVideoXPCRequest, PLResourceXPCMakeAvailableRequest, PLResourceXPCRequest, PLXPCShMemObject;

@protocol PLAssetsdResourceAvailabilityServiceProtocol <NSObject>
- (void)makeResourceUnavailableWithRequest:(PLResourceXPCMakeAvailableRequest *)arg1;
- (void)initializeSharedMemoryForCacheMetricsCollector:(PLXPCShMemObject *)arg1;
- (NSProgress *)appyCorrectionsToAssetWithRequest:(PLResourceXPCRequest *)arg1 errorCodes:(NSSet *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (NSProgress *)appyCorrectionsToResourceWithRequest:(PLResourceXPCMakeAvailableRequest *)arg1 errorCodes:(NSSet *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (NSProgress *)runVideoRequest:(PHVideoXPCRequest *)arg1 reply:(void (^)(_Bool, NSURL *, NSData *, NSDictionary *, NSDictionary *, NSError *))arg2;
- (NSProgress *)makeResourceAvailableWithRequest:(PLResourceXPCMakeAvailableRequest *)arg1 reply:(void (^)(_Bool, NSURL *, NSData *, NSDictionary *, NSError *))arg2;
@end

