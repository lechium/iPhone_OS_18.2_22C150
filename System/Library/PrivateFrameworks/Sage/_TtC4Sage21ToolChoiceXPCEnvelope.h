//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData;

@interface _TtC4Sage21ToolChoiceXPCEnvelope : NSObject
{
    MISSING_TYPE *_toolChoice;	// 8 = 0x8
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x001000000001beb2
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001be75
- (void).cxx_destruct;	// IMP=0x000000000001c17a
- (id)init;	// IMP=0x000000000001c167
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001c0fa
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001c0b2
@property(nonatomic, copy) NSData *_toolChoice;

@end
