//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSString;

@interface AMSFinalizedBlind : NSObject
{
    MISSING_TYPE *finalizedData;	// 8 = 0x8
    MISSING_TYPE *privateInput;	// 24 = 0x18
    MISSING_TYPE *timestamp;	// 40 = 0x28
    MISSING_TYPE *adamId;	// 56 = 0x38
}

+ (id)finalizedBlindWith:(id)arg1 privateInput:(id)arg2 timestamp:(id)arg3 adamId:(id)arg4;	// IMP=0x0060000000036903
- (void).cxx_destruct;	// IMP=0x0000000000036a5e
- (id)init;	// IMP=0x0000000000036a4b
- (id)initWithFinalizedData:(id)arg1 privateInput:(id)arg2 timestamp:(id)arg3 adamId:(id)arg4;	// IMP=0x0000000000036794
@property(nonatomic, readonly) NSString *adamId;
@property(nonatomic, readonly) NSString *timestamp;
@property(nonatomic, readonly) NSData *privateInput;
@property(nonatomic, readonly) NSData *finalizedData;

@end
