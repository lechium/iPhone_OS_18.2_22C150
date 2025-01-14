//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IDSPseudonym, IDSURI, NSData, NSDictionary, NSSet, NSURL;

@protocol CSDIDSServiceDependencies <NSObject>
- (IDSPseudonym *)pseudonymForPseudonymURI:(IDSURI *)arg1;
- (void)verifySignedData:(NSData *)arg1 matchesExpectedData:(NSData *)arg2 withTokenURI:(IDSURI *)arg3 forAlgorithm:(long long)arg4 completion:(void (^)(_Bool, NSError *))arg5;
- (void)signData:(NSData *)arg1 withAlgorithm:(long long)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (_Bool)sendResourceAtURL:(NSURL *)arg1 metadata:(NSDictionary *)arg2 toDestinations:(NSSet *)arg3 priority:(long long)arg4 options:(NSDictionary *)arg5 identifier:(id *)arg6 error:(id *)arg7;
- (_Bool)sendData:(NSData *)arg1 toDestinations:(NSSet *)arg2 priority:(long long)arg3 options:(NSDictionary *)arg4 identifier:(id *)arg5 error:(id *)arg6;
@end

