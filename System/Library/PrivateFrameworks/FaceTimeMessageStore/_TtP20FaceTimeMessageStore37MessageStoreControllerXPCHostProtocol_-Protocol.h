//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSUUID, _TtC20FaceTimeMessageStore10XPCWrapper, _TtC20FaceTimeMessageStore7Message;
@protocol _FTMSMessageStoreControllerClientDelegate;

@protocol _TtP20FaceTimeMessageStore37MessageStoreControllerXPCHostProtocol_
- (void)getAccountInfoWithCompletion:(void (^)(_TtC20FaceTimeMessageStore10XPCWrapper *, NSError *))arg1;
- (void)isTranscriptionEnabledWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)saveMessageToPhotoLibraryWithMessageUUID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateMessages:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getMessageCountFor:(_TtC20FaceTimeMessageStore10XPCWrapper *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)deleteMessagesWithQuery:(_TtC20FaceTimeMessageStore10XPCWrapper *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getMessagesWithFetchRequest:(_TtC20FaceTimeMessageStore10XPCWrapper *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)addMessage:(_TtC20FaceTimeMessageStore7Message *)arg1 completion:(void (^)(_TtC20FaceTimeMessageStore7Message *, NSError *))arg2;
- (void)pingWithCompletion:(void (^)(NSError *))arg1;
@property(nonatomic, retain) id <_FTMSMessageStoreControllerClientDelegate> delegate;
@end
