//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICCloudSyncingObjectCryptoStrategy-Protocol.h>

@class NSData;

@protocol ICAttachmentPreviewImageCryptoStrategy <ICCloudSyncingObjectCryptoStrategy>
- (NSData *)decryptedImageData;
- (NSData *)decryptedMetadata;
- (_Bool)writeEncryptedImageData:(NSData *)arg1;
- (_Bool)writeEncryptedMetadata:(NSData *)arg1;
@end

