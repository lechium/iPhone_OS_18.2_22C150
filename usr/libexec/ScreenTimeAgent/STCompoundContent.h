//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface STCompoundContent : NSObject
{
    NSArray *_messageContentTypes;	// 8 = 0x8
    NSArray *_messageContents;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000014c1a
+ (long long)contentType;	// IMP=0x00100000000148be
- (void).cxx_destruct;	// IMP=0x0020000000014fcc
@property(readonly, copy) NSArray *messageContents; // @synthesize messageContents=_messageContents;
@property(readonly, copy) NSArray *messageContentTypes; // @synthesize messageContentTypes=_messageContentTypes;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToCompoundContent:(id)arg1;	// IMP=0x0010000000014cd2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000014c6f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000014c22
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000014b6c
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000014966
@property(readonly, copy) NSString *description;
- (id)initWithMessageContentTypes:(id)arg1 messageContents:(id)arg2;	// IMP=0x0010000000014807

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
