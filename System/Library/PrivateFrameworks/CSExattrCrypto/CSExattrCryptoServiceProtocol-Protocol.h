//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSDictionary;

@protocol CSExattrCryptoServiceProtocol
- (void)decryptAttributesWithData:(NSArray *)arg1 withReply:(void (^)(NSError *, NSArray *))arg2;
- (void)computeUpdatedCryptoData:(NSData *)arg1 newParams:(NSDictionary *)arg2 isPrivateMDAttributes:(_Bool)arg3 doMergeArrayValues:(_Bool)arg4 replyBlock:(void (^)(NSError *, NSString *, NSData *, NSArray *))arg5;
@end

