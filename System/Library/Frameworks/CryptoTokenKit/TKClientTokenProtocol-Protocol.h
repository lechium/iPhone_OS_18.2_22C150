//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CryptoTokenKit/NSObject-Protocol.h>

@class LAContext, NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol TKClientTokenProtocol <NSObject>
- (void)endSession:(NSNumber *)arg1 reply:(void (^)(void))arg2;
- (void)session:(NSNumber *)arg1 slotNameWithReply:(void (^)(NSString *))arg2;
- (void)session:(NSNumber *)arg1 deleteObjectWithObjectID:(NSData *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)session:(NSNumber *)arg1 createObjectWithAttributes:(NSDictionary *)arg2 reply:(void (^)(NSData *, NSDictionary *, NSError *))arg3;
- (void)session:(NSNumber *)arg1 objectID:(NSData *)arg2 operation:(long long)arg3 data:(NSData *)arg4 algorithms:(NSArray *)arg5 parameters:(NSDictionary *)arg6 reply:(void (^)(id, NSError *))arg7;
- (void)session:(NSNumber *)arg1 getAttributesOfObjectID:(NSData *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)session:(NSNumber *)arg1 evaluateAccessControl:(NSData *)arg2 forOperation:(NSString *)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)session:(NSNumber *)arg1 getAdvertisedItemsWithReply:(void (^)(NSArray *))arg2;
- (void)startSessionWithLAContext:(LAContext *)arg1 parameters:(NSDictionary *)arg2 reply:(void (^)(NSNumber *, NSError *))arg3;
@end

