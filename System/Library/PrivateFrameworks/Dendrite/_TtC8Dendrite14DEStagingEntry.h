//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData;

@interface _TtC8Dendrite14DEStagingEntry : NSObject
{
    MISSING_TYPE *id;	// 8 = 0x8
    MISSING_TYPE *payload;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000002540
- (void).cxx_destruct;	// IMP=0x0000000000002cc0
- (id)init;	// IMP=0x0000000000002c60
- (id)initWithId:(long long)arg1 payload:(id)arg2;	// IMP=0x0000000000002ae0
@property(nonatomic, readonly) NSData *payload;
@property(nonatomic, readonly) long long id; // @synthesize id;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002930
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002610

@end

