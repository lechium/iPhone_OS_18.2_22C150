//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMTransferServices/IMTransferServicesController.h>

@interface IMTransferServicesController (IMTransferServicesController_PreviewGeneration)
- (_Bool)failTransfersOnPreviewGenerationFailure;	// IMP=0x00900000001debb0
- (id)transferServicesController;	// IMP=0x00900000001deb97
- (void)receiveFileTransfer:(id)arg1 transferGUID:(id)arg2 topic:(id)arg3 path:(id)arg4 requestURLString:(id)arg5 ownerID:(id)arg6 signature:(id)arg7 decryptionKey:(id)arg8 fileSize:(unsigned long long)arg9 balloonBundleID:(id)arg10 senderContext:(id)arg11 progressBlock:(CDUnknownBlockType)arg12 completionBlock:(CDUnknownBlockType)arg13;	// IMP=0x00900000001de7bb
- (void)generatePreviewForTransfer:(id)arg1 attachmentPath:(id)arg2 balloonBundleID:(id)arg3 senderContext:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00900000001dd43e
@end

