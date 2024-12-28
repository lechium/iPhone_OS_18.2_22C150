//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreNFC/NFSessionInterface-Protocol.h>

@class NSArray, NSData, NSString;
@protocol NFNdefMessage, NFTag;

@protocol NFReaderSessionInterface <NFSessionInterface>
- (oneway void)performVAS:(NSArray *)arg1 completion:(void (^)(NSError *, NSArray *))arg2;
- (oneway void)setECPPayload:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)writeProtectNDEFTagWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)checkNdefSupportWithCompletion:(void (^)(long long, unsigned long long, NSError *))arg1;
- (oneway void)ndefWrite:(id <NFNdefMessage>)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)ndefReadWithCompletion:(void (^)(NSError *, id <NFNdefMessage>))arg1;
- (oneway void)updateSharingUIStateOnInvalidation:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)updateSharingUIScanText:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)checkPresenceWithCompletion:(void (^)(NSError *, _Bool))arg1;
- (oneway void)transceive:(NSData *)arg1 completion:(void (^)(id <NFTag>, NSData *, NSError *))arg2;
- (oneway void)disconnectWithCardRemoval:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)connect:(id <NFTag>)arg1 completion:(void (^)(id <NFTag>, NSError *))arg2;
- (oneway void)restartPollingWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)stopPollingWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)startPollingForNDEFMessagesWithSessionConfig:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)startPollingForTags:(unsigned long long)arg1 sessionConfig:(unsigned long long)arg2 completion:(void (^)(NSError *))arg3;
@end
