//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreLogDropOperationsWithUUID
{
    NSUUID *_uuid;	// 40 = 0x28
    long long _maskValue;	// 48 = 0x30
    long long _compareValue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000b4a3fd
@property(nonatomic) long long compareValue; // @synthesize compareValue=_compareValue;
@property(nonatomic) long long maskValue; // @synthesize maskValue=_maskValue;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)mainReturningError;	// IMP=0x0000000000b49dd7
- (id)initWithUUID:(id)arg1 pushingTo:(unsigned long long)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b49d2f

@end
