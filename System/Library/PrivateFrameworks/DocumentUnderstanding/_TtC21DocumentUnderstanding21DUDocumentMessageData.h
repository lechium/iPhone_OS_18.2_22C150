//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC21DocumentUnderstanding21DUDocumentMessageData : NSObject
{
    MISSING_TYPE *conversationIdentifier;	// 8 = 0x8
    MISSING_TYPE *creatorHandle;	// 24 = 0x18
    MISSING_TYPE *recipientHandles;	// 40 = 0x28
    MISSING_TYPE *recipientNames;	// 48 = 0x30
    MISSING_TYPE *attachmentFileName;	// 56 = 0x38
    MISSING_TYPE *attachmentFilePath;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000587a9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000058498
- (id)copyWithZone:(void *)arg1;	// IMP=0x000000000005806c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000578e5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000057736
- (id)init;	// IMP=0x000000000005766f
@property(nonatomic, copy) NSString *attachmentFilePath;
@property(nonatomic, copy) NSString *attachmentFileName;
@property(nonatomic, copy) NSArray *recipientNames;
@property(nonatomic, copy) NSArray *recipientHandles;
@property(nonatomic, copy) NSString *creatorHandle;
@property(nonatomic, copy) NSString *conversationIdentifier;

@end

