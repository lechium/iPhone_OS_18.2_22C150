//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNMemojiMetadata, NSData, NSString;

@protocol CNAvatarPickerServiceHostProtocol <NSObject>
- (void)avatarPickerExtensionDidDeleteAvatarWithIdentifier:(NSString *)arg1;
- (void)avatarPickerExtensionDidCreateAvatarWithRecordData:(NSData *)arg1 identifier:(NSString *)arg2;
- (void)avatarPickerExtensionDidRequestMemojiEditorPresentationForRecordIdentifier:(NSString *)arg1;
- (void)avatarPickerExtensionDidCancel;
- (void)avatarPickerExtensionDidFinishWithImageData:(NSData *)arg1 memojiMetadata:(CNMemojiMetadata *)arg2;
- (void)avatarPickerExtensionDidSelectItemWithImageData:(NSData *)arg1 memojiMetadata:(CNMemojiMetadata *)arg2;
@end
