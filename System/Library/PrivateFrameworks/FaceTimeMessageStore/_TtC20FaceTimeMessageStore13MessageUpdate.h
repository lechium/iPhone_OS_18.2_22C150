//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC20FaceTimeMessageStore13MessageUpdate : NSObject
{
    MISSING_TYPE *recordUUID;	// 7832 = 0x1e98
    MISSING_TYPE *callUUID;	// 924432 = 0xe1b10
    MISSING_TYPE *conversationID;	// 0 = 0x0
    MISSING_TYPE *from;	// 0 = 0x0
    MISSING_TYPE *provider;	// 0 = 0x0
    MISSING_TYPE *isRead;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *duration;	// 1936941407 = 0x7373615f
    MISSING_TYPE *mailboxType;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *recipient;	// 0 = 0x0
    MISSING_TYPE *transcriptionStatus;	// 932264 = 0xe39a8
    MISSING_TYPE *isRTT;	// 976 = 0x3d0
    MISSING_TYPE *transcriptURL;	// 932264 = 0xe39a8
    MISSING_TYPE *simID;	// 0 = 0x0
    MISSING_TYPE *dateCreated;	// 0 = 0x0
    MISSING_TYPE *voicemailID;	// 0 = 0x0
    MISSING_TYPE *undelete;	// 2004049759 = 0x77735f5f
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x00100000000c7b2a
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000c7aed
- (void).cxx_destruct;	// IMP=0x00000000000ca91b
- (id)init;	// IMP=0x00000000000ca263
@property(nonatomic, readonly) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c95b9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c8df8

@end

