//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC14CopresenceCore20AttachmentDataReport : NSObject
{
    MISSING_TYPE *isUpload;	// 8 = 0x8
    MISSING_TYPE *assetTotalSize;	// 16 = 0x10
    MISSING_TYPE *isServerBlocked;	// 25 = 0x19
    MISSING_TYPE *isSubscribe;	// 26 = 0x1a
    MISSING_TYPE *responseTime;	// 32 = 0x20
    MISSING_TYPE *endToEndAttachmentLatency;	// 48 = 0x30
    MISSING_TYPE *loadTime;	// 64 = 0x40
    MISSING_TYPE *totalAttachments;	// 80 = 0x50
    MISSING_TYPE *totalDownloadBytes;	// 96 = 0x60
    MISSING_TYPE *totalUploadBytes;	// 112 = 0x70
    MISSING_TYPE *downloadSpeed;	// 128 = 0x80
    MISSING_TYPE *uploadSpeed;	// 144 = 0x90
    MISSING_TYPE *reportType;	// 160 = 0xa0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000049a00
- (id)init;	// IMP=0x000000000004a8c0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004a070
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000049fb0

@end
