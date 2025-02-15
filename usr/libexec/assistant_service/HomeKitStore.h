//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMHomeManager, NSString;

@interface HomeKitStore : NSObject
{
    HMHomeManager *homeManager;	// 8 = 0x8
    unsigned long long fetchStartTime;	// 16 = 0x10
}

+ (void)refreshCache;	// IMP=0x0020000000003c3a
+ (id)sharedInstance;	// IMP=0x0010000000003b58
- (void).cxx_destruct;	// IMP=0x0020000000003a6c
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x0010000000003a1e
- (id)init;	// IMP=0x00100000000038b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

