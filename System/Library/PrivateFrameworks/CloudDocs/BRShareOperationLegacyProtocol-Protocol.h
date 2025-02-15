//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocs/BRShareOperationProtocol-Protocol.h>

@class NSObject, NSURL;
@protocol BROperationClient;

@protocol BRShareOperationLegacyProtocol <BRShareOperationProtocol>
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toProcessSubitemsAtURL:(NSURL *)arg2 maxSubsharesFailures:(unsigned long long)arg3 processType:(unsigned long long)arg4 reply:(void (^)(NSError *))arg5;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toPrepFolderForSharingAt:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopyParticipantTokenAtURL:(NSURL *)arg2 reply:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toModifyRecordAccessAtURL:(NSURL *)arg2 allowAccess:(_Bool)arg3 reply:(void (^)(NSData *, NSString *, NSError *))arg4;
- (void)createSharingInfoForURL:(NSURL *)arg1 reply:(void (^)(CKShare *, NSError *))arg2;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopySharingInfoAtURL:(NSURL *)arg2 reply:(void (^)(CKShare *, NSURL *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopySharingAccessToken:(NSURL *)arg2 reply:(void (^)(NSData *, NSString *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopyShareInfoAtURL:(NSURL *)arg2 reply:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopyShortTokenAtURL:(NSURL *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)startOperation:(NSObject<BROperationClient> *)arg1 toCopyEtagAtURL:(NSURL *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
@end

