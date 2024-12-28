//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface ICBackgroundTranscriber : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *_currentlyTranscribingAttachment;	// 16 = 0x10
    MISSING_TYPE *_downloadingModel;	// 24 = 0x18
    MISSING_TYPE *failedAttachments;	// 32 = 0x20
    MISSING_TYPE *workerContext;	// 40 = 0x28
}

+ (void)setSharedInstance:(id)arg1;	// IMP=0x00400000002880b0
+ (id)sharedInstance;	// IMP=0x0040000000288000
- (void).cxx_destruct;	// IMP=0x0000000000289a80
- (void)addCallRecordingTranscriptionTaskToQueueWithSpeakers:(id)arg1 NGASR:(_Bool)arg2 attachmentIdentifier:(id)arg3;	// IMP=0x00000000002899d0
- (void)addRetranscriptionTaskToQueueWithSubattachmentAndMediaInfo:(id)arg1 attachmentIdentifier:(id)arg2;	// IMP=0x00000000002889e0
- (void)addFirstTimeTranscriptionTaskToQueueWithMediaURL:(id)arg1 attachmentIdentifier:(id)arg2 subattachmentIdentifier:(id)arg3;	// IMP=0x0000000000288660
- (void)handleResumeForeground;	// IMP=0x0000000000288560
- (id)init;	// IMP=0x0000000000288430

@end
