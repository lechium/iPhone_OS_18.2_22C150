//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSMessage, NSData, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKRemoteItemForSending : NSObject
{
    _Bool _previewIsFullyRealizedByChatKit;	// 8 = 0x8
    NSURL *_attachmentURL;	// 16 = 0x10
    NSString *_attachmentDescription;	// 24 = 0x18
    NSURL *_appendedVideoURL;	// 32 = 0x20
    NSURL *_appendedBundleURL;	// 40 = 0x28
    NSURL *_appendedRichLinkURL;	// 48 = 0x30
    NSData *_appendedRichLinkData;	// 56 = 0x38
    MSMessage *_appendedMessage;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000013390a
+ (id)_sharedIOSurfaceCIContext;	// IMP=0x00100000001337cb
+ (_Bool)hasAppendedVideo:(id)arg1;	// IMP=0x0010000000132aea
+ (id)previewQueue;	// IMP=0x0010000000132a1f
- (void).cxx_destruct;	// IMP=0x0000000000133f0d
@property(copy, nonatomic) MSMessage *appendedMessage; // @synthesize appendedMessage=_appendedMessage;
@property(copy, nonatomic) NSData *appendedRichLinkData; // @synthesize appendedRichLinkData=_appendedRichLinkData;
@property(retain, nonatomic) NSURL *appendedRichLinkURL; // @synthesize appendedRichLinkURL=_appendedRichLinkURL;
@property(retain, nonatomic) NSURL *appendedBundleURL; // @synthesize appendedBundleURL=_appendedBundleURL;
@property(retain, nonatomic) NSURL *appendedVideoURL; // @synthesize appendedVideoURL=_appendedVideoURL;
@property(nonatomic) _Bool previewIsFullyRealizedByChatKit; // @synthesize previewIsFullyRealizedByChatKit=_previewIsFullyRealizedByChatKit;
@property(retain, nonatomic) NSString *attachmentDescription; // @synthesize attachmentDescription=_attachmentDescription;
@property(retain, nonatomic) NSURL *attachmentURL; // @synthesize attachmentURL=_attachmentURL;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000133b17
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000133912
- (id)previewUIImage;	// IMP=0x0000000000133902
- (id)description;	// IMP=0x0000000000133777
- (void)_setPreviewUIImage:(id)arg1;	// IMP=0x0000000000133771
- (void)dealloc;	// IMP=0x0000000000133742
- (void)beginPreviewCreation;	// IMP=0x0000000000133457
- (id)initWithMSMessage:(id)arg1;	// IMP=0x00000000001333ec
- (id)initWithRichLinkWithURL:(id)arg1 data:(id)arg2;	// IMP=0x000000000013333f
- (id)initWithAttachmentURL:(id)arg1 description:(id)arg2 blockOnPreviewCreation:(_Bool)arg3;	// IMP=0x0000000000133327
- (id)initWithAttachmentURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3 blockOnPreviewCreation:(_Bool)arg4;	// IMP=0x0000000000132de7
- (_Bool)isAttachmentTooLarge:(id)arg1;	// IMP=0x0000000000132b3b

@end

