//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString;

@protocol BRItemServiceProtocol
- (void)getServerContentSignature:(void (^)(NSData *, NSError *))arg1;
- (void)getServerSaltingKeys:(void (^)(NSData *, NSData *, NSData *, unsigned int, NSError *))arg1;
- (void)getClientSaltingVerificationKeys:(void (^)(NSData *, NSData *, NSData *, unsigned int, NSError *))arg1;
- (void)getCreatorNameComponents:(void (^)(NSPersonNameComponents *, NSError *))arg1;
- (void)copyShareIDWithReply:(void (^)(CKRecordID *, NSError *))arg1;
- (void)launchItemCountMismatchChecks:(void (^)(_Bool, NSError *))arg1;
- (void)refreshSharingState:(void (^)(NSError *))arg1;
- (void)getiWorkNeedsShareMigrate:(void (^)(_Bool, NSError *))arg1;
- (void)getiWorkPublishingBadgingStatus:(void (^)(int, NSError *))arg1;
- (void)setiWorkPublishingInfo:(_Bool)arg1 readonly:(_Bool)arg2 reply:(void (^)(NSError *))arg3;
- (void)getiWorkPublishingInfo:(void (^)(_Bool, _Bool, NSString *, NSError *))arg1;
- (void)getAttributeValues:(NSArray *)arg1 reply:(void (^)(NSMutableDictionary *, NSError *))arg2;
- (void)getPublishedURLForStreaming:(_Bool)arg1 requestedTTL:(unsigned long long)arg2 reply:(void (^)(NSURL *, NSDate *, NSError *))arg3;
- (void)getBookmarkData:(_Bool)arg1 allowAccessByBundleID:(NSString *)arg2 documentID:(NSNumber *)arg3 isDirectory:(_Bool)arg4 reply:(void (^)(NSString *, NSString *, NSError *))arg5;
- (void)capabilityWhenTryingToReparentToNewParent:(NSString *)arg1 domain:(NSString *)arg2 reply:(void (^)(unsigned short, NSError *))arg3;
- (void)unboostFilePresenter:(void (^)(NSError *))arg1;
- (void)boostFilePresenter:(void (^)(NSError *))arg1;
@end

