//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;
@protocol _FTMSMessageStoreControllerClientDelegate;

@interface _TtC20FaceTimeMessageStore18MessageStoreServer : _TtCs12_SwiftObject
{
    MISSING_TYPE *dataSource;	// 16 = 0x10
}

- (void)getAccountInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000799d3
- (void)isTranscriptionEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007954f
- (void)saveMessageToPhotoLibraryWithMessageUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000790d6
- (void)updateMessages:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000078b8e
- (void)getMessageCountFor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000787d5
- (void)deleteMessagesWithQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007822e
- (void)getMessagesWithFetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000077c3f
- (void)addMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000777d1
- (void)pingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000773cc
@property(nonatomic, retain) id <_FTMSMessageStoreControllerClientDelegate> delegate;

@end

