//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriKitRuntime/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface _TtC14SiriKitRuntime27ConversationCanHandleResult : NSObject <NSSecureCoding>
{
    MISSING_TYPE *directlySupported;	// 8 = 0x8
    MISSING_TYPE *exclude;	// 9 = 0x9
    MISSING_TYPE *reformedInput;	// 0 = 0x0
    MISSING_TYPE *flowIdentifier;	// 0 = 0x0
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x00100000000d5bf0
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000d5b80
- (void).cxx_destruct;	// IMP=0x00000000000d7610
- (id)init;	// IMP=0x00000000000d75b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d6ef0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d6ad0

@end
