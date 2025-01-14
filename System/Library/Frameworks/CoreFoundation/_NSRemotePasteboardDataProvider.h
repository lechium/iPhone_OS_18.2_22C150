//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _NSRemotePasteboardDataProvider : NSObject
{
    long long _generation;	// 8 = 0x8
    long long _itemIdentifier;	// 16 = 0x10
    struct __CFString *_flavorName;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
}

@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy) NSString *description;
- (void)getDataWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000112a2e
- (void)dealloc;	// IMP=0x00000000001129c2
@property(copy, nonatomic) NSString *type;
- (id)initWithGeneration:(long long)arg1 itemIdentifier:(long long)arg2 flavorName:(struct __CFString *)arg3;	// IMP=0x00000000001128d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

