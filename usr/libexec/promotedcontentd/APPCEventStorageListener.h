//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface APPCEventStorageListener
{
    NSSet *_allowList;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000014cfcd
- (void).cxx_destruct;	// IMP=0x002000000014dc44
@property(readonly, nonatomic) NSSet *allowList; // @synthesize allowList=_allowList;
- (void)_storeEvent:(id)arg1;	// IMP=0x001000000014d37e
- (void)start;	// IMP=0x001000000014d12d
- (id)init;	// IMP=0x001000000014d0ad

@end

