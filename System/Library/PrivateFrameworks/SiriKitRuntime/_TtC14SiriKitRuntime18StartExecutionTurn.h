//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriKitRuntime/NSSecureCoding-Protocol.h>

@class MISSING_TYPE, NSString;

@interface _TtC14SiriKitRuntime18StartExecutionTurn : NSObject <NSSecureCoding>
{
    MISSING_TYPE *executionRequestId;	// 8 = 0x8
    MISSING_TYPE *rootRequestId;	// 24 = 0x18
    MISSING_TYPE *sessionId;	// 0 = 0x0
    MISSING_TYPE *isTapToEdit;	// 1868783455 = 0x6f635f5f
    MISSING_TYPE *isMUXEnabled;	// 0 = 0x0
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x001000000030eba0
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000030eb30
- (void).cxx_destruct;	// IMP=0x000000000030faf0
- (id)init;	// IMP=0x000000000030fa90
@property(nonatomic, readonly) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000030f5d0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000030f360

@end

