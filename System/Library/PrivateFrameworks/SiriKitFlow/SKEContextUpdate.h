//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SKEContextUpdate : NSObject
{
    MISSING_TYPE *provideContextCommand;	// 8 = 0x8
    MISSING_TYPE *nativeFlowContextCommand;	// 16 = 0x10
    MISSING_TYPE *systemDialogActs;	// 24 = 0x18
    MISSING_TYPE *rrEntities;	// 32 = 0x20
}

+ (void)setSupportsSecureCoding:(_Bool)arg1;	// IMP=0x0010000000100c0e
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000100bd1
- (void).cxx_destruct;	// IMP=0x00000000001019d2
- (id)init;	// IMP=0x000000000010199f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000101916
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000101611

@end

