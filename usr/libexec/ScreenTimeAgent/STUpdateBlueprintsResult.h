//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class STUnifiedTransportPayloadDestination;

@interface STUpdateBlueprintsResult : NSObject
{
    long long _type;	// 8 = 0x8
    STUnifiedTransportPayloadDestination *_returnDestination;	// 16 = 0x10
}

+ (id)outOfDateWithReturnDestination:(id)arg1;	// IMP=0x00200000000bbc6f
+ (id)success;	// IMP=0x00100000000bbc42
- (void).cxx_destruct;	// IMP=0x00200000000bc025
@property(readonly) STUnifiedTransportPayloadDestination *returnDestination; // @synthesize returnDestination=_returnDestination;
@property(readonly) long long type; // @synthesize type=_type;
- (unsigned long long)hash;	// IMP=0x00100000000bbfa4
- (_Bool)isEqualToResult:(id)arg1;	// IMP=0x00100000000bbe7f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000bbe1c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000bbdcf
- (id)description;	// IMP=0x00100000000bbcc1
- (id)_initWithType:(long long)arg1 returnDestination:(id)arg2;	// IMP=0x00100000000bbbe2

@end
