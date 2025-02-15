//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CLRegion, NSString, NSURL, NSUUID;

@protocol CPSDaemonProtocolNonEntitled <NSObject>
- (void)getWebClipDictionaryWithIdentifier:(NSUUID *)arg1 reply:(void (^)(NSError *, NSDictionary *))arg2;
- (void)fetchWebClipsURLStringForClientBundleID:(NSString *)arg1 reply:(void (^)(NSError *, NSArray *))arg2;
- (void)fetchWebClipsUUIDStringForClientBundleID:(NSString *)arg1 reply:(void (^)(NSError *, NSArray *))arg2;
- (void)confirmLocationWithURL:(NSURL *)arg1 inRegion:(CLRegion *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
@end

