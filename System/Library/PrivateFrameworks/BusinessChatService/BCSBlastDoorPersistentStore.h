//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BCSBlastDoorPersistentStore : NSObject
{
    NSURL *_cacheURL;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000080e30
@property(copy, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
- (void)deleteExpiredImages;	// IMP=0x00000000000809b4
- (void)deleteImageWithName:(id)arg1;	// IMP=0x000000000008083d
- (id)updateImageWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000080651
- (id)fileURLForImageWithName:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000805a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

